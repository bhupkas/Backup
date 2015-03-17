using namespace std;

#include "bits/stdc++.h"

typedef long long LL;

LL pow(int a, int b)
{       
        LL re = 1;
        for(int i = 1 ; i <= b ; ++i)
        {
                re = (re *(LL)a);
                if(re > (LL)(1e7))      return -1;
        }
        return re;
}
int main()
{       
        int x,p,n;
        cin >> x >> p >> n;
        int ans = 0;
        int l,r;
        LL po;
        for(int i = 2 ; i <= x + p ; ++i)
        {
                l = (x+p)/i - (x-1)/i;
                po = (i,n);
                if(po == -1)    r = 0;
                else    r = (x+p)/po - (x-1)/po;
                ans += (l - r);  
        }
        cout << ans << endl;
        return 0;
}
