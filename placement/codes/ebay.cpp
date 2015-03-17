using namespace std;

#include "bits/stdc++.h"

int main()
{
        string str;
        cin >> str;
        int n = str.size();
        vector < int > v(n);
        v[0] = 0;
        for(int i = 1 ; i < n ; ++i)
        {
                if(str[i] > str[i-1])   v[i] = v[i-1] + 1;
                else if(str[i] == str[i-1])     v[i] = v[i-1];
                else    v[i] = v[i-1] - 1;
        }
        int mx = -100000000;
        for(int i = 0 ; i < n ; ++i)    mx = max(mx,v[i]);
        for(int i = 0 ; i < n ; ++i)    v[i] -= mx;
        for(int i = 0 ; i < n ; ++i)    v[i] = -1*v[i];
        for(int i = 0 ; i <= mx ; ++i)
        {
                for(int j = 0 ; j < n ; ++j)
                {
                    if(v[j] == i)   cout << str[j];
                    else        cout << '-';
                }
                cout << endl;
        }
        return 0;
}
