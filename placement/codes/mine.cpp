using namespace std;

#include "bits/stdc++.h"

int n;

vector < string > v;

bool check(int x, int y)
{
        return (x >= 0 && y >= 0 && x < n && y < n);
}

int A[305][305];

bool B[305][305];

void pre()
{
        for(int i = 0 ; i < n ; ++i)
        {
                for(int j = 0 ; j < n ; ++j)
                {
                        A[i][j] = 0;
                        if(v[i][j] == '.')
                        {
                                for(int k = -1 ; k <= 1 ; ++k)
                                {
                                        for(int l = -1 ; l <= 1 ;++l)
                                        {       
                                                int xk = i + k;
                                                int yk = j + l;
                                                if(xk == i && yk == j)  continue;
                                                if(check(xk,yk) && v[xk][yk] == '*')    A[i][j]++;
                                        }
                                }
                        }
                }
        }
}

void dfs(int x , int y)
{
        for(int i = -1 ; i <= 1; ++i)
        {
               for(int j = -1 ; j <= 1 ; ++j)
               {
                        int xk = x + i;
                        int yk = y + j;
                        if(xk == x && yk == y)  continue;
                        if(check(xk,yk) && !B[xk][yk] && v[xk][yk] == '.')
                        {       
                                B[xk][yk] = true;
                                if(A[xk][yk] == 0)      dfs(xk,yk);
                        }
               }
        }
}

int main()
{
        int t;
        cin >> t;
        string temp;
        for(int tc = 1; tc <= t ; tc++)
        {
                v.clear();
                cin >> n;
                for(int i = 0 ; i < n ; ++i)
                {
                    cin >> temp;
                    v.push_back(temp);    
                }
                pre();
                memset(B,false,sizeof(B));    
                int cnt = 0;
                for(int i = 0 ; i < n ; ++i)
                {
                        for(int j = 0 ; j < n ; ++j)
                        {
                                if(v[i][j] == '.' && !B[i][j] && A[i][j] == 0)
                                {
                                        cnt++;
                                        B[i][j] = true;
                                        dfs(i,j);
                                }
                        }
                } 
               for(int i = 0 ; i < n ; ++i)     for(int j = 0 ; j < n ; ++j)    if(v[i][j] == '.' && !B[i][j])  cnt++;  
               printf("Case #%d: ",tc);
               cout << cnt << endl;    
        }
        return 0;
}
