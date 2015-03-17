#include"stdio.h"
#include"algorithm"
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
int main()
	{
		int t,n,A[101],i,j,ans;
		t=read();
		while(t--)
			{
				ans=0;
				n=read();
				for(i=0;i<n;i++)	A[i]=read();
				for(i=0;i<n-1;i++)
						if(A[i]!=A[i+1])	break;	
				if(i==n-1)	{printf("0\n");	continue;}
				sort(A,A+n);
				for(i=n-1;i>0;i--)
					{
						if(A[i]!=A[i-1])	
							{
								ans=ans+((A[i]-A[i-1])*(n-i));
							}
					}
				printf("%d\n",ans);
			}
		return 0;
	}