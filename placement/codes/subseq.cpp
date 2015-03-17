using namespace std;

#include "bits/stdc++.h"

int main()
{
        vector < int > v;
        vector < int > dp1,dp2;
        int n;
        cin >> n;
        int temp;
        for(int i = 0 ; i < n ; ++i)
        {
                cin >> temp;
                v.push_back(temp);
                dp1.push_back(0);
                dp2.push_back(0);
        }
        dp1[0] = dp2[0] = 1;
        for(int i = 1 ; i < n ; ++i)
        {
                for(int j = 0 ; j < i ; ++j)
                {
                        if(v[i] - v[j] > 0)
                        {
                                dp1[i] = max(dp1[i],dp2[j]+1);
                        }
                        else if(v[i] - v[j] < 0)
                        {
                                dp2[i] = max(dp2[i],dp1[j]+1);
                        }
                }
        }
        int re = -1;
        for(int i = 0 ; i < n ; ++i)    re = max(re,max(dp1[i],dp2[i]));
        cout << re << endl;
        return 0;
}
