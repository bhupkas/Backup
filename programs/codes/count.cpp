#include"cstdio"
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
		int N[100002],M[100002],j,temp,i,t,n,m;
		t=read();
		for(j=1;j<=t;j++)
			{
				n=read();m=read();
				for(i=0;i<100002;i++)	N[i]=0;
				for(i=0;i<n;i++)	{temp=read();	N[temp]++;}
				for(i=0;i<m;i++)	M[i]=read();
				printf("Scenario #%d: ",j);
				for(i=0;i<m;i++)	printf("%d",N[M[i]]);
				printf("\n");
			}
		return 0;
	}