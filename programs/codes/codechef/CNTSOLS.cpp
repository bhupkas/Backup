/* bhupkas */

#include "iostream"
#include "stdio.h"
#include "algorithm"

using namespace std;

#define FOR(i,a,b)		for(i=a;i<b;i++)
#define LL				long long
#define MOD 			1000000007LL

LL upper,d,m,n;
LL A[45];

LL modpow (LL a, LL b, LL mod)
{
	if(a==0 && b==0)	return 1;	
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
		LL i,temp,cnt;
		FOR(i,0,41)	A[i]=0;
		FOR(i,0,n)
			{
				temp=modpow(i,d,n);
				cnt=upper/n;
				if(upper%n>=i)	cnt++;
				A[temp]=(A[temp]+cnt)%MOD;
			}
	}

int main()
	{
		LL t,i,j,k,ans;
		cin>>t;
		while(t--)
			{
				ans=0;
				cin>>upper>>d>>m>>n;
				pre();
				FOR(i,0,n+1)
					{
						FOR(j,0,n+1)
							{
								FOR(k,0,n+1)
									{
										if((i+j+k)%n == m)
												{
													ans=(ans+(((A[i]*A[j])%MOD)*A[k])%MOD)%MOD;
												}
									}
							}
					}
				cout<<ans<<endl;
			}
		return 0;
	}