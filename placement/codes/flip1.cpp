using namespace std;

#include "bits/stdc++.h"

string M[105];

int n,m;

int cnt;

int main()
{
        cin >> n >> m;
        int k;
        for(int i = 0 ; i < n ; ++i)    cin >> M[i];
        for(int i = 0 ; i < n ; ++i)
        {
                for(int j = 0 ; j < m ; ++j)
                {
                        if(M[i][j] == 'R' || M[i][j] == 'G')      
                        {
                                cnt++;
                                k = j;
                                while(k < m)    
                                {
                                        if(M[i][k] == 'R')      M[i][k] = '.';
                                        else if(M[i][k] == 'G') M[i][k] = 'B';
                                        else    break;
                                        k++;
                                }
                        }
                }
        }
        for(int i = 0 ; i < m ; ++i)
        {       
                for(int j = 0 ; j < n ; ++j)
                {       
                        if(M[j][i] == 'B')      
                        {
                                cnt++;
                                k = j;
                                while(k < n)
                                {
                                        if(M[k][i] == 'B')      M[k][i] = '.';
                                        else    break;
                                        k++;        
                                }
                        }       
                }
        }
        cout << cnt << endl;
        return 0;
}