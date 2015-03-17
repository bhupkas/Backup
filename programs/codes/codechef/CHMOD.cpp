/* bhupkas */

#include "iostream"
#include "stdio.h"
#include "algorithm"
#include "vector"

using namespace std;

#define FOR(i,a,b)		for(i=a;i<b;i++)
#define vi 			vector<int>
#define PB			push_back
#define S(n)			scanf("%d",&n)
#define LL 			long long

bool P[105];
vi p;
int A[105];
int G[105];
int F[100005][27];
LL modpow (LL a, LL b, LL mod)
{
    LL res = 1;
    while (b)
    {
        if (b & 1) res = (res * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }

    return res;
}

void pre()
	{
		int i,j;
		FOR(i,0,105)	P[i]=true;
		P[1]=P[0]=false;
		for(i=2;i*i<105;i++)
			{
				if(P[i])
					{
						for(j=i;j<=105/i;j++)
							P[i*j]=false;
					}
			}
		int cnt=0;
		FOR(i,2,105)
			{	
				if(P[i])
					{
						G[cnt]=i;
						A[i]=cnt++;	
						p.PB(i);
					}
			}
	}

int main()	
	{
		pre();
		int te,i,j,t,n,x,y,m;
		vi v;
		S(n);
		FOR(i,0,n)
			{
				S(te);
				v.PB(te);
			}
		FOR(i,0,n)
			{
				for(j=0;p[j]*p[j]<=v[i];j++)
					{
						if(v[i]%p[j]==0)
							{
								while(v[i]%p[j]==0)
									{
										F[i][A[p[j]]]++;
										v[i]=v[i]/p[j];
									}
							}
					}	
				if(v[i]!=1)	F[i][A[v[i]]]++;
			}
		FOR(i,1,n)
			{
				FOR(j,0,26)
					{
						F[i][j]+=F[i-1][j];
					}
			}
		S(t);
		long long ans=1LL;
		while(t--)
			{
				ans=1LL;
				S(x);
				S(y);
				S(m);
				x--;
				y--;
				if(!x)
					{
						FOR(i,0,26)
							{
								ans=(ans*modpow((LL)G[i],(LL)F[y][i],(LL)m))%m;
							}
					}
				else
					{
						FOR(i,0,26)
							{
								ans=(ans*modpow((LL)G[i],(LL)F[y][i]-F[x-1][i],(LL)m))%m;
							}							
					}
				printf("%lld\n",(ans+m)%m );
			}
		return 0;
	}