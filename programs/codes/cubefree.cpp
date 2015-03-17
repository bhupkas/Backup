#include<cstdio>
#include<vector>
using namespace std;
typedef long long int ll;
ll position[1000001];
int main()
	{
	ll t,i,j,temp,n,che;
	bool cubefree[1000001];
	vector<ll> v;

	for(i=0;i<1000001;i++)
		cubefree[i]=true;		
	for(i=2;i<101;i++)
		{
			temp=i*i*i;
			che=temp;
				for(j=2;temp<1000001;j++)
					{
					cubefree[temp]=false;
					temp=che*j;
					}
		}

	temp=1;

	for(i=1;i<1000001;i++)
		{
		if(cubefree[i])		
			{
			position[i]=temp;
			temp++;		
			}
		}

	scanf("%lld",&t);
	for(i=1;i<=t;i++)
		{
		scanf("%lld",&n);
		if(cubefree[n])	printf("Case %lld: %lld\n",i,position[n]);
		else			printf("Case %lld: Not Cube Free\n",i);
		}

	return 0;
	}
