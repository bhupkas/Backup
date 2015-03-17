#include"stdio.h"
using namespace std;
typedef long long int LL;
LL D[1000002];
#define MOD 10000009LL
void pre()
    {
        D[0]=0;
        D[1]=0;
        D[2]=1;
        D[3]=2;
        LL i;
        for(i=4;i<1000002;i++)
            {
                D[i]=((i-1)*((D[i-1]+D[i-2])%MOD))%MOD;
            }
    }
int main()
    {
        LL t,n,ans;
        pre();
        scanf("%lld",&t);
        while(t--)
            {
                scanf("%lld",&n);
                if(n<=2)    {printf("0\n"); continue;}
                ans=(n*D[n-1])%MOD;
                printf("%lld\n",ans);
            }
        return 0;
    }