using namespace std;

#include "bits/stdc++.h"

int main()
{
        int n;
        cin >> n;
        int tot1,tot2;
        string str;
        int mx1,mx2;
        mx1 = mx2 = -1;
        tot1 = tot2 = 0;
        for(int i = 0 ; i < n ; ++i)
        {
                cin >> str;
                if(str[0] == 'B' && str[str.size() - 1] == 'B') tot1 += str.size();
                if(str[0] == 'C' && str[str.size() - 1] == 'C') tot2 += str.size();
                if(str[0] == 'B' && str[str.size() - 1] == 'C') mx1 = max(mx1,(int)str.size());
                if(str[0] == 'C' && str[str.size() - 1] == 'B') mx2 = max(mx2,(int)str.size());
        }
        cout << mx1 + max(tot1,tot2) + mx2 << endl;
        return 0;
}
