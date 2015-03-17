/* bhupkas */

using namespace std;

#include "bits/stdc++.h"

int t,n,m;

int A[105];

int main()
{
        cin >> t;
        while(t--)
        {
                cin >> n >> m;
                for(int i = 0 ; i < n ; ++i)    cin >> A[i];
                sort(A,A+n);
                int re = 0;
                for(int i = 0 ; i < n ; ++i)    re += (A[n-1] - A[i]);
                m -= re;
                if(m%n == 0)    puts("Yes");
                else    puts("No");
        }
        return 0;
}
