/* bhupkas */

#include "bits/stdc++.h"

using namespace std;

int l[5005],r[5005],x[5005],t[5005],a[5005],b[5005];

int main()
{
	int n,m;
	ios::sync_with_stdio(false);
	cin >> n >> m;
	for(int i = 1 ; i <= n ; i++)	b[i] = 1000000000;
	for(int i = 1 ; i <= m ; i++)	
	{
		cin >> t[i] >> l[i] >> r[i] >> x[i];
		if(t[i] == 1)	for(int j = l[i] ; j <= r[i] ; j++)	a[j] += x[i];
		else		for(int j = l[i] ; j <= r[i] ; j++)	b[j] = min(b[j] , x[i] - a[j]);
	}
	memset(a,0,sizeof(a));
	for(int i = 1 ; i <= m ; i++)	
	{
		int mx = -1000000000;
		if(t[i] == 1)	for(int j = l[i] ; j <= r[i] ; j++)	a[j] += x[i];
		else		
		{
			for(int j = l[i] ; j <= r[i] ; j++)	mx = max(mx , b[j] + a[j]);
			if(mx != x[i])	
			{
				cout << "NO" << endl;
				return 0;
			}
		}
	}
	cout << "YES" << endl;
	for(int i = 1 ; i <= n ; i++)	cout << b[i] << " ";
	cout << endl;
	return 0;
}
