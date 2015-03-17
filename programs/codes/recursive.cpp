#include<cstdio>
#include<cstring>
using namespace std;
typedef long long int ll;
#define mod 1000000000
ll A[12][12],B[12],C[12],R[12][12],k;
void multiply(ll A[12][12],ll I[12][12])
	{
	ll u,v,w,J[12][12];
	memset(J,0,sizeof(J));
	for(u=0;u<k;u++)
		{
		for(v=0;v<k;v++)
			{
			for(w=0;w<k;w++)
				J[u][v]+=(A[u][w]%mod*I[w][v]%mod)%mod;
			}
		}
	for(u=0;u<k;u++)
		for(v=0;v<k;v++)
			A[u][v]=J[u][v];
	}
int main()
	{
	ll ans,t,n,i,j;
	scanf("%lld",&t);
	while(t--)
		{
		ans=0;
		memset(R,0,sizeof(R));
		memset(A,0,sizeof(A));
		scanf("%lld",&k);
		for(i=0;i<k;i++)
			{		
			R[i][i]=1;
			scanf("%lld",&B[i]);
			}
		for(i=0;i<k;i++)
			{
			scanf("%lld",&C[i]);
			A[0][i]=C[i];
			}
		for(i=1;i<k;i++)
			A[i][i-1]=1;
		scanf("%lld",&n);
		if(n<=k)	{printf("%lld\n",B[n-1]%mod);	continue;}
		n=n-k;
		while(n)
			{
			if(n&1)
				multiply(R,A);
			multiply(A,A);
			n/=2;	
			}
		for(i=0;i<k;i++)
			ans+=(R[0][i]%mod*B[k-i-1]%mod)%mod;
		printf("%lld\n",(ans+mod)%mod);
		}
	return 0;
	}
