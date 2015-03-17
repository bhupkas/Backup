#include"stdio.h"
#include"string.h"
#include"string"
#include"iostream"
#include"algorithm"
using namespace std;
#define MOD 1000000007
typedef long long LL;
LL F[110];
void pre()
	{
		LL m=MOD;
		F[1] = 1;
		for(int i = 2; i <= 110; i++) {
		F[i] = (-(m/i) * F[m % i]) % m + m;}
	}
LL comb(LL a,LL b)
	{
		b=min(b,a-b);
		if(a==0&&b==0)	return 1;
		if(b==0)		return 1;
		LL i,re=1;
		for(i=0;i<b;i++)
		{
			re = (((re*(a-i))%MOD)*F[b-i])%MOD;
		}
		return re%MOD;
	}
int main()
	{
		pre();
		LL ans=0;
		LL t,le,i;
		char S[102];
		LL ANS[102];
		for(le=1;le<=100;le++)
		{
			ans=0;
				if(le&1)
				{
					for(i=1;i<=le-2;i++)
					{
						ans = (ans + (comb(le,i)%MOD - comb(le/2,i/2)%MOD +MOD)%MOD)%MOD;
					}
				}
				else
				{
					for(i=1;i<=le-2;i++)
					{
						if(i&1)		ans = (ans + (comb(le,i)%MOD - (2*comb((le-2)/2,i/2)%MOD + MOD)%MOD )%MOD)%MOD;
						else		ans = (ans + (comb(le,i)%MOD - comb(le/2,i/2)%MOD +MOD)%MOD)%MOD;
					}
				}
			ANS[le]=(ans+MOD)%MOD;
		}
		cin>>t;
		getchar();
		while(t--)
			{
				scanf("%s",S);
				le=strlen(S);
				cout<<ANS[le]<<endl;
			}
		return 0;
	}