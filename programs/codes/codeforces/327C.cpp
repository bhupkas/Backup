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
#define MOD			(LL)(1e9+7)

LL n,i,j,ans=0,r,co=0,cnt=0,k,te,m;
void pre()
	{
	}

LL po(LL num)
	{
		if(num==0)	return 1;
		LL re=po(num/2)%MOD;
		re=(re*re)%MOD;
		if(num&1)	return (re*2)%MOD;
		else		return re%MOD;
	}
LL po1(LL n1,LL n2)
	{
		if(n2==0)	return 1;
		LL re=po1(n1,n2/2)%MOD;
		re=(re*re)%MOD;
		if(n2&1)	return (re*n1)%MOD;
		else		return re%MOD;
	}



int main()
	{
		pre();
		vll v;
		string str;
		cin>>str;
		getchar();
		cin>>k;
		r=po(str.size());
		FOR(i,0,(LL)str.size())
			{
				if(str[i]=='5'|| str[i]=='0')	v.PB(i);
			}
		LL a;
		FOR(i,0,v.size())
			{
				a=po(v[i]);
				te=(po1(r,k))%MOD;
				te--;
				while(te<0)	te+=MOD;	
				te=(te*(po1(r-1,MOD-2))%MOD)%MOD;
				te=(te*a)%MOD;
				ans = (ans+te)%MOD; 
			}
		cout<<ans<<endl;
		return 0;
	}