#include"stdio.h"
#include"algorithm"
#include"set"
#include"math.h"
#include"map"
#include"string.h"
#include"string"
#include"vector"
#include"iostream"
using namespace std;
typedef long long int LL;
#define MOD 1000000007LL
#define FOR(i,a,b)	for(i=a;i<b;i++)
#define S(n)	scanf("%d",&n)
#define P(n)	printf("%d\n",n );
#define SLL(n)	scanf("%lld\n",&n);
#define PLL(n)	printf("%lld\n",n);
LL F[1001];
void pre()
	{
		LL i,m=MOD;
		F[1] = 1;
		for(i = 2; i < 1001; i++) {
		F[i] = (-(m/i) * F[m % i]) % m + m;
		}
	}
LL comb(LL a,LL b)
	{
		LL i,ans=1;
		if(b==0||b==a)	return 1;
		b=min(b,a-b);
		FOR(i,0,b)
			{	
				ans=(ans*((a-b+1+i)%MOD*F[i+1])%MOD)%MOD;
			}
		return ans%MOD;
	}
int main()
	{
		pre();
		LL t,n,i,temp;
		LL ans;
		cin>>t;
		while(t--)
			{
				ans=0;
				cin>>n;
				FOR(i,0,n)		cin>>temp;
				for(i=n/2 + 1;i<=n;i++)
					{
						ans= (ans+comb(n,i)%MOD)%MOD;
					}	
				cout<<(ans+MOD)%MOD<<endl;
			}
		return 0;
	}