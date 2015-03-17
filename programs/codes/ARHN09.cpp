/* bhupkas */

using namespace std;

#include "bits/stdc++.h"

typedef long long LL;

vector < LL > v;

int main()
{
	int n,m;
	cin >> n >> m;
	int a , b;
	v.push_back(0);
	LL num;
	for(int i = 0 ; i < n ; ++i)	
	{
		cin >> num;
		v.push_back(num);
	}
	for(int i = 1 ; i <= n ; ++i)	v[i] += v[i-1];
	string str;
	for(int i = 0 ; i < m ; ++i)
	{
		cin >> str;
		cin >> a >> b;
		if(a > b)	swap(a,b);
		cout << v[b] - v[a-1] << endl;
	}
	return 0;
}