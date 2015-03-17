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
		int t,n,te,i,j;
		vector<int> v;
		cin>>t;
		while(t--)
			{
				v.clear();
				cin>>n;
				FOR(i,0,n)	{cin>>te;	v.push_back(te);}
				int gc=v[0],mi,ma;
				FOR(i,1,n)
					{
						mi=min(gc,v[i]);
						ma=max(gc,v[i]);
						gc=gcd(mi,ma);
					}
				cout<<gc<<endl;
			}
		return 0;
	}