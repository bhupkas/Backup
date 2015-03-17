/* bhupkas */

#include "iostream"
#include "stdio.h"
#include "set"
#include "algorithm"
#include "vector"

using namespace std;

#define FOR(i,a,b)			for(i=a;i<b;i++)
#define I 					insert
#define PB					push_back
#define LL					long long

int main()
	{
		LL t,n,m,i,j,c,te,ans;
		cin>>t;
		while(t--)
			{
				ans=0;
				cin>>n>>m;
				vector<int> v(m);
				multiset<int> s[n];
				multiset<int>::iterator it;
				FOR(i,0,m)	cin>>v[i];
				FOR(i,0,n)
					{
						cin>>c;
						FOR(j,0,c)	
							{
								cin>>te;
								s[i].I(te);
							}
					}
				FOR(i,0,m)
					{
						if(s[v[i]].size()==0)	continue;
						it=s[v[i]].end();
						it--;
						ans=ans+(*it);
						s[v[i]].erase(it);
					}
				cout<<ans<<endl;
			}
		return 0;
	}