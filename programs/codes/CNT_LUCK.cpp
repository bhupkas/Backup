#include"stdio.h"
#include"iostream"
#include"algorithm"
#include"vector"
using namespace std;
typedef long long LL;
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
LL C(LL n,LL r)
	{
		if(n<0)	return 0;
		if(r<0)	return 0;
		if(n<r)	return 0;
		r=min(r,n-r);
		if(r==0)	return 1;
		LL i,re=1;
		for(i=0;i<r;i++)
			{
				re= (re*(n-r+i+1))/(i+1);
			}
		return re;
	}
vector<bool> v;
LL co(LL n)
	{
		if(n==-1 ||n==0)	return 0;
		LL i;
		v.clear();
		LL n1=n,sum=0,si;
		while(n1!=0)
			{
				if(n1&1)	{v.push_back(true);	sum++;}
				else		v.push_back(false);
				n1>>=1;
			}
		LL ans=0;
		si=(LL)v.size();
		LL p_sum=sum;
		for(i=0;i<si;i++)
			{
				if(v[i])	{p_sum--;	ans+=(C(i,4-p_sum)+C(i,7-p_sum)+C(i,44-p_sum)+C(i,47-p_sum));}
			}
		if(sum==4 || sum==7 || sum==47)	ans++;
		return ans;
	}
int main()
	{
		LL t,a,b,i,j;
		t=read();
		while(t--)
			{
				a=read();b=read();
				cout<<co(b)-co(a-1)<<endl;
			}
		return 0;
	}