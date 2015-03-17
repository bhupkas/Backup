/* bhupkas */

#include "bits/stdc++.h"

using namespace std;

bool P[105];

vector < int > p;

bool B[105];

int po(int a, int b)
{
	int re = 1 ;
	for(int i = 0 ; i < b ; i++)	re = re * a;
	return re;
}

void pre()
{
	memset(P,true,sizeof(P));
	P[0] = P[1] = false;
	for(int i = 2 ; i * i < 105 ; i++)
	{	
		if(P[i])	
		{
			for(int j = i ; j <= 105/i ; j++)	P[i*j] = false;
		}
	}
	for(int i = 2 ; i < 105 ; i++)	if(P[i])	p.push_back(i);
}

int fun(int x, int y)
{
	int re = 0;
	for(int i = 1 ; i <= 7 ; i++)
	{
		for(int j = 1 ; j <= 7 ; j++)
		{	
			int num = po(x,i)*po(y,j);
			if(num > 100)	continue;
			re = max(re , num);
		}
	}
	return re;
}

void solve()
{
	memset(B,false,sizeof(B));
	for(int i = 0 ; i < p.size() ; i++)
	{
		for(int j = i + 1 ; j < p.size() ; j++)
		{
			B[fun(p[i],p[j])] = true;
		}
	}
	int ans = 0;
	vector < int > v;
	for(int i = 0 ; i <= 100 ; i++)		if(B[i])	v.push_back(i), ans += i;
	for(int i = 0 ; i < v.size() ; i++)	cout << v[i] << endl;
	cout << ans << endl;
}

int main()
{
	pre();
	solve();	
	return 0;
}
