/* bhupkas */

#include"iostream"
#include"stdio.h"
#include"vector"
#include"algorithm"
#include "assert.h"

using namespace std;

#define FOR(i,a,b)	for(i=a;i<b;i++)
#define LL			long long

LL A[1<<10 +10];				

int main()
	{
		LL te,i,j,k,n,val,ans,t;
		cin>>t;
		vector<LL> v;

		while(t--)
			{
				v.clear();
				ans=0;
				cin>>n;
					assert(n<=1000000);
				FOR(i,0,n)	
					{
						cin>>te;
						assert(te>=1 && te<=1000000000000000000LL);
						v.push_back(te);
					}
				FOR(i,0,1<<10)	A[i]=0;
				FOR(i,0,n)
					{
						val=0;
						te=v[i];
						while(te)
							{
								val= val | (1<<(te%10));
								te/=10;
							}
						A[val]++;
					}
				FOR(i,0,1<<10)
					{
						FOR(j,i+1,1<<10)
							{
								if(i&j)	ans+=A[i]*A[j];							
							}
					}
				FOR(i,0,1<<10)
					{
						ans+=(A[i]*A[i]-A[i])/2;
					}	
				cout<<ans<<endl;
			}
		return 0;
	}
