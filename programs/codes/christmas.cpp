#include"stdio.h"
#include"vector"
using namespace std;
typedef long long int ll;
int main()
	{
		ll le,ans,t,n,k,i,te,j,co;
		vector<ll> v;
		scanf("%lld",&t);
		for(i=1;i<=t;i++)
		{
			co=1;
			scanf("%lld %lld",&n,&k);
			te=1;
			j=1;
			while(te<=n)
			{
				v.push_back(te);
				te=te+k+j;
				co++;
				j++;
			}
			le=(ll)v.size();
			ans=v[le-1];
			for(j=le-2;j>=0;j--)
			{
				if(ans%v[j]!=0)	ans*=v[j];
			}
			for(j=0;j<le;j++)
				printf("%lld ",v[j] );
 			v.clear();
		printf("\n%lld\n",ans);
		}
	return 0;	
	}