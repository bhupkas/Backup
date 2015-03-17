using namespace std;

#include "bits/stdc++.h"

int W[105];
int C[105];

vector < int > adj[105];

bool B[105][10005];

int main()
{
        int t;
        cin >> t;
        int n,m,x;
        while(t--)
        {
                cin >> n >> m >> x;
                for(int i = 0 ; i < m ; ++i)    adj[i].clear();
                for(int i = 0 ; i < n ; ++i)        cin >> W[i];
                for(int i = 0 ; i < n ; ++i)        cin >> C[i] , C[i]-- , adj[C[i]].push_back(W[i]);
                for(int i = 0 ; i <= m ; ++i)   for(int j = 0 ; j <= x ; ++j)   B[i][j] = false;
                for(int i = 0 ; i < adj[0].size() ; ++i)        if(adj[0][i] <= x)   B[0][adj[0][i]] = true;
                for(int i = 1 ; i < m ; ++i)
                {
                        for(int j = 0 ; j <= x ; ++j)
                        {
                                for(int k = 0 ; k < adj[i].size() ; ++k)
                                {
                                        if(j - adj[i][k] >= 0)  B[i][j] |= B[i-1][j - adj[i][k]];
                                }
                        }
                }
                int re = -1;
                for(int i = x ; i >= 0 ; i--)   if(B[m-1][i])   {re = x - i; break;}
                cout << re << endl;
        }
        return 0;
} 
