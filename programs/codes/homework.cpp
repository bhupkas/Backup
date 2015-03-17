#include<cstdio>
#include<cmath>
#include<vector>
typedef long long int ll;
ll power(ll x,ll y)
	{
	ll re;
	if(y==0)	return 1;
	if(y==1)	return x;
	re=power(x,y/2);
	if(y%2==0)	return re*re;
	return x*re*re;
	}
using namespace std;
int main()	
	{
	bool isprime[1000000];
	ll j,temp1,temp2,a,b,n,i,n1,count;
	for(i=0;i<1000000;i++)
		isprime[i]=true;
	isprime[1]=false;
	vector<ll> primes;
	for(i=2;i<=1000;i++)
		{
		if(isprime[i])
			{
			for(j=i;j<=1000000/i;j++)
				isprime[i*j]=false;
			}
		}
	vector<ll>::iterator it;
	for(i=2;i<1000000;i++)
		if(isprime[i])	primes.push_back(i);
	while(1)
		{	
		count=0;	
		a=1;		
		scanf("%lld",&n);
		n1=n;
		b=n;
		if(n==-1)	break;
		if(n==1)	{printf("1 1\n");	continue;}
		if(n%2==0)
			{	
			while(n%2==0)	
				{
				n/=2;
				count++;
				}
			}
		a=1<<(count/2);
		if(count&1)	
			b=2*n;
		else
			b=n;
				
		for(it=primes.begin();(it!=primes.end())&&((*it)<=(sqrt(n1)));it++)
			{
			count=0;
			if(n%(*it)==0)
				{
				while(n%(*it)==0)
					{
					n/=(*it);
					count++;
					}
				a*=(power((*it),count/2));
				if(count&1)	
					b=(*it)*n;
				else
					b=n;									
				}
			}
		if(n>999999)
			{
			for(i=999999;i<=sqrt(n1);i+=2)
				{
				count=0;
				if(n%i==0)
					{
					while(n%i==0)
						{
						n/=i;
						count++;
						}
					a*=(power(i,count/2));
					if(count&1)	
						b=i*n;
					else
						b=n;									
					}
				}
			}
		printf("%lld %lld\n",a,b);
		}
	return 0;
	}
