/* bhupkas */

using namespace std;

#include "bits/stdc++.h"

void insertright(int val , stack < int > &s)
{
        if(s.empty() || val > s.top())   
        {
                s.push(val);
                return;
        }
        int temp = s.top();
        s.pop();
        insertright(val,s);
        s.push(temp);
}


void sort(stack < int > &s)
{
        if(s.empty() || s.size() == 1)  return;
        int val = s.top();
        s.pop();
        sort(s);
        insertright(val,s);
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
        sort(s);
        while(!s.empty())
        {
                cout << s.top() << " ";
                s.pop();
        }
        cout << endl;
}
