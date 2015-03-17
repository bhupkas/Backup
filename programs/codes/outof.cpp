#include<cstdio>
using namespace std;
typedef long long int ll;
ll A[1000000];
void init()
	{
	ll i;
	A[1]=1;A[2]=2;A[3]=3;A[4]=4;A[5]=5;A[6]=6;A[7]=7;A[8]=8;A[9]=9;A[10]=10;A[11]=11;
	for(i=12;i<1000000;i++)
		A[i]=A[i/2]+A[i/3]+A[i/4];
	}
ll ans(ll n)
	{
	if(n<1000000)	return A[n];
	else
		{
		return ans(n/2)+ans(n/3)+ans(n/4);
		}
	}
int main()
	{	
	ll t,n,i;
	init();
	scanf("%lld",&t);
	while(t--)
		{
		scanf("%lld",&n);
		if(n<1000000)	{printf("%lld\n",A[n]);	continue;}
		else		{printf("%lld\n",ans(n));continue;}
		}	
	return 0;
	}
