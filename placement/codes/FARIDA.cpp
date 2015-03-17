using namespace std;

#include "bits/stdc++.h"

typedef long long LL;

LL dp[2][10006];

int main()
{
        int t;
        cin >> t;
        int n;
        LL foo;
        for(int tc = 1 ; tc <= t ; ++tc)
        {
                cin >> n;
                if(!n)  
                {
                        printf("Case %d: ",tc);
                        cout << 0 << endl;
                        continue;
                }
                for(int i = 0 ; i < n ; ++i)
                {
                        cin >> foo;
                        if(!i)
                        {
                                dp[0][i] = 0;
                                dp[1][i] = foo;
                        }
                        else
                        {
                                dp[0][i] = max(dp[0][i-1],dp[1][i-1]);
                                dp[1][i] = foo + dp[0][i-1];
                        }
                }
                printf("Case %d: ",tc);
                cout << max(dp[0][n-1],dp[1][n-1]) << endl;
        }
        return 0;
}
