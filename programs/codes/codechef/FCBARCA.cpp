#include"stdio.h"
#include"iostream"
#include"vector"
#include"algorithm"
using namespace std;
typedef long long LL;
#define MOD (LL)(1e9 +7)
LL A[1005][11];
LL fun(LL n,LL k)
	{
	if(A[n][k]!=-1)	{return A[n][k]%MOD;}
	else	A[n][k]=((fun(n-2,k)*k)%MOD+(fun(n-1,k)*(k-1))%MOD)%MOD;
	return A[n][k];
	}
int main()
	{
	LL i,j,t,n,k;
	cin>>t;
	for(i=0;i<1005;i++)	for(j=0;j<11;j++)	A[i][j]=-1;
	for(i=0;i<11;i++)	A[1][i]=0;
	for(i=0;i<11;i++)	A[2][i]=i;
	while(t--)
		{
		cin>>n>>k;
		cout<<fun(n,k)%MOD<<endl;
		}
	return 0;
	}

