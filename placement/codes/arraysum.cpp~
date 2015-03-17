using namespace std;

#include "bits/stdc++.h"

int A[100005];
int dp[2][100005];

int main()
{
        int n;
        cin >> n;
        for(int i = 0 ; i < n ; ++i)    cin >> A[i];
        dp[0][0] = A[0];
        dp[0][1] = -1*A[0];
        for(int i = 1 ; i < n ; ++i)
        {
                dp[0][i] = A[i] + min(dp[0][i-1],dp[1][i-1]);
                dp[1][i] = -1*A[i] = min(
        }
        return 0 ;
}
