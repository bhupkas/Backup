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

#define FOR(i,a,b)		for(i=a;i<b;i++)
#define LL			long long 
#define PB			push_back
#define PP			pair<int,int>
#define PPL			pair<LL,LL>
#define vi			vector<int>
#define vll			vector<LL>
#define I 			insert
#define so(v)			sort(v.begin(),v.end())
#define MOD			(LL)(1e9+7)
#define INF			(LL)(1e9+7)

void pre()
	{
	}

int main()
	{
		pre();
		LL m,n,i,x,y,j,ans=0,cnt=0,co=0,re,te;
		bool B[1005],C[1005];
		cin>>n>>m;
		FOR(i,1,n+1)
			B[i]=true;
		B[1]=B[n]=false;
		FOR(i,1,n+1)
			C[i]=true;
		C[1]=C[n]=false;
		FOR(i,0,m)
			{
				cin>>x>>y;
				B[x]=false;
				C[y]=false;	
			}
		FOR(i,2,n/2+1)
			{
				/*if(B[i] && B[n-i+1])
					{
						if(
						ans+=2;
					}	
				if((B[i]&&!B[n-i+1]) ||(!B[i]&&B[n-i+1]))
					{
						ans+=2;
						if(!C[i] && !C[n-i+1])	ans--;
					}
				if(!B[i] && !B[n-i])
					{
						if(C[i] && C[n-i+1])	ans+=2;
						if((!C[i] && C[n-i+1]) || (!C[n-i+1] && C[i]))	ans++;
					}*/
				ans+=(B[i] + B[n-i+1] +C[i]+C[n-i+1]);
			}
		
		i=n/2 +1;
		if(n&1)
			{
				if(B[i] || C[i])	ans++;		
			}
		cout<<ans<<endl;
		return 0;
	}