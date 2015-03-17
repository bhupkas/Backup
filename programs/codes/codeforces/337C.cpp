/* bhupkas */

#include "iostream"
#include "stdio.h"
#include "string.h"
#include "string"
#include "algorithm"
#include "math.h"
#include "vector"
#include "set"
#include "map"
#include "deque"

using namespace std;

#define FOR(i,a,b)	for(i=a;i<b;i++)
#define LL			long long 
#define PB			push_back
#define PP			pair<int,int>
#define PPL			pair<LL,LL>
#define vi			vector<int>
#define vll			vector<LL>
#define I 			insert
#define so(v)		sort(v.begin(),v.end())
#define MOD			(LL)(1e9+9)
#define INF			(LL)(1e9+7)

void pre()
	{

	}

LL n,m,k;

LL modpow (LL a, LL b, LL mod)
{
    LL res = 1;
    while (b)
    {
        if (b & 1) res = (res * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }

    return res;
}


bool fun(LL num)
	{
		LL re=(m-(num)*(k-1));
		return (re>=0);
	}

LL bsearch(LL left,LL right)
	{
		LL mid;
		while(left<=right)
			{
				mid=(left+right)/2;
				if(mid==n-m &&  fun(mid))	return mid;
				else if(fun(mid) && !fun(mid+1))	return mid;
				else if(fun(mid))		left=mid+1;
				else				right=mid-1;	
			}
	}

int main()
	{
		pre();
		LL i,j,cnt=0,re=1,ans,te;
		cin>>n>>m>>k;
		LL slots=n-m;
		LL p=bsearch(0,n-m);
		LL rnum=m-p*(k-1);
		re=0;
		re= modpow(2,rnum/k +1,MOD)%MOD;
		re=(re-2)%MOD;
		re=(re*k)%MOD;
		re=(re + rnum%k)%MOD;
		re =(re+ p*(k-1))%MOD;
		while(re<0)	re+=MOD;
		cout<<re<<endl;
		return 0;
	}