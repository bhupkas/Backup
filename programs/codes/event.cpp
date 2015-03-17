#include<cstdio>
using namespace std;
typedef long long int ll;
#define BUF 4096 // block size on my disk is 4KBs
char ibuf[BUF];
ll ipt = BUF;
ll read() {
while (ipt < BUF && ibuf[ipt] < '0') ipt++;
if (ipt == BUF) {
    fread(ibuf, 1, BUF, stdin);
    ipt = 0;
    while (ipt < BUF && ibuf[ipt] < '0') ipt++;
}
ll n = 0;
while (ipt < BUF && ibuf[ipt] >= '0') n = (n*10)+(ibuf[ipt++]-'0');
if (ipt == BUF) {
    fread(ibuf, 1, BUF, stdin);
    ipt = 0;
    while (ipt < BUF && ibuf[ipt] >= '0') n = (n*10)+(ibuf[ipt++]-'0');
}
return n;
}
int main()
	{
	ll A[49][49],c,t,n,u,v,i,j,temp,max[49];
	t=read();
	while(t--)
		{
		for(i=0;i<49;i++)
			for(j=0;j<49;j++)
				A[i][j]=0;
		for(i=0;i<49;i++)
			max[i]=0;
		n=read();
		while(n--)
			{
			u=read();v=read();c=read();
			if(c>A[u][v])
				A[u][v]=c;
			}
		for(j=0;j<49;j++)
			{
			for(i=0;i<j;i++)
				{
				if(A[i][j]+max[i]>max[j])	max[j]=A[i][j]+max[i];
				}
			}
		printf("%lld\n",max[48]);
		}
	return 0;
	}
