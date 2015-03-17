using namespace std;

#include "bits/stdc++.h"

int main()
{
        char S[105];
        scanf("%s",S);
        int n = strlen(S);
        int re,wr;
        re = n - 1;
        wr = 2*n - 1;
        while(re >= 0)
        {
                S[wr-1] = ((S[re] - '0') / 2) + '0';
                S[wr] = ((S[re] - '0') % 2) + '0';
                wr-=2;
                re--;
        }
        for(int i = 0 ; i < 2n ; ++i)   cout << S[i];
        cout << endl;
        return 0;
}
