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
int main()
	{
	int ans,t,n,x,l,f,i;
	t=read();
	while(t--)
		{
		ans=0;
		n=read();
		while(n--)
			{
			x=read();l=read();f=read();
			if((x-ans)>0)	ans=x;
			if(f==0)	ans+=l;
			else if(((ans-x)%f)==0)	ans+=l;	
			else ans=(((ans-x)/f)+1)*f+l+x;
			}
		printf("%d\n",ans);
		}
	return 0;
	}
