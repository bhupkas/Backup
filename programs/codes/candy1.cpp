#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
#define BUF 4096
char ibuf[BUF];
long long int ipt = BUF;
long long int read()
{
while(ipt<BUF && ibuf[ipt]<'0')
ipt++;
if(ipt==BUF)
{
fread(ibuf,1,BUF,stdin);
ipt=0;
while(ipt<BUF && ibuf[ipt]<'0')
ipt++;
}
long long int n=0;
while(ipt<BUF && ibuf[ipt]>='0')
n=(n*10)+(ibuf[ipt++]-'0');
if (ipt==BUF)
{
fread(ibuf,1,BUF,stdin);
ipt=0;
while(ipt<BUF && ibuf[ipt]>='0')
n=(n*10)+(ibuf[ipt++]-'0');
}
return n;
}
int main()
	{
	long long int t,n,i,s,min,temp,te;
	t=read();
	while(t--)
		{
		s=0;
		n=read();
		min=1000000001;
		for(i=1;i<=n;i++)
			{
			temp=read();
			s+=temp;
			te=s/i;
			if(te<min)	min=te;
			}
		printf("%lld\n",min);
		}
	return 0;
	}
