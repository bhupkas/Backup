#include<cstdio>
#include<map>
#include<cmath>
using namespace std;
typedef long long int ll;
void check(ll num,vector<ll> v)
	{
	vector<ll> iterator foo;
	for(foo=v.begin();foo!=v.end();foo++)
		{	
		if(num%(*foo))	break;
		}
	if(foo=v.end())	v.push_back(num);
	return;	
	}
int main()
	{
	map<ll,ll> mymap;
	map<ll,ll>::iterator it;
	ll A[1000005],n,i,j;
	vector<ll> vp;
	vector<ll>::iterator foo;
	for(i=0;i<1000005;i++)
		A[i]=1;
	A[1]=0;	
	for(i=2;i<1001;i++)		
		{
		if(A[i])
			{
			for(j=i;j<(1000005/i);j++)
				A[i*j]=0;
			}
		}
	for(i=2;i<1000005;i++)
		if(A[i])	vp.push_back(i);
	for(i=1000005;i<1000000000;i+=2)
		check(i,vp);
	while(1)
		{
		mymap.clear();
		scanf("%lld",&n);
		if(n==0)	{return 0;}
		if(n==1)	{printf("1\n");	continue;}
		for(foo=vp.begin();(*foo<n)&&(foo!=vp.end());foo++)
			{
				if(n%(*foo)==0)
					{
					while(n%(*foo)==0)
						{
						mymap[*foo]++;
						n/=(*foo);
						}
					}
			}
		mymap[n]++;
		for(it=mymap.begin();it!=mymap.end();it++)
			{
			printf("%lld^%lld ",(*it).first,(*it).second);
			}
		printf("\n");
		}
	return 0;
	}
