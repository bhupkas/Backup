/* bhupkas */

using namespace std;

#include "bits/stdc++.h"

int t,n,m;

#define MOD (long long)(1000000009)

long long re;

vector < pair < int , char > > v;

int main()
{
        cin >> t;
        while(t--)
        {
                v.clear();
                scanf("%d %d",&n,&m);
                char ch;
                re = 1LL;
                int temp;
                char prev;
                int idx;
                for(int i = 0 ; i < m ; ++i)
                {
                        getchar();
                        scanf("%c %d",&ch,&temp);
                        v.push_back(make_pair(temp,ch));
                }
                sort(v.begin(),v.end());
                prev = v[0].second;
                idx = v[0].first;
                for(int i = 1 ; i < m ; ++i)
                {                
                        ch = v[i].second;
                        temp = v[i].first;
                        if(ch == prev)  idx = temp;
                        else    
                        {
                                re = (re * (long long)(temp - idx)) % MOD;
                                prev = ch;
                                idx = temp;
                        }
                }
                printf("%lld\n",re);
        }
        return 0;
}
