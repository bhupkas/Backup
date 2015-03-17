/* bhupkas */

using namespace std;

#include "bits/stdc++.h"

int A[1000005];

int si;

void resolve()
{
        int i = 0;
        while(A[i] > 9)
        {
                A[i+1] += A[i] / 10;
                A[i] %= 10;
                i++;
        }
        si = max(si , i);
        return;
}

void print()
{
        for(int i = si - 1 ; i >= 0 ; i--)      cout << A[i];
        cout << endl;
}

int main()
{
        int t;
        cin >> t;
        string str;
        bool foo;
        while(t--)
        {
                foo = false;
                cin >> str;
                reverse(str.begin(),str.end());
                si = str.size();
                for(int i = 0 ; i < str.size() ; ++i)   
                {
                        if(str[i] != '9')       foo = true;
                        A[i] = str[i] - '0';
                }
                if(foo) 
                {
                        A[0] += 2;
                        resolve();
                        print();
                }
                if(si & 1)
                {
                        int l = si/2 - 1;
                        int r = si/2 + 1;
                        while(l>=0)
                        {
                                if(A[l] != A[r])        break;
                                l--;
                                r++;
                        }
                                
                }
        }
        return 0;
}
