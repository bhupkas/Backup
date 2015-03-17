#include"iostream"
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
LL po(LL a,LL b,LL c)
	{
	if(b==0)	return 1;
	LL re=po(a,b/2,c)%c;
	LL temp=(re*re)%c;
	if(b&1)	return (temp*a)%c;
	return 	temp%c;
	}
int main()
	{
	LL t,n,p,ans,i,j,temp;
	scanf("%lld",&t);
	while(t--)
		{
		scanf("%lld %lld",&n,&p);
		ans=1;
		if(p==n)
			for(i=1;i<p;i++)	ans=(ans*i)%p;
		else if(p>n)
			for(i=1;i<=n;i++)	ans=(ans*i)%p;
		else
			{	
			ans=1;
			temp=1;
			for(i=1;i<p;i++)	temp=(temp*i)%p;
			while(n)
				{
					if(p==n)
						for(i=1;i<p;i++)	ans=(ans*i)%p;
					else if(p>n)
						for(i=1;i<=n;i++)	ans=(ans*i)%p;
					else
						{
							ans=(ans*temp)%p;
							ans=po(ans,n/p,p);
							for(i=1;i<=n%p;i++)
								ans=(ans*i)%p;	
						}
					n=n/p;
				}
			}
		printf("%lld\n",(ans+p)%p);
		}
	return 0;
	}
