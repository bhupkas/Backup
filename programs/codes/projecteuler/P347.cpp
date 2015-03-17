/* bhupkas */

#include "bits/stdc++.h"

using namespace std;

#define MAXN 10000005

int P[MAXN+5];

typedef long long LL;

map < pair < int , int > , bool > mymap;
map < pair < int , int > , bool > :: iterator itt;

void pre()
{
	for(int i = 0 ; i < MAXN ; i++)	P[i] = i;
	for(int i = 2 ; i * i <= MAXN ; i++)
	{
		if(P[i] == i)
		{
			for(int j = i ; j <= MAXN/i ; j++)	P[i*j] = i;
		}
	}
}

pair < int , int > fun(int num)
{
	set < int > s;
	set < int > :: iterator it;
	while(num != 1)
	{
		s.insert(P[num]);
		num /= P[num];
		if(s.size() > 2)	return make_pair(-1,-1);
	}
	if(s.size() == 2)	
	{
		it = s.begin();
		int r1 = (*it);
		it++;
		int r2 = (*it);
		return make_pair(r1,r2);
	}
	return make_pair(-1,-1);
}

void solve()
{
	LL re = 0;
	int n;
	cin >> n;
	for(int i = n ; i >= 6 ; i--)
	{
		pair < int , int > p = fun(i);
		if(p.first == -1)	continue;
		itt = mymap.find(p);
		if(itt == mymap.end())
		{
			re += (LL)i;
			mymap[p] = true;
		} 
	}
	cout << re << endl;
}

int main()
{
	pre();
	solve();
	return 0;
}
