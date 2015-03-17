/* bhupkas */

using namespace std;

#include "bits/stdc++.h"

void pushend(int val , stack < int > &s)
{
        if(s.empty())   
        {
                s.push(val);
                return;
        }
        int temp = s.top();
        s.pop();
        pushend(val,s);
        s.push(temp);
}


void reverse(stack < int > &s)
{
        if(s.empty())   return;
        int val = s.top();
        s.pop();
        reverse(s);
        pushend(val,s);
}
void print(stack < int > s)
{
        while(!s.empty())
        {
                cout << s.top() << " ";
                s.pop();
        }
        cout << endl;
}
int main()
{       
        int n;
        stack < int > s;
        cin >> n ;
        int foo;
        for(int i = 0 ; i < n ; ++i)    
        {
                cin >> foo;
                s.push(foo);
        }
        print(s);
        reverse(s);
        while(!s.empty())
        {
                cout << s.top() << " ";
                s.pop();
        }
        cout << endl;
        return 0;
}
