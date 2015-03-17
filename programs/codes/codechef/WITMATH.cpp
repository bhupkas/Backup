/* bhupkas */
#include"iostream"
#include"stdio.h"
#include"algorithm"
#include"vector"
#include"string.h"
#include"string"
using namespace std;
#define bit(n)	(1<<(n))
typedef unsigned long long LL;
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
LL MOD(LL a,LL b,LL c)
{
	return ((((a>>20)*b%c)<<20)+(a&(bit(20)-1))*b)%c;
}
LL powmod(LL a,LL n,LL mod)
{
	LL p=1;
	for(;n;)
	{
		if(n%2) p=MOD(p,a,mod);
		if(n/=2) a=MOD(a,a,mod);
	}
	return p;
}

bool witness(LL a,LL n)
{
	LL m,x,y;
	for(m=n-1;m%2==0;m/=2);
	x=powmod(a,m,n);
	for(;m<n-1;m*=2)
	{
		y=MOD(x,x,n);
		if(y==1 && 1<x && x<n-1) return false;
		x=y;
	}
	return x==1;
}
inline bool prob_prime(LL n)
{
	 if(n<2){
return false;
}
if(n==2||n==3||n==5||n==7||n==11||n==13||n==17||n==19||n==23)return true;
if(n%3==0||n%5==0||n%7==0||n%11==0||n%13==0||n%17==0||n%19==0||n%23==0)return false;

if(n!=2 && n%2==0){
return false;
}
	int aa[5]={2,3,5,7,11};
	for(int s=0;s<5;s++)
	{
		LL a=aa[s];
		if(!witness(a,n)) return false;
	}
	return true;
}
int main()
	{
		LL t,n,i;
		t=read();
		while(t--)
			{
				n=read();
				if(n==2)	{printf("2\n");	continue;}
				if(n%2==0)	n--;
				for(i=n;i>0;i-=2)
				{
					if(prob_prime(i))	{printf("%llu\n",i);	break;}
				}
			}
		return 0;
	}