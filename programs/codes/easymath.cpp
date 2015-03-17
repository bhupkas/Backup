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
LL gcd(LL a,LL b)
	{
		if(b==0)	return a;
		return gcd(b,a%b);
	}
LL LCM(LL a,LL b)
	{
		if(a>b)	return (a*b)/gcd(a,b);
		return (a*b)/gcd(b,a);
	}
int main()
	{
		LL n,m,a,d,i,j,t,N[5],count,subs,lcm;
		t=read();
		while(t--)
			{
				n=read();m=read();a=read();d=read();
				subs=0;
				N[0]=a;N[1]=a+d;N[2]=a+2*d;N[3]=a+3*d;N[4]=a+4*d;
				for(i=1;i<32;i++)
					{
						lcm=1;
						count=0;
						for(j=0;j<5;j++)
						{
							if(i&(1<<j))
								{
									count++;
									lcm=LCM(lcm,N[j]);
								}
						}
					if(count&1)	{subs+=m/lcm-(n-1)/lcm;}
					else		{subs-=m/lcm-(n-1)/lcm;}
					}
					printf("%lld\n",m-n+1-subs);
			}
		return 0;
	}