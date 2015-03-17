using namespace std;

#include "bits/stdc++.h"

typedef long long LL;

int n;

#define MOD (LL)(1000000007)

int main()
{
        cin >> n;
        int foo;
        stack < int > s;
        LL re = 1LL;
        for(int i = 0 ; i < n ; ++i)
        {
                cin >> foo;
                if(s.empty())   s.push(foo);
                else
                {
                        if(foo > s.top())
                        {
                                while(!s.empty() && foo > s.top())
                                {
                                        re = (re * (LL)foo) % MOD;
                                        s.pop(); 
                                }
                        }
                        s.push(foo);
                }
        }
        cout << ((re + MOD) % MOD + MOD ) % MOD<< endl;  
        return 0;
}
