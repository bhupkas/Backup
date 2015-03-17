/* bhupkas */

#include "bits/stdc++.h"

using namespace std;

typedef long long LL;

int A[10000006];

void pre()
{
	for(int i = 0 ; i < 10000006 ; i++)	A[i] = i;
	for(int i = 2 ; i * i < 10000006 ; i++)
	{
		if(A[i] == i)
		{
			for(int j = i ; j <= 10000006/i ; j++)	A[i*j] = min(i,A[i*j]);
		}
	}
}

int main()
{
	pre();
	int n;
	scanf("%d",&n);
	vector < int > v(n);
	for(int i = 0 ; i < n ; i++)	scanf("%d",&v[i]);
	map <LL , LL > mymap;
	map <LL , LL > :: iterator it,it1,it2;
	for(int i = 0 ; i < n ; i++)
	{
		int curr = v[i];
		while(curr != 1)
		{
			int num = A[curr];
			mymap[num]++;
			while(num == A[curr])
			{
				curr /= A[curr];
			} 
		}
	}	
	int m;
	scanf("%d",&m);
	int l,r;
	it = mymap.begin();
	it1 = it;
	it++;
	for( ; it != mymap.end() ; it++)
	{
		mymap[(*it).first] += mymap[(*it1).first];
		it1++;
	}
	it = mymap.end();
	it--;
	mymap[1] = 0;
	mymap[2000000001] = (*it).second;
	while(m--)
	{
		scanf("%d",&l); scanf("%d",&r);
		it1 = mymap.lower_bound(r);
		if((*it1).first > r)	it1--;
		it2 = mymap.lower_bound(l);
		if((*it2).first >= l)	it2--;
		cout << (*it1).second - (*it2).second << endl;
	}
	return 0;
}
