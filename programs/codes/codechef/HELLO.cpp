/* bhupkas */

#include "iostream"
#include "stdio.h"
#include "algorithm"
#include "vector"

using namespace std;

#define FOR(i,a,b)		for(i=a;i<b;i++)

int main()
	{
		int ans,t,i,j,u,m,n,c;
		double ma,d,r,te;
		cin>>t;
		while(t--)
			{
				ma=0.0;
				ans=-1;
				scanf("%lf",&d);
				scanf("%d %d",&u,&n);
				FOR(i,0,n)
					{
						scanf("%d",&m);
						scanf("%lf",&r);
						scanf("%d",&c);
						te=c+(m*u*r);
						te=(m*u*d)-te;
						te=te/(double)m;
						if(te>ma)	
							{
								ma=te;
								ans=i;
							}
					}
				if(ans==-1)	cout<<0<<endl;
				else 		cout<<ans+1<<endl;
			}
		return 0;
	}