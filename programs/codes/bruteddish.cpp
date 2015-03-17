#include<cstdio>
using namespace std;
typedef long long int ll;
bool ch(ll num)
	{
	ll l,i;
	bool check[10];
	for(i=0;i<10;i++)	check[i]=false;
	while(num)
		{
		if(check[num%10])		return false;
		check[num%10]=true;
		num/=10;	
		}
	return true;
	}
int main()
	{	
	ll i,count=0,t,a,b;
	scanf("%lld",&t);
	while(t--)
		{
		count=0;
		scanf("%lld %lld",&a,&b);
		for(i=a;i<=b;i++)
			if(ch(i))	count++;
		printf("%lld\n",count);
		}
	return 0;
	}
