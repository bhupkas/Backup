using namespace std;

#include "bits/stdc++.h"

typedef long long LL;

#define MOD (LL)(1e9 + 7)

LL C[105][105];

void pre()
{
        memset(C,0,sizeof(C));
        for(int i = 0 ; i < 105 ; ++i)  C[i][0] = 1LL , C[i][i] = 1LL;
        for(int i = 1 ; i < 105 ; ++i)
                for(int j = 1 ; j < i ; ++j)
                        C[i][j] = (C[i-1][j-1] + C[i-1][j]) % MOD;
}

LL modpow(LL a , LL b)
{
        LL re = 1LL;
        while(b)
        {
                if(b&1) re = (re * a) % MOD;
                a = (a * a) % MOD;
                b /= 2;
        }
        return re;
}

int main()
{
        pre();
        int t;
        cin >> t;
        for(int tc = 1 ; tc <= t ; tc++)
        {
                int m , n;
                cin >> m >> n;
                LL re = 0;
                for(int i = 0 ; i <= m ; ++i)
                {
                        LL temp = C[m][i];
                        temp = (temp * modpow(m-i,n)) % MOD;
                        if(i&1) temp = -1*temp;
                        re = (re + temp) % MOD;       
                }               
                re = (re + MOD) % MOD;
                printf("Case #%d: %lld\n",tc,re);
        }
        return 0;
}
