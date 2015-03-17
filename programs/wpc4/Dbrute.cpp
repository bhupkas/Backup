/* bhupkas */

#include "bits/stdc++.h"

using namespace std;

typedef long long LL;

#define	MOD (LL)(1e9 + 7)

int n;

int main()
{
	freopen ("in.txt", "r", stdin);
	int t;
	cin >> t;
	assert(t >= 1 && t <= 100);
	int k,m;
	int tc = 0;
	vector < LL > v, v1;
	while(t--)
	{
		cin >> n >> k >> m;
		assert(n >= 1 && n <= 50);
		assert(k >= 1 && k <= n);
		assert(n%2 == 0);
		assert(m >= 1 && m <= 1000000000);
		v.resize (n);
		v1.resize (n);
		for(int i = 0 ; i < n ; i++)	
		{
			cin >> v[i];
			assert(v[i] >= -1000000000 && v[i] <= 1000000000);
		}
		for(int counter = 0 ; counter < m ; counter++)
		{
			for(int l = 0 ; l < n ; l++)	v1[l] = 0;
			
			for(int j = 0 ; j < n ; j++)
			{
				for(int cnt = 0 ; cnt < k ; cnt++)
				{
					int l = (j + cnt) % n;
					if(cnt & 1)	v1[j] = ((v1[j] - v[l]) % MOD + MOD ) % MOD;	
					else		v1[j] = ((v1[j] + v[l]) % MOD + MOD ) % MOD;
				}
			}
			for(int j = 0 ; j < n ; j+= 2)	swap(v1[j],v1[j+1]);
			for(int j = 0 ; j < n ; j++)	v[j] = v1[j];
		}
		for(int i = 0 ; i < n  - 1; i++)	cout << v[i] << " ";
		cout << v[n-1] << endl;
	}
	return 0;
}