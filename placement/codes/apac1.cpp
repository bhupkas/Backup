using namespace std;

#include "bits/stdc++.h"

int M[25][25];

int M1[25][25];

int n;

void update()
{
        for(int i = 1 ; i <= n ; ++i)
        {
                int cnt = 1;
                int curr,next;
                curr = 1;
                while(curr <= n)
                {
                        while(curr <= n && !M[curr][i]) curr++;
                        if(curr > n)    break;
                        M[cnt++][i] = M[curr++][i];
                }
                while(cnt <= n) M[cnt++][i] = 0;
                curr = 1;
                cnt = 1;
                while(curr <= n)
                {
                        if(curr + 1 > n)        
                        {
                                M[cnt++][i] = M[curr++][i];
                        }
                        else
                        {
                                if(M[curr+1][i] == M[curr][i])
                                {       
                                        M[cnt++][i] = 2 * M[curr][i];
                                        curr += 2;
                                }
                                else
                                {
                                        M[cnt++][i] = M[curr++][i];
                                }
                        }
                }
                while(cnt <= n) M[cnt++][i] = 0;
        }
}

void clock1()
{
        for(int i = 1 ; i <= n ; ++i)   for(int j = 1 ; j <= n ; ++j)   M1[i][j] = M[n-j+1][i];
        for(int i = 1 ; i <= n ; ++i)   for(int j = 1 ; j <= n ; ++j)   M[i][j] = M1[i][j];
}

void anti()
{
        for(int i = 1 ; i <= n ; ++i)   for(int j = 1 ; j <= n ; ++j)   M1[n-j+1][i] = M[i][j];
        for(int i = 1 ; i <= n ; ++i)   for(int j = 1 ; j <= n ; ++j)   M[i][j] = M1[i][j];
}

int main()
{
        int t;
        string str;
        cin >> t;
        for(int tc = 1 ; tc <= t ; ++tc)
        {
                cin >> n;
                cin >> str;
                for(int i = 1 ; i <= n ; ++i)   for(int j = 1 ; j <= n ; ++j)   cin >> M[i][j];
                if(str[0] == 'u')       update();
                else if(str[0] == 'l')  clock1(),update(),anti();
                else if(str[0] == 'r')  anti(),update(),clock1();
                else    clock1(),clock1(),update(),anti(),anti();
                printf("Case #%d:\n",tc);
                for(int i = 1 ; i <= n ; ++i)   
                {
                        for(int j = 1 ; j <= n ; ++j)
                                cout << M[i][j] << " ";
                        cout << endl;
                }
        }
        return 0;
}
