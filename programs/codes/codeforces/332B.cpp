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
#define LL			long long

void pre()
	{
	}

int main()
	{
		LL n,i,j,ans=0,cnt=0,te,k,a,b,val1,val2;
		cin>>n>>k;
		vector<LL> v(n),v1(n);
		LL A[200010],B[200010];
		LL A1[200010],B1[200010];
		FOR(i,0,n)	{cin>>v[i];}
		FOR(i,0,k)	ans+=v[i];
		FOR(i,0,200010)	A[i]=B[i]=A1[i]=B1[i]=0;
		v1[0]=ans;
		FOR(i,1,n-k+1)
			{
				ans=ans+v[i+k-1];
				ans=ans-v[i-1];
				v1[i]=ans;						
			}	
		LL ma=-1;
		A[n-k]=v1[n-k];
		A1[n-k]=n-k;
		for(i=n-k-1;i>=0;i--)
			{
				if(v1[i]>=A[i+1])	A1[i]=i;
				else			A1[i]=A1[i+1];
				A[i]=max(A[i+1],v1[i]);
			}
		B[0]=v1[0];
		B1[0]=0;
		FOR(i,1,n-k+1)
			{
				if(v1[i]>B[i-1])	B1[i]=i;
				else			B1[i]=B1[i-1];
				B[i]=max(B[i-1],v1[i]);
			}
		ma=B[0]+A[k];
		a=B1[0];
		b=A1[k];
		FOR(i,1,n-2*k+1)
			{
				if(B[i]+A[i+k]>ma)	{a=B1[i];	b=A1[i+k];	ma=B[i]+A[i+k];}
			}
		/*FOR(i,0,n-k+1)
			cout<<v1[i]<<" ";
		cout<<endl;
		FOR(i,0,n-k+1)
			cout<<B1[i]<<" ";
		cout<<endl;
		FOR(i,0,n-k+1)
			cout<<A1[i]<<" ";
		cout<<endl;*/
		cout<<a+1<<" "<<b+1<<endl;
		return 0;
	}
