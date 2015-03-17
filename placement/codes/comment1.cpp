using namespace std;

#include "bits/stdc++.h"

int n;

vector < int > re;

void resolve()
{
        int n = re.size();
        for(int i = 0 ; i < n - 1 ; ++i)
        {
                if(re[i] > 10)
                {
                        re[i+1] += re[i]/10;
                        re[i] %= 10;
                }
        }
        while(re[re.size() - 1] > 10)
        {
                re.push_back(re[re.size()-1]/10);
                re[re.size()-2] %= 10;
        }
}

int main()
{
        cin >> n;
        re.push_back(1);
        for(int i = 2 ; i <= n ; ++i)
        {
                int sz = re.size();
                for(int j = 0 ; j < sz ; ++j)
                        re[j] *= i;       
                resolve();
        }
        reverse(re.begin(),re.end());
        int val = 0;
        for(int i = 0 ; i < re.size() ; ++i)    val += re[i];
        for(int i = 0 ; i < re.size() ; ++i)    cout << re[i];
        cout << endl;
        cout << val << endl;
        cout << re.size() << endl;
        return 0;
}
