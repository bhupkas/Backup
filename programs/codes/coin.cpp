#include<stdio.h>
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
	int T,G,N,I,Q,i,j,k;
	T=read();
	while(T--)
		{
		G=read();
		while(G--)
			{
			I=read();
			N=read();
			Q=read();
			if(N&1)
				{
				if(I==Q)	printf("%d\n",N/2);
				else		printf("%d\n",N/2+1);
				}
			else		printf("%d\n",N/2);
			}	
		}
	return 0;
	}
