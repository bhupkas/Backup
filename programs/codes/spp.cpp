#include<cstdio>
#include<cstring>
using namespace std;
typedef long long int ll;
ll A[17][17],B[17],C[17],R[17][17],mod,k,F[17];
void multiply(ll A[17][17],ll I[17][17])
	{
	ll u,v,w,J[17][17];
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
	ll count,ans,ansn,ansm,t,n,i,j,m,p;
	scanf("%lld",&t);
	while(t--)
		{
		ans=0;
		ansm=ansn=0;
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
		scanf("%lld %lld %lld",&m,&n,&p);
		count=(n-m)/k;
		mod=p;
		if(m<=k)	ansm=B[m-1]%mod;
		else
			{	
			m=m-k;
			while(m)
				{
				if(m&1)
					multiply(R,A);
				multiply(A,A);
				m/=2;	
				}
			for(i=0;i<k;i++)
				ansm+=(R[0][i]%mod*B[k-i-1]%mod)%mod;
			}
		memset(R,0,sizeof(R));
		memset(A,0,sizeof(A));
		for(i=1;i<k;i++)
			A[i][i-1]=1;
		for(i=0;i<k;i++)
			{
			A[0][i]=C[i];
			R[i][i]=1;
			}
		if(n<=k)	ansn=B[n-1]%mod;
		else
			{	
			n=n-k;
			while(n)
				{
				if(n&1)
					multiply(R,A);
				multiply(A,A);
				n/=2;	
				}
			for(i=0;i<k;i++)
				ansn+=(R[0][i]%mod*B[k-i-1]%mod)%mod;
			}
		printf("%lld %lld\n",ansm%mod,ansn%mod);
		}
	return 0;
	}
