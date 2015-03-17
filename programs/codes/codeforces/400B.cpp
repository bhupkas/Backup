/* bhupkas */

#include "bits/stdc++.h"

using namespace std;

typedef long long LL;

string board[1005];

int G[1005];
int S[1005];

int cnt[1005];

int main()
{
	int n,m;
	cin >> n >> m;
	for(int i = 0 ; i < n ;  i ++)	cin >> board[i];
	bool foo = true;
	for(int i = 0 ; i < n ; i++)
	{
		for(int j = 0 ; j < m ;++j)
		{
			if(board[i][j] == 'G')	G[i] = j;
			if(board[i][j] == 'S')	S[i] = j;
		}
		if(S[i] < G[i])	foo = false;
		cnt[i] = S[i] - G[i];
	}
	if(!foo)
	{
		cout << -1 << endl;
		return 0;
	}
	vector < int > v;
	for(int i = 0 ; i < n ; i++)	v.push_back(cnt[i]);
	int re = 0;
	sort(v.begin(),v.end());
	int A[1005];
	for(int i  = 0 ; i < 1004 ; i++)	A[i] = 0;
	for(int i  = 0 ; i < n ; i++)	A[v[i]]++;
	for(int i = 0 ; i < 1004 ; i++)	if(A[i] > 0)	re++;
	cout << re << endl;
	/*
	cin >> n;
	vector < int > v(n);
	for(int i = 0 ; i < n ; i++)	cin >> v[i];
	sort(v.begin(),v.end());
	*/
	return 0;
}
