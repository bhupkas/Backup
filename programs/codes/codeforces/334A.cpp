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
		LL n,i,j,k,ans=0,cnt=0,co=0,re,te;
		cin>>n;
		j=1;
		k=n*n;
		FOR(i,1,n+1)
			{
				co=0;
				while(co<n/2)	
					{
						co++;
						cout<<j++<<" "<<k--<<" ";
					}
			cout<<endl;		
			}
		return 0;
	}
