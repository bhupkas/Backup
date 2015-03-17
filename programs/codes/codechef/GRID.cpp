/* bhupkas */

using namespace std;

#include "bits/stdc++.h"

char S[1005][1005];

bool H[1005][1005];
bool V[1005][1005];

int main()
{
        string str;
        int t;
        int n;
        scanf("%d",&t);
        while(t--)
        {
                scanf("%d",&n);
                for(int i = 0 ; i < n ; ++i)
                {
                        getchar();
                        for(int j = 0 ; j < n ; ++j)    S[i][j] = (char)(getchar()) , H[i][j] = V[i][j] = false;
                }
                for(int i = 0 ; i < n ; ++i)
                {
                        int j = n - 1;
                        while(j >= 0 && S[i][j] == '.') H[i][j] = true , j--;
                }
                for(int j = 0 ; j < n ; ++j)
                {
                        int i = n - 1;
                        while(i>=0 && S[i][j] == '.')   V[i][j] = true , i--;   
                }
                int re = 0;
                for(int i = 0 ; i < n ; ++i)    for(int j = 0 ; j < n ; ++j)    if(H[i][j] && V[i][j])  re++;
                cout << re << endl;
        }
        return 0;
}
