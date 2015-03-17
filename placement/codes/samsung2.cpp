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
        cin >> str2 >> str1;
        int n = str1.size();
        int cnt;
        bool foo = false;
        int tot = str2.size();
        int len;
        while(1)
        {
                foo = false;
                cnt = 0;
                len = 0;
                for(int i = 0 ; i < tot ; ++i)
                {
                        str2[cnt++] = str2[i];
                        while(len && str2[i] != str1[len])      len = F[len];
                        if(str1[len] == str2[i])        len++;
                        if(len == n)    
                        {
                                foo = true;
                                cnt = i - n + 1;
                                len = F[len];
                        }
                }
                tot = cnt;
                if(!foo)        break;
        }
        for(int i = 0 ; i < cnt ; ++i)  cout << str2[i];
        cout << endl;
        return 0;
}
