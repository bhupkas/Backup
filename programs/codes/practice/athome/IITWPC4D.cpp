/* bhupkas */

#include "bits/stdc++.h"

using namespace std;

typedef long long LL;

#define	(LL)(1e9 + 7)

int A[55][55];
int R[55][55];

void mul()
{
	int T[55][55];
	memset(T,0,sizeof(T));
	for(int i = 0 ; i < n ; i++)
		for(int j = 0 ; j < n ; j++)
			for(int k = 0 ; k < n ; k++)
				T[i][j] = (T[i][j] + (R[i][k] * A[k][j]) % MOD ) % MOD;
	for(int i = 0 ; i < n ; i++)	for(int j = 0 ; j < n ; j++)	R[i][j] = T[i][j];
}

void squa()
{
	int T[55][55];
	memset(T,0,sizeof(T));
	for(int i = 0 ; i < n ; i++)
		for(int j = 0 ; j < n ; j++)
			for(int k = 0 ; k < n ; k++)
				T[i][j] = (T[i][j] + (A[i][k] * A[k][j]) % MOD ) % MOD;
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
	int n,k,m;
	while(t--)
	{
		cin >> n >> k >> m;
		vector < int > v(n);
		memset(A,0,sizeof(A));
		for(int i = 0 ; i < n ; i++)	cin >> v[i];
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
			v[i] = 0;
			for(int j = 0 ; j < n ; j++)	v[i] = (R[i][j] * v[j]) % MOD;	
		}
		for(int i = 0 ; i < n ; i++)	cout << v[i] << " ";
		cout << endl;
	}
	return 0;
}
