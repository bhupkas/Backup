using namespace std;

#include "bits/stdc++.h"

string str;

int A[1000005];

int k;

int main()
{
        cin >> str;
        cin >> k;
        int sz = str.size();
        A[0] = 1;
        for(int i = 1 ; i < sz ; ++i)
        {
                if(str[i] >= 'a' && str[i] <= 'z')     A[i] = A[i-1] + 1;
                else    A[i] = (str[i] - '0') * A[i-1]; 
        }
        int pos = 0;
        while(k >= A[pos])       pos++;
        while(1)
        {
                if(k == 0 && (str[pos] >= 'a' && str[pos] <= 'z'))
                {
                        cout << str[pos] << endl;
                        return 0;
                }           
                pos--;
                k %= A[pos];
        }
        return 0;
}
