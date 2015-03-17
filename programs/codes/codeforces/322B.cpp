/* bhupkas */

#include "iostream"
#include "stdio.h"
#include "vector"
#include "map"
#include "set"
#include "algorithm"
#include "string.h"
#include "string"
#include "math.h"

using namespace std;

void pre()
	{

	}

#define PB 	push_back
#define I   insert
#define LL	long long 
#define so(v)	sort(v.begin(),v.end())
#define FOR(i,a,b)	for(i=a;i<b;i++)

LL gcd(LL a,LL b)
	{
		if(a==0)	return b;
		return 		gcd(b%a,a);
	} 

int main()
	{
		pre();
		LL r,g,b, n,i,j,ans=0,cnt=0,co=0,te;
		string str;
		cin>>r>>g>>b;
		vector<LL> v;
		v.PB(r);v.PB(g);v.PB(b);
		so(v);
		for(i=0;i<=min((LL)3,v[0]);i++)
			{
				co=0;
				co+=i;
				FOR(j,0,3)
					{
						co+=(v[j]-i)/3;
					}
				ans=max(co,ans);
			}
		cout<<ans<<endl;
		return 0;
	}