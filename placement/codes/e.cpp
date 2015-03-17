using namespace std;

#include "bits/stdc++.h"

int W[1005];

int dp[205][1005];

int cumm[1005];

int p,n;

int main()
{
        cin >> p >> n;
        W[0] = 0;
        for(int i = 1 ; i <= n ; ++i)   cin >> W[i];
        cumm[0] = 0;
        for(int i = 1 ; i <= n ; ++i)   cumm[i] = cumm[i-1] + W[i];
        for(int j = 0 ; j <= n ; ++j)   dp[0][j] = cumm[j];
        for(int i = 1 ; i < p ; ++i)
        {       
                for(int j = 0 ; j <= n ; ++j)
                {
                        dp[i][j] = 100000000;
                        for(int k = 0 ; k <= j ; ++k)
                        {
                                int val = cumm[j] - cumm[k];
                                dp[i][j] = min(dp[i][j],max(dp[i-1][k] , val));
                        }
                }
        }
        cout << dp[p-1][n] << endl;
        return 0;
}
