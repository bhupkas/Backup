#include"stdio.h"
using namespace std;
#define BUF 4096 // block size on my disk is 4KBs
char ibuf[BUF];
int ipt = BUF;
int read() {
while (ipt < BUF && ibuf[ipt] < '0') ipt++;
if (ipt == BUF) {
    fread(ibuf, 1, BUF, stdin);
    ipt = 0;
    while (ipt < BUF && ibuf[ipt] < '0') ipt++;
}
int n = 0;
while (ipt < BUF && ibuf[ipt] >= '0') n = (n*10)+(ibuf[ipt++]-'0');
if (ipt == BUF) {
    fread(ibuf, 1, BUF, stdin);
    ipt = 0;
    while (ipt < BUF && ibuf[ipt] >= '0') n = (n*10)+(ibuf[ipt++]-'0');
}
return n;
}
#define FOR(i,a,b)	for(i=a;i<b;i++)
int B[2];
bool check(int A[],int n)
	{
		int i;
		for(i=0;i<n-1;i++)
			if(A[i]!=A[i+1])	break;
		if(i!=n-1)	return false;
		return true;
	}
void minim(int A[],int n)
	{
		int max1=-1,max2,i,j;
		for(i=0;i<n;i++)	
				{
					if(A[i]>max1)	{max1=A[i];	j=i;}
				}
		B[0]=j;
		max2=-1;	
		for(i=0;i<n;i++)
			{
				if(i==j)	continue;
				if(A[i]>max2)	max2=A[i];
			}
		if(max1-max2)	B[1]=max1-max2;
		else			B[1]=1;
	}
int main()
	{
		int max,i,j,t,n,ans,A[101],count;
		t=read();
		while(t--)
			{
				count=0;
				n=read();
				for(i=0;i<n;i++)
					A[i]=read();
				while(!check(A,n))
					{
						minim(A,n);
						for(i=0;i<n;i++)
							{
								if(i==B[0])	continue;
								A[i]+=B[1];
							}
						count+=B[1];
					}
				printf("%d\n",count);
			}
		return 0;
	}