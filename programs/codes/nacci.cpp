#include<cstdio>
#include<cstring>
using namespace std;
typedef long long int ll;
ll n,mod,A[31][31],R[31][31];
void multiply(ll A[31][31],ll I[31][31])
	{
	ll u,v,w,J[31][31];
	memset(J,0,sizeof(J));
	for(u=0;u<n;u++)
		{
		for(v=0;v<n;v++)
			{
			for(w=0;w<n;w++)
				J[u][v]+=(A[u][w]*I[w][v])%mod;
			}
		}
	for(u=0;u<n;u++)
		for(v=0;v<n;v++)
			A[u][v]=J[u][v];
	}
int main()
	{
	ll t,k,l,i,j,ans;
	scanf("%lld",&t);
	while(t--)
		{
		ans=0;
		memset(A,0,sizeof(A));
		memset(R,0,sizeof(R));
		mod=1;
		scanf("%lld %lld %lld",&n,&k,&l);		
		for(i=0;i<k;i++)
			mod*=10;
		if(l<n)
			{
			printf("%lld\n",l%mod);
			continue;	
			}
		for(i=0;i<n;i++)
			{
			A[0][i]=1;
			R[i][i]=1;
			}
		for(i=1;i<n;i++)
			{
			A[i][i-1]=1;
			}
		l=l-n+1;
		while(l)
			{
			if(l&1)
				multiply(R,A);
			multiply(A,A);
			l>>=1;	
			}
		for(i=0;i<n;i++)
			ans+=(R[0][i]*(n-i-1))%mod;
		printf("%lld\n",(ans)%mod);
		}
	return 0;
	}
