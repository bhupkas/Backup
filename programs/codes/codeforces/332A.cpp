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

void pre()
	{
	}

int main()
	{
		int n,i,j,ans=0,cnt=0,te;
		cin>>n;
		char S[2010];
		getchar();
		scanf("%s",S);
		int l=strlen(S);
		for(i=n;i<l;i+=n)
			{
				if(S[i-1]==S[i-2] && S[i-2]==S[i-3])	ans++;				
			}
		cout<<ans<<endl;
		return 0;
	}
