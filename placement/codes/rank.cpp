using namespace std;

#include "bits/stdc++.h"

string str;

map < char , int > cnt;

map < char , int > place;

int re;

typedef long long LL;

LL F[20];

int main()
{
        F[0] = 1;
        for(int i = 1 ; i < 18 ; ++i)
                F[i] = F[i-1] * (LL)(i);
        cin >> str;
        for(int i = 0 ; i < str.size() ; ++i)   cnt[str[i]]++;
        set < char > s;
        for(int i = 0 ; i < str.size() ; ++i)   s.insert(str[i]);
        int idx = 0;
        set < char > :: iterator it;
        for(it = s.begin() ; it != s.end() ; ++it)
                place[(*it)] = idx++;
        re = 0; 
        int n = str.size();
        LL num = F[n];
        map < char , int > :: iterator it1;
        for(it1 = cnt.begin() ; it1 != cnt.end() ; it1++)
                num /= F[(*it1).second];
        LL num1;
        for(int i = 0 ; i < str.size() ; ++i)
        {
                for(it = s.begin() ; (*it) != str[i] ; ++it)
                {
                        if(cnt[(*it)] == 0)     continue;
                        num1 = (num * cnt[(*it)]) / n;
                        re += num1;
                }
                num *= cnt[str[i]];
                num /= n;
                n--;
                cnt[str[i]]--;
        }
        cout << re + 1 << endl;
        return 0;
}
