/* bhupkas */

using namespace std;

#include "bits/stdc++.h"

int A[100005];

int main()
{
        long long int n,m;
        cin >> n >> m;
        for(int i = 0 ; i < n ; ++i)    scanf("%d",&A[i]);
        char ch;
        long long int d;
        long long int tot= 0;
        long long int idx;
        for(int i = 0 ; i < m ; ++i)
        {
                getchar();
                ch = (char) getchar();
                scanf("%lld",&d);
                if(ch == 'C')   tot -= d;
                else if(ch == 'A')      tot += d;
                else
                {
                        d--;
                        idx = ((d - tot) % n + n) % n;
                        printf("%d\n",A[idx]);
                }
        }
        return 0;
}
