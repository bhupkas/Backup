using namespace std;

#include "bits/stdc++.h"

bool G[55][55];

int re;

int n;

bool B[55];

void recur(int pos , int cnt)
{
        if(pos == n)
        {       
                re = max(re,cnt);
                return;
        }
        if(B[pos])      
        {
                recur(pos + 1, cnt);
                return;
        }
        for(int i = 0 ; i < n ; ++i)
        {
                if(G[pos][i] && !B[i])
                {
                        B[pos] = true;
                        B[i] = true;
                        recur(pos+1,cnt+1);
                        B[pos] = false;
                        B[i] = false;
                }
        }
        recur(pos+1,cnt);
}

int main()
{
        cin >> n;
        char ch;
        getchar();
        for(int i = 0 ; i < n ; ++i)
        {
                for(int j = 0 ; j < n ; ++j)
                {
                        ch = (char)getchar();
                        getchar();
                        G[i][j] = (ch == 'Y');
                }
        }   
        re = -1;
        for(int i = 0 ; i < n ; ++i)    B[i] = false;
        recur(0,0);
        cout << re * 2 << endl;
        return 0;
}
