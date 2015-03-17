#include<iostream>
#include<cstdio>
using namespace std;
typedef long long int ll;
ll A[1000000];
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
void init()
	{
	A[0]=1;
	ll j;
	for(j=1;j<1000000;j++)
		A[j]=(A[j-1]*3)%mod;
	}
long long int i,num;
ll power(ll n)
	{
	ll counter=1,temp,ret=1;
	while(n)
		{
		if(n&1)
			{
			temp=(ret*A[counter])%mod;
			ret=temp;
			}
		n/=2;
		counter++;
		}
	return ret;	
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
