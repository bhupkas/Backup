#include"stdio.h"
using namespace std;
typedef long long int LL;
#define BUF 4096 // block size on my disk is 4KBs
char ibuf[BUF];
LL ipt = BUF;
LL read() {
while (ipt < BUF && ibuf[ipt] < '0') ipt++;
if (ipt == BUF) {
    fread(ibuf, 1, BUF, stdin);
    ipt = 0;
    while (ipt < BUF && ibuf[ipt] < '0') ipt++;
}
LL n = 0;
while (ipt < BUF && ibuf[ipt] >= '0') n = (n*10)+(ibuf[ipt++]-'0');
if (ipt == BUF) {
    fread(ibuf, 1, BUF, stdin);
    ipt = 0;
    while (ipt < BUF && ibuf[ipt] >= '0') n = (n*10)+(ibuf[ipt++]-'0');
}
return n;
}
LL S[100000],C[1002],F[300];
void pre()
	{
		LL i,te;
		for(i=0;i<100000;i++)
			S[i]=i*i;
		for(i=0;i<1002;i++)
			C[i]=S[i]*i;
		for(i=0;i<300;i++)
			F[i]=S[i]*S[i];
	}
int search(LL m)
{
	int low=0,mid,high=99999;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(mid==99999 && S[mid]<=m)
			return mid;
		else if(S[mid]<=m && S[mid+1]>m)
			return mid;
		else if (S[mid]<=m)
			low=mid+1;
		else
			high=mid-1;
	}
	return -1;
}
int main()
	{
		LL i,j,k,l,t,n,count;
		int idx;
		t=read();
		pre();
		while(t--)
			{
				n=read();
				count=0;
				i=j=k=l=0;
				if(n<0)	{printf("0\n");	continue;}
				while(F[l]<= n)
				{
					k=0;
					while(F[l]+C[k] <= n)
					{
						idx=search(n-F[l]-C[k]);
						idx++;
						count+=idx;
						k++;
					}
				l++;
				}
			printf("%lld\n",count);
			}
		return 0;
	}