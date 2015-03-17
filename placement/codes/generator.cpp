using namespace std;

#include "bits/stdc++.h"

int n;

vector < char > inp;

int len;

void recur(vector < char > & str , int pos)
{
        if(pos == len)    
        {
                for(int i = 0 ; i < len ; ++i)  cout << str[i];
                cout << endl;
                return;
        }        
        for(int i = 0 ; i < n ; ++i)
        {
                str.push_back(inp[i]);
                recur(str,pos+1);
                str.pop_back();
        }
}

int main()
{
        cin >> n;
        getchar();
        for(int i = 0 ; i < n ; ++i)
        {
                char ch = (char) getchar();
                inp.push_back(ch);
                getchar();
        }
        cin >> len; 
        vector < char >  str;
        recur(str,0);
        return 0;
}
