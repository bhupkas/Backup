/* bhupkas */

#include "bits/stdc++.h"

using namespace std;

typedef long long LL;

#define	MOD (LL)(1e9 + 7)

LL A[55][55];
LL R[55][55];

int n;

void mul()
{
	LL T[55][55];
	memset(T,0,sizeof(T));
	for(int i = 0 ; i < n ; i++)
		for(int j = 0 ; j < n ; j++)
			for(int k = 0 ; k < n ; k++)
				T[i][j] = (((T[i][j] + (R[i][k] * A[k][j]) % MOD ) % MOD) + MOD ) % MOD;
	for(int i = 0 ; i < n ; i++)	for(int j = 0 ; j < n ; j++)	R[i][j] = T[i][j];
}

void squa()
{
	LL T[55][55];
	memset(T,0,sizeof(T));
	for(int i = 0 ; i < n ; i++)
		for(int j = 0 ; j < n ; j++)
			for(int k = 0 ; k < n ; k++)
				T[i][j] = (((T[i][j] + (A[i][k] * A[k][j]) % MOD ) % MOD) + MOD ) % MOD;
	for(int i = 0 ; i < n ; i++)	for(int j = 0 ; j < n ; j++)	A[i][j] = T[i][j];
}

void exp(int b)
{
	for(int i = 0 ; i < n ; i++)
		for(int j = 0 ; j < n ; j++)
			if(i == j)	R[i][j] = 1;
			else		R[i][j] = 0;
	while(b)
	{
		if(b&1)	mul();
		squa();
		b >>= 1;
	}
}

int main()
{
	int t;
	cin >> t;
	assert(t >= 1 && t <= 100);
	int k,m;
	int tc = 0;
	while(t--)
	{
		cin >> n >> k >> m;
		assert(n >= 1 && n <= 50);
		assert(k >= 1 && k <= n);
		assert(n%2 == 0);
		assert(m >= 1 && m <= 1000000000);
		vector < LL > v(n),v1(n);
		memset(A,0,sizeof(A));
		for(int i = 0 ; i < n ; i++)	
		{
			cin >> v[i];
			assert(v[i] >= -1000000000 && v[i] <= 1000000000);
		}
		for(int i = 0 ; i < n ; i++)
		{	
			for(int cnt = 0 ; cnt < k ; cnt++)
			{
				int j = (i + cnt) % n;
				if(cnt & 1)	A[i][j] = -1;
				else		A[i][j] = 1;
			}
		}
		for(int i = 0 ; i < n ; i += 2)
			for(int j = 0 ; j < n ; j++)
				swap(A[i][j],A[i+1][j]);
		exp(m);
		for(int i = 0 ; i < n ; i++)
		{
			v1[i] = 0;
			for(int j = 0 ; j < n ; j++)	v1[i] = (((v1[i] + (R[i][j] * v[j]) % MOD ) % MOD) + MOD) % MOD;	
		}
		for(int i = 0 ; i < n - 1; i++)	cout << v1[i] << " ";
		cout << v1[n-1] << endl;
	}
	return 0;
}
