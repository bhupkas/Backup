/* bhupkas */

#include"iostream"
#include"stdio.h"
#include"algorithm"
#include"vector"

using namespace std;

#define S(n)	scanf("%d",&n)

int dp[4005];

int main()
	{
		int n,a,b,c;
		S(n);S(a);S(b);S(c);
		vector<int> v;
		v.push_back(a);
		v.push_back(b);
		v.push_back(c);
		sort(v.begin(),v.end());
		a=v[0];
		b=v[1];
		c=v[2];
		dp[a]=1;
		int i,ans;
		for(i=0;i<=n;i++)	dp[i]=0;
		dp[a]=1;
		dp[b]=1;
		dp[c]=1;
		for(i=0;i<=n;i++)
			{
				if(i-a >= 0)
					dp[i]=max(dp[i],dp[i-a]>0 ? dp[i-a]+1 : 0);
				if(i-b>=0)	
					dp[i]=max(dp[i],dp[i-b]>0 ? dp[i-b]+1 : 0);
				if(i-c>=0)		
					dp[i]=max(dp[i],dp[i-c]>0 ? dp[i-c]+1 : 0);				
			}
		cout<<dp[n]<<endl;
		return 0;
	}