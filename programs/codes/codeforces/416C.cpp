/* bhupkas */

using namespace std;

#include "bits/stdc++.h"

typedef long long LL;

LL M[1005];

bool B[1005];

LL A[1005];

int main()
{
	LL n,k;
	cin >> n;
	vector < pair < LL , pair < LL , LL > > > v;
	LL foo,foo1;
	for(int i = 0 ; i < n ; ++i)
	{
		cin >> foo >> foo1;
		v.push_back(make_pair(foo1 , make_pair(foo,i)));
	}	
	sort(v.begin(),v.end());
	reverse(v.begin(),v.end());
	cin >> k;
	vector < LL > table;
	vector < LL > :: iterator it1;
	for(int i = 0 ; i < 1005 ; ++i)	M[i] = -1;
	for(int i = 0 ; i < 1005 ; ++i)	B[i] = false;
	for(int i = 0 ; i < k ; ++i)
	{
		cin >> foo;
		table.push_back(foo);
		A[i] = i;
	}
	for(int i = 0 ; i < k ; ++i)
	{
		for(int j = i + 1 ; j < k ; ++j)
		{
			if(table[j] < table[i])
			{
				swap(table[j],table[i]);
				swap(A[j],A[i]);
			}
		}
	}
	LL ans = 0;
	for(int i = 0 ; i < n ; ++i)
	{
		it1 = lower_bound(table.begin(),table.end(),v[i].second.first);
		if(it1 == table.end())	continue;
		int idx = it1 - table.begin();
		while(B[A[idx]] == true && idx < k)	idx++;
		if(idx == k)	continue;
		B[A[idx]] = true;
		ans += v[i].first;
		M[v[i].second.second] = A[idx];
	}
	int cnt = 0 ;
	for(int i = 0 ; i < n ; ++i)	if(M[i] != -1)	cnt++;
	cout << cnt << " " << ans << endl;
	for(int i = 0 ; i < n ; ++i)
		if(M[i] != -1)	cout << i + 1 << " " << M[i] + 1 << endl;
	return 0;
}
