#include<cstdio>
#include<map>
#include<vector>
#include<cmath>
using namespace std;
bool isprime[10001];
vector<int> prime;
void makesieve()
	{
	int i,j;
	for(i=0;i<10001;i++)
		isprime[i]=true;	
	isprime[1]=false;
	for(i=2;i<=100;i++)
		{
		if(isprime[i])
			{
			for(j=i;j<=10000/i;j++)
				isprime[i*j]=false;
			}
		}
	for(i=2;i<10001;i++)	
		if(isprime[i])	prime.push_back(i);
	}
void one(int n,int r,vector< map<int,int> > v;)
	{
	map<int,int> my;
	int i;	
	vector<int>::iterator it;
	for(i=r;i>0;i--)
		{
		for(it=primes.begin();(*it)<sqrt(i);it++)
			{
			if(i%(*it)==0)
				{
				while(i%(*it)==0)		
					{
					i/=(*it);
					my[(*it)]--;					
					}				
				}
			}
		for(it=primes.begin();(*it)<sqrt(i+n-r);it++)
			{
			if((i+n-r)%(*it)==0)
				{
				while((i+n-r)%(*it)==0)		
					{
					(i+n-r)/=(*it);
					my[(*it)]++;					
					}				
				}
			}
		}
	v.push_back(my);
	}
int main()
	{
	int t,n;
	makesieve();
	vector< map<int,int> > v;
	scanf("%d",&t);
	while(t--)
		{
		v.clear();
		scanf("%d",&n);
		if(n&1)
			{
			
			}
		else
			{
			}
		}
	return 0;
	}
