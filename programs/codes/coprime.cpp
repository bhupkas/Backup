#include"stdio.h"
#include"vector"
using namespace std;
typedef long long int LL;
int main()
	{
		LL lcm,t,a,b,n,k,i,j,count,ansa,ansb,subs;
		scanf("%lld",&t);
		vector<LL> pd;
		for(i=1;i<=t;i++)
			{
				pd.clear();
				scanf("%lld %lld %lld",&a,&b,&n);
				for(j=2;j*j<=n;j++)
				{
					if(n%j==0)
						{
						while(n%j==0)	n/=j;
						pd.push_back(j);
						}
				}
				if(n>1)	pd.push_back(n);
				subs=0;
				count=0;
				for(j=1;j<(1<<(LL)pd.size());j++)
					{
						count=0;
						lcm=1;
						for(k=0;k<(LL)pd.size();k++)
							{
								if(j&(1<<k))
								{
									lcm*=pd[k];
									count++;
								}
							}
						if(count&1)	subs+=(b/lcm - (a-1)/lcm);
						else		subs-=(b/lcm - (a-1)/lcm);
					}
					printf("Case #%lld: %lld\n",i,(b-a+1-subs));
			}
		return 0;
	}