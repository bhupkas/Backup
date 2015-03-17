#include<iostream>
#include<cstdio>
using namespace std;
typedef long long int ll;
#define mod 1000000007
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
long long int i,num;
ll power(ll n)
	{
	if(n==1)
		return 3;
	if(n%2==0)
		{
		num=power(n/2)%mod;
		return (num*num)%mod;
		}
	else
		{
		num=power(n/2)%mod;
		return (((num*num)%mod)*3)%mod;
		}
	}
int main()
	{
	ll t,n,temp;
	t=read();
	while(t--)
		{
		n=read();
		temp=power(n)%mod;
		if(n%2==0)
			temp+=3;
		else	
			temp-=3;
		if(temp<0)	temp+=mod;
		printf("%lld\n",temp);
		}
	return 0;
	}
