using namespace std;

#include "bits/stdc++.h"

int M[104][104];

int D[104][104];

int n,m;

bool check(int x , int y)
{
        return (x >= 0 && x < n && y >= 0 && y < m);
}

int main()
{
        cin >> n >> m;
        for(int i = 0 ; i < n ; ++i)    for(int j = 0 ; j < m ; ++j)    cin >> M[i][j];
        for(int i = 0 ; i < n ; ++i)    for(int j = 0 ; j < m ; ++j)    D[i][j] = -1;
        D[0][0] = 1;
        queue < pair < int , int > > q;
        q.push(make_pair(0,0));
        pair < int , int > curr;
        while(!q.empty())
        {
                curr = q.front();
                int x = curr.first;
                int y = curr.second;
                q.pop();
                for(int i = -1 ; i <= 1 ; ++i)
                {
                        for(int j = -1 ; j <= 1 ; ++j)
                        {
                                int xk = x + i;
                                int yk = y + j;
                                if(check(xk,yk) && D[xk][yk] == -1 && M[xk][yk] == 0)
                                {       
                                        D[xk][yk] = D[x][y] + 1;
                                        q.push(make_pair(xk,yk));       
                                }
                        }
                }
        }
        for(int i = 0 ; i < n ; ++i)
        {
                for(int j = 0 ; j < m ; ++j)
                {
                        cout << D[i][j] << " ";
                }
                cout << endl;
        }
        cout << D[n-1][m-1] << endl;
        return 0;
}