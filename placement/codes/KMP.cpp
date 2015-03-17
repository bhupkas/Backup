using namespace std;

#include "bits/stdc++.h"

string str1 , str2;

int F[1000];

void failure()
{
        F[0] = 0;
        int n = str1.size();
        for(int i = 1 ; i < n ; ++i)    
        {
                int k = F[i-1];
                while(k && str1[i] != str1[k])  k = F[k];
                if(str1[i] == str1[k])  F[i] = k + 1;
                else    F[i] = 0;
        }          
}

int main()
{
        cin >> str1 >> str2;
        int m = str2.size();
        int n = str1.size();
        int len = 0;
        for(int i = 0 ; i < m ; ++i)
        {
                while(len && str2[i] != str1[len])      len = F[len];
                if(str1[len] == str2[i])        len++;
                if(len == n)    
                {
                        cout << i - n + 1 << endl;
                        len = F[len];
                }
        }
        return 0;
}
