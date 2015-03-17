#include<cstdio>
#include<vector>
#include<cstring>
#include<algorithm>
typedef long long int ll;
using namespace std;
ll ab(ll a)
	{
	if(a<0)	return -1*a;
	return a;
	}
int main()
	{
	ll t,n,i,temp,sum;
	char S[1000000];
	vector<ll> v;
	vector<ll>::iterator it;
	scanf("%lld",&t);
	while(t--)
		{
		sum=0;
		v.clear();
		scanf("%lld",&n);
		for(i=0;i<n;i++)
			{
			scanf("%s",S);	
			scanf("%lld",&temp);
			v.push_back(temp);
			}
		sort(v.begin(),v.end());
		for(i=1;i<=n;i++)
			{
			sum+=ab(v.at(i-1)-i);
			}
		printf("%lld\n",sum);
		}
	return 0;
	}
