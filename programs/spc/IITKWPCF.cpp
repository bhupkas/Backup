/* bhupkas */

#include "iostream"
#include "stdio.h"
#include "vector"
#include "algorithm"
#include "map"
#include "string.h"
#include "string"
#include "assert.h"

using namespace std;

#define FOR(i,a,b)			for(i=a;i<b;i++)
#define LL					long long
#define PB					push_back
#define MP 					make_pair
#define PLL					pair<LL,LL>
#define vpll				vector<PLL>

bool P[1000005];
vector<int> p;
vpll F;

void pre()
	{
		int i,j;
		memset(P,true,sizeof(P));
		P[0]=P[1]=false;
		for(i=2;i*i<1000002;i++)	
			{
				if(P[i])
					{
						for(j=i;j<=1000002/i;j++)
							P[i*j]=false;
					}	
			}
		FOR(i,2,1000002)	if(P[i])		p.PB(i);
	}

int main()
	{	
		int t,i,j,cnt;
		LL n;
		cin>>t;
		assert(t<=100);
		while(t--)
			{
				cin>>n;
				if(n&1)	cout<<0<<endl,continue;
				for(i=0;p[i]*p[i]<=n;i++)
					{
						if(n%p[i]==0)
							{
								cnt=0;
								while(n%p[i]==0)
									{
										n/=p[i];
										cnt++;
									}
								F.PB(p[i],cnt);
							}
					}
				if(n!=1)		F.PB(n,1);	
			}
		return 0;	
	}