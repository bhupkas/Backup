/* bhupkas */

/* Two xor operations nullify each other */

#include "iostream"
#include "stdio.h"
#include "algorithm"
#include "set"
#include "map"
#include "vector"

using namespace std;

#define FOR(i,a,b)	for(i=a;i<b;i++)
#define LL long long 

LL n,u,r,ans=(LL)(-1*1e14),temp;
LL A[35],B[35],K[35],P[35];

LL fun(LL O[],LL curr,bool foo)
	{
		LL i,T[35];
		if((u-curr)%2==0)
			{
				temp=0;
				FOR(i,1,n+1)	temp+=O[i]*K[i];
				ans=max(ans,temp);
				if(u==curr)	return ans;
			}
		if(!foo)
			{
				FOR(i,1,n+1)
					T[i]=O[i]^B[i];
				ans=max(ans,fun(T,curr+1,true)) ;
			}
		FOR(i,1,n+1)
			{
				T[i]=O[P[i]]+r;
			}
		ans=max(ans,fun(T,curr+1,false));
	}

int main()
	{
		LL i;	
		cin>>n>>u>>r;
		FOR(i,1,n+1)
			cin>>A[i];
		FOR(i,1,n+1)
			cin>>B[i];
		FOR(i,1,n+1)
			cin>>K[i];
		FOR(i,1,n+1)
			cin>>P[i];
		cout<<fun(A,0,false)<<endl;
		return 0;
	}