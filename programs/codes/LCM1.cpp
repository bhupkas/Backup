#include"stdio.h"
#include"vector"
#include"map"
using namespace std;
typedef long long int LL;
LL mi(LL a,LL b)
	{
		if(a<b)	return a;
		return b;
	}
LL ma(LL a,LL b)
	{
		if(a>b)	return a;
		return b;
	}
LL gcd(LL a,LL b)
	{
		if(b==0)	return a;
		return gcd(b,a%b);
	}
LL lcm(LL a,LL b)
	{
		return (a*b)/(gcd(ma(a,b),mi(a,b)));
	}
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
map< LL, LL > mymap[41];
void pre()
	{
		mymap[1][1]=1;
		mymap[2][1]=1;
		mymap[2][2]=2;
		map < LL, LL>::iterator it2,it,it1;
		LL temp,i,j;
		for(i=3;i<41;i++)
			{
				/*
				for(it1=mymap[i-1].begin();it1!=mymap[i-1].end();it1++)
					{
						temp=(*it1).first;
						mymap[i][temp]=mymap[i-1][temp];
					}
				temp=i;
				it=mymap[i].find(temp);
				if(it==mymap[i].end())	mymap[i][temp]=1;
				else				mymap[i][temp]+=1;
				*/
				mymap[i][i]=1;
				for(it1=mymap[i-1].begin();it1!=mymap[i-1].end();it1++)
					{
						temp=lcm((*it1).first,i);
						it=mymap[i].find(temp);
						if(it==mymap[i].end())	mymap[i][temp]=mymap[i-1][(*it1).first];
						else					mymap[i][temp]+=mymap[i-1][(*it1).first];
					}
			}
	}
int main()	
	{
		LL k,i,t,n,m,ans;
		t=2;
		pre();
		map<LL,LL>::iterator itt;
		t=read();
		for(k=1;k<=t;k++)
			{
				ans=0;
				n=read();m=read();
				/*
				itt=mymap[n].begin();
				while((*itt).first < m)
					itt++;
				while(itt!=mymap[n].end())
				{
					ans+=(*itt).second;
					itt++;
				}
				*/
				for(i=1;i<=n;i++)
					{
						itt=mymap[i].begin();
						while((*itt).first < m && itt!=mymap[i].end())
							itt++;
						while(itt!=mymap[i].end())
							{
								ans+=(*itt).second;
								itt++;
							}		
					}
				printf("Case #%lld: %lld\n",k,ans);
			}
		return 0;
	}