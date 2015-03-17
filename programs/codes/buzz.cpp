#include"stdio.h"
using namespace std;
typedef long long int ll;
#define mod 1000000007
ll A[70][2][2];
void pre()
	{
		ll R[2][2],K[2][2],i;
		R[0][0]=1;R[0][1]=1;R[1][0]=1;R[1][1]=0;
		A[0][0][0]=1;A[0][0][1]=1;A[0][1][0]=1;A[0][1][1]=0;
		for(i=1;i<70;i++)
		{
			K[0][0]=R[0][0];K[0][1]=R[0][1];K[1][0]=R[1][0];K[1][1]=R[1][1];
			R[0][0]=((K[0][0]*K[0][0])%mod+(K[0][1]*K[1][0])%mod)%mod;
			R[0][1]=((K[0][0]*K[0][1])%mod+(K[0][1]*K[1][1])%mod)%mod;
			R[1][0]=((K[1][0]*K[0][0])%mod+(K[1][1]*K[1][0])%mod)%mod;
			R[1][1]=((K[1][0]*K[0][1])%mod+(K[1][1]*K[1][1])%mod)%mod;
			A[i][0][0]=R[0][0];A[i][1][0]=R[1][0];A[i][0][1]=R[0][1];A[i][1][1]=R[1][1];
		}
	}
ll compute(ll n)
	{
		ll K[2][2],R[2][2],i=0;
		R[0][0]=1;R[0][1]=0;R[1][0]=0;R[1][1]=1;
		while(n)
		{
			if(n&1)
			{
				K[0][0]=R[0][0];K[0][1]=R[0][1];K[1][0]=R[1][0];K[1][1]=R[1][1];
				R[0][0]=((A[i][0][0]*K[0][0])%mod+(A[i][0][1]*K[1][0])%mod)%mod;
				R[0][1]=((A[i][0][0]*K[0][1])%mod+(A[i][0][1]*K[1][1])%mod)%mod;
				R[1][0]=((A[i][1][0]*K[0][0])%mod+(A[i][1][1]*K[1][0])%mod)%mod;
				R[1][1]=((A[i][1][0]*K[0][1])%mod+(A[i][1][1]*K[1][1])%mod)%mod;
			}
			i++;
			n/=2;
		}
		return ((R[0][0]*2)%mod+R[0][1]%mod)%mod;
	}
int main()
	{
		ll t,n,ans;
		pre();
		scanf("%lld",&t);
		while(t--)
		{
			scanf("%lld",&n);
			ans=compute(n)-2;
			printf("%lld\n",(ans+mod)%mod);
		}
		return 0;
	}