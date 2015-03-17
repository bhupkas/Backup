using namespace std;

#include "bits/stdc++.h"

typedef long long LL;

bool P[1005];
LL A[1005];
void pre()
{
        for(int i = 0 ; i <= 1000 ; ++i) P[i] = true;
        P[0] = P[1] = false;
        for(int i = 2 ; i * i <= 1000 ; ++i)
        {
                if(P[i])
                {
                        for(int j = i ; j <= 1000/i ; ++j)       P[i*j] = false; 
                }
        }
}

int main()
{
        pre();
        LL n,re;
        re = 0;
        cin >> n;
        set < LL > s;
        if(n == 1)
        {
                cout << 0 << endl;
                return 0;
        }
        if(n == 2)
        {
                cout << 1 << endl;
                return 0;
        }
        LL prev;
        prev = 1;
        re = 1LL;
        for(LL i = 3 ; i <= n ; ++i)    
        {
                if(P[i])        re += 2*prev , prev *= 2;
                else            re += prev;
        }
        cout << re << endl;
        return 0;
}