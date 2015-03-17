using namespace std;

#include "bits/stdc++.h"

int main()
{
        string str;
        cin >> str;
        int cnt = 0;
        int n = str.size();
        for(int i = 0 ; i < n ; ++i)
        {
                if(str[i] == '1')
                {
                        int j = i + 1;
                        while(j < n && str[j] == '0')   ++j;
                        if(j < n && str[j] == '1')      cnt++;
                }
        }        
        cout << cnt << endl;
        return 0;
}
