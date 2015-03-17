/* bhupkas */

#include "stdio.h"
#include "iostream"
#include "algorithm"

using namespace std;

typedef long long LL;

LL F[103];

#define MOD (LL)(1e9)
#define FOR(i,a,b)	for(i=a;i<b;i++)

void pre()	
	{
		F[0]=F[1]=1;
		LL i;
		FOR(i,2,103)
			{
				F[i]=(F[i-1]%MOD+F[i-2]%MOD)%MOD;
			}
	}

int main()
	{
		pre();
		LL n,m,i,t,j,x,v,l,r;
		cin>>n>>m;
		LL A[104];
		FOR(i,0,n)	cin>>A[i];
		FOR(i,0,m)
			{
				cin>>t;
				if(t==1)
				{cin>>x>>v;
				x--;
				A[x]=v;}
				if(t==2)
				{
					LL sum=0;
					cin>>l>>r;
					l--;r--;
					FOR(j,0,r-l+1)
						{
							sum+=(F[j]*A[l+j])%MOD;
						}
					cout<<sum%MOD<<endl;;
				}
			}
		return 0;
	}