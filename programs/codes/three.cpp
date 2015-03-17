#include"stdio.h"
#include"algorithm"
using namespace std;
typedef long long int LL;
#define MOD 1000000007LL
int main()
	{
		LL t,A[3],ans;
		scanf("%lld",&t);
		while(t--)
			{
				scanf("%lld %lld %lld",&A[0],&A[1],&A[2]);
				sort(A,A+3);
				A[1]--;A[2]-=2;
				A[0]=A[0]%MOD;A[1]%=MOD;A[2]%=MOD;
				ans=(A[0]*A[1])%MOD;
				ans=(ans*A[2])%MOD;
				printf("%lld\n",ans);
			}
		return 0;
	}