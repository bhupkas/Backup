#include"stdio.h"
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
		int t,n,k,i,V[1001],j;
		bool A[1001];
		t=read();
		while(t--)
			{
				n=read();k=read();
				for(i=0;i<=k;i++)	A[i]=false;
				A[0]=true;
				for(i=0;i<n;i++)	
					{
						V[i]=read();
						for(j=k-V[i];j>=0;j--)
						{
							if(A[j])	{A[j+V[i]]=true;}
						}
					}
				printf("%d\n",(int)A[k]);
			}
	}