/* bhupkas */

#include "bits/stdc++.h"

using namespace std;

void pre()
{
}

typedef long long LL;

struct node
{
    bool idx;
    int len , c;
    int val;
};

typedef struct node Node;

set < LL > myset;
set < LL > :: iterator it; 

vector < Node > v;

map < LL , int > mymap;

int ans(LL idx)
{
	if(mymap.find(idx) != mymap.end())	return mymap[idx] ;
            it = myset.upper_bound(idx);
            it--;
            if((*it) == idx)    
            {
                int iv = distance(myset.begin(),it) ;
                if(v[iv].idx == true)
                {
                    return mymap[idx] = v[iv].val;
                }
                else
                {
	            return mymap[idx] = v[0].val;
                }
            }
            else
            {
                int iv = distance(myset.begin() , it);
                idx -= (*it);
		idx %= v[iv].len;
		int re = ans(idx);
		mymap[idx] = re;
		return re;
            }
}

int main()
{
    pre();
    int m,n;
    int num;
    scanf("%d",&m);
    int op,val;
    long long cnt = 0;
    int len,c;
    for(int i = 0 ; i < m  ; i++)    
    {
	scanf("%d",&op);
        if(op == 1)
        {
	    scanf("%d",&val);
            myset.insert(cnt);
            cnt++;    
            Node N;
            N.idx = true;
            N.val = val;
            v.push_back(N);
        }
        else
        {
	    scanf("%d %d",&len,&c);
            myset.insert(cnt);
            cnt += (LL)(len * c);
            Node N;
            N.idx = false;
            N.len = len;
            N.c = c;
            v.push_back(N); 
        }
    }
    long long idx;
    scanf("%d",&n);
    while(n--)
    {
	scanf("%I64d",&idx);
        idx--;
        cout << ans(idx) << " ";
    }    
    printf("\n");
    return 0;
}


