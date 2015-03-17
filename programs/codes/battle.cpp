#include<iostream>
#include<cstdio>
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
	int ans,t,n,m,i,C[101],S[101],A[101],vi,li;
	t=read();
	while(t--)
		{
		for(i=0;i<101;++i)	A[i]=C[i]=S[i]=0;
		ans=0;
		n=read();m=read(); 
		while(n--)
			{
			vi=read();li=read();
			C[li]+=vi;
			}
		while(m--)
			{
			vi=read();li=read();
			S[li]+=vi;	
			}
		for(i=0;i<101;i++)	
			{
			if(S[i]>C[i])
			{
			A[i]=S[i]-C[i];
			ans+=A[i];
			//printf("%d\n",A[i]);
			}
			}
		for(i=0;i<101;i++)
			if(A[i]>ans)	ans=A[i];
		printf("%d\n",ans);	
		}
	return 0;
	}
