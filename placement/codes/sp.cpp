using namespace std;

#include "bits/stdc++.h"


int main()
{
        char ch;
        string temp;
        vector < string > foo;
        vector < vector < string > > v;
        while(scanf("%c",&ch) != EOF)
        {
                if(ch == EOF)   
                {
                        foo.push_back(temp);
                        v.push_back(foo);
                        break;
                }
                if(ch == ' ')
                {
                        if(temp.size()) foo.push_back(temp);
                        temp.clear();
                        continue;
                }
                if(ch == '\n')
                {
                        v.push_back(foo);
                        foo.clear();
                        temp.clear();
                        continue;
                }
                else    temp.push_back(ch);
        }
        for(int i = 0 ; i < v.size() ; ++i)
        {
                for(int j = 0 ; j 
        }
        return 0;
}
