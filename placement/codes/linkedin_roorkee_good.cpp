/* bhupkas */

using namespace std;

#include "bits/stdc++.h"

int dp[55][55][55][55][5];

int A[4];

int recur(int a, int b , int c , int d , int num)
{       
        if(a < 0 || b < 0 || c < 0 || d < 0)    return 0;
        if(dp[a][b][c][d][num] != -1)   return dp[a][b][c][d][num];
        vector < pair < int , int > > v;
        v.push_back(make_pair(a,1));
        v.push_back(make_pair(b,2));
        v.push_back(make_pair(c,3));
        v.push_back(make_pair(d,4));
        sort(v.begin(),v.end());
        if(!v[0].first && !v[1].first && !v[2].first)
        {
                if(v[3].first == 1 && v[3].second == num)       return dp[a][b][c][d][num] = 1;
                return dp[a][b][c][d][num] = 0;
        }
        if(num == 1)    return dp[a][b][c][d][num] = recur(a-1,b,c,d,2) + recur(a-1,b,c,d,3) + recur(a-1,b,c,d,4);
        if(num == 2)    return dp[a][b][c][d][num] =recur(a,b-1,c,d,1) + recur(a,b-1,c,d,3) + recur(a,b-1,c,d,4);
        if(num == 3)    return dp[a][b][c][d][num] =recur(a,b,c-1,d,1) + recur(a,b,c-1,d,2) + recur(a,b,c-1,d,4);
        return dp[a][b][c][d][num] =recur(a,b,c,d-1,1) + recur(a,b,c,d-1,2) + recur(a,b,c,d-1,3); 
}

int main()
{
        for(int i = 0 ; i < 4 ; ++i)    cin >> A[i];
        for(int i = 0 ; i <= A[0] ; ++i)  for(int j = 0 ; j <= A[1] ; ++j)  for(int k = 0 ; k <= A[2] ; ++k)    for(int l = 0 ; l <= A[3] ; ++l)        
                for(int m = 0 ; m < 5 ; ++m)    dp[i][j][k][l][m] = -1;
        cout << recur(A[0],A[1],A[2],A[3],1) + recur(A[0],A[1],A[2],A[3],2) + recur(A[0],A[1],A[2],A[3], 3) + recur(A[0],A[1],A[2],A[3],4) << endl;   
        return 0;
}
