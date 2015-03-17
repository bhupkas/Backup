using namespace std;

#include "bits/stdc++.h"

vector < int > post;

int idx;

int solver(vector < int > & inorder , int l , int r , int x)
{
        for(int i = l ; i  <= r ; ++i)  if(inorder[i] == x)     return i;
}

void recur(vector < int > & pre , vector < int > & in , int l .int r)
{
        if(r < l)       return;
        int foo = pre[idx];
        int pos = solver(in,l,r,foo);
        idx++;
        recur(pre,in,l,pos-1);
        recur(pre,in,pos+1,r);
        post.push_back(foo);
}

int main()
{
        vector < int > in,pre;
        int temp,n;
        cin >> n;
        for(int i = 0 ; i < n ; ++i)
        {
                cin >> temp;
                in.push_back(temp);
        }      
        for(int i = 0 ; i < n ; ++i)
        {
                cin >> temp;
                pre.push_back(temp);
        }
        idx = 0;
        recur(pre,in,0,n-1);
        return 0;
}