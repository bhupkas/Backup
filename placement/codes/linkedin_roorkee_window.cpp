/* bhupkas */

using namespace std;

#include "bits/stdc++.h"

int main()
{
        int n,m;
        cin >> n;
        cin >> m;
        vector < int > v(n);
        for(int i = 0; i  <  n ; ++i)   cin >> v[i];
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        v.push_back(0);
        int cnt = 0;
        int val,diff;
        val = v[0];
        int i = 0;
        while(i < n && v[i] == val)     ++i,cnt++;
        diff = val - v[i];
        int re = 0;
        int foo;
        while(1)
        {
                if(m >= cnt*diff)
                {
                        m -= cnt * diff;
                        foo = ((val) * (val + 1)) / 2 ;
                        foo -= (v[i] * (v[i] + 1)) / 2;
                        re += foo * cnt;
                        for(int j = 0 ; j < i ; ++j)    v[j] = v[i];
                        val = v[i];
                        while(i < n && v[i] == val)     ++i , cnt++;
                        diff = val - v[i];                 
                }
                else    break;
        }
        int a1;
        if(m != 0)
        {
                int temp = m / (cnt);
                foo = ((val) * (val + 1)) / 2 ; 
                a1 = val - temp;
                foo -= (a1 * (a1 + 1))/2;
                re += cnt * foo;
                cout << re << endl;
                for(int j = 0 ; j < i ; ++j)    v[j] = a1;
                temp = m % cnt ;
                re += temp * a1;
        }
        cout << re << endl;
        return 0;
}
