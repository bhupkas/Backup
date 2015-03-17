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
using namespace std;
typedef long long LL;
#define MOD (LL)(1e9 +7)
#define FOR(i,a,b) for(i=a;i<b;i++)
void pre()
	{

	}
LL gcd(LL a,LL b)
	{
		if(a==0)	return b;
		else		return gcd(b%a,a);
	}
int main()	
	{
		LL i,j,k,ans=0,n,te,te1,te2,t;
		string str1,str,str2;
		vector<int> v;
		LL p,q;
		pre();
		cin>>p>>q;
		cin>>n;
		LL gc;
		while(gcd(p,q)!=1)
			{
				p/=gcd(p,q);
				q/=gcd(p,q);
			}
		FOR(i,0,n)	
			{
				cin>>te;
				v.push_back(te);
			}

		return 0;
	}