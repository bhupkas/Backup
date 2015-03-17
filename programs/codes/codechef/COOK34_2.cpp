/* bhupkas */
#include"iostream"
#include"stdio.h"
#include"map"
#include"set"
#include"vector"
#include"algorithm"
#include"string"
#include"string.h"
#include"math.h"
#include"queue"
using namespace std;
typedef long long LL;
#define MOD (LL)(1e9 +7)
#define FOR(i,a,b) for(i=a;i<b;i++)
void pre()
	{

	}
int gcd(int a,int b)
	{
		if(a==0)	return b;
		return gcd(b%a,a);
	}
int main()
	{
		int t,n,te,i,j,k;
		LL ans;
		LL cnt,co;
		vector<int> v;
		cin>>t;
		multiset<int> store;
		multiset<int>::iterator it;
		while(t--)
			{
				cnt=0;
				store.clear();
				ans=0;
				v.clear();
				cin>>n;
				FOR(i,0,n)	{cin>>te;	v.push_back(te);}
				if(n==1)
					{
						if(v[0]==1)
							cout<<"1"<<endl;	
						else
							cout<<"0"<<endl;
					}
				if(v[0]==1)	cnt++;
				else		store.insert(v[0]);
				FOR(i,1,n)
					{
						co=0;
						ans = ans + cnt * (1<<(n-i-1));
						k=store.size();
						j=0;
						it=store.begin();
						while(j!=k)
							{
								j++;
								if(gcd((*it),v[i])==1)	{co++;	cnt++;}
								else						store.insert(gcd((*it),v[i]));
							}
						store.insert(v[i]);
						ans+=co;
					}
				cout<<ans<<endl;				
			}
		return 0;
	}