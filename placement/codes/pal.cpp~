using namespace std;

#include "bits/stdc++.h"

typedef long long LL;

LL dig(int num)
{
        LL re = 9LL;
        num -= 2;
        for(int i = 0 ; i < (num + 1)/2 ; ++i)  re = re * 10LL;
        return re;        
}

LL k;

int seg(int d)
{       
        int tot = 0;
        int re = 0;
        while(k >= tot)       tot += dig(d) , re++;
        tot -= dig(d);
        k -= tot;
        return re-1;
}

int main()
{
        cin >> k;
        LL tot;
        tot = 0;
        int i = 1;
        if(k <= 9)      
        {
                cout << k << endl;
                return 0;
        }
        while(k >= tot)
        {
                tot += dig(i);
                ++i;
        }
        i--;
        tot -= dig(i);
        i--;
        k -= tot;
        if(k == 0)      
        {
                for(int j= 0 ; j < i ; ++j)     cout << 9;
                cout << endl;
                return 0;
        }
        ++i;
        int len = i;
        string re;
        while(len > 1)
        {
                re.push_back(seg(len-2));
                len -= 2;
        }
        cout << re << endl;
        return 0;
}
