#include<iostream>
#include<cstdio>
using namespace std;
#define BUF 4096
char ibuf[BUF];
long ipt = BUF;
 
long read()
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
long n=0;
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
long C[1000001];
long counting(long N[],long i,long mid,long k)
	{
	long o,low=i,inter=mid+1,ans=0,r=i;
	while(low<=mid&&inter<=k)	
		{
		if(N[low]<N[inter])	C[r++]=N[low++];
		else			{C[r++]=N[inter++];	ans+=mid-low+1;}
		}
	while(low<=mid)	C[r++]=N[low++];
	while(inter<=k)	C[r++]=N[inter++];
	for(o=i;o<=k;o++)
		N[o]=C[o];
	return ans;	
	}
long divide(long N[],long i,long k)
	{
	if(i==k)	return 0;
	long c1,c2,c3,mid=(i+k)/2;
	c1=divide(N,i,mid);
	c2=divide(N,mid+1,k);
	c3=counting(N,i,mid,k);
	return c1+c2+c3;
	}
int main()
	{
	long n,N[1000001],i;
	n=read();
	for(i=0;i<n;i++)
		N[i]=read();
	printf("%ld\n",divide(N,0,n-1));
	return 0;
	}
