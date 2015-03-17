/* bhupkas */

#include "bits/stdc++.h"

using namespace std;

typedef long long LL;

int main()
{	
	int n,m;
	int D[105][105];
	cin >> n >> m;
	for(int i = 0 ; i < n ; i++)	for(int j = 0 ; j < n ; j++)	D[i][j] = 1000000000;
	for(int i = 0 ; i < m ; i++)
	{
		int u,v,c;
		cin >> u >> v >> c;
		D[u][v] = min(D[u][v],c);
		D[v][u] = min(D[v][u],c);
	}
	int s;
	cin >> s;
	vector < int > v(s);
	for(int i = 0 ; i < s ;i++)	cin >> v[i];
	int a,b;
	cin >> a >> b;
	for(int k = 0 ; k < n ; k++)
		for(int i = 0 ; i < n ; i++)
			for(int j = 0 ; j < n ; j++)	
				D[i][j] = min(D[i][j] , D[i][k] + D[k][j]);
	int re = 1000000000;
	int l1 = a;
	int l2 = b;
	int val = 0;
	for(int i = 0 ; i < n ;i++)	D[i][i] = 0;
	for(int mask = 0 ; mask < (1 << s) ; mask++)
	{
		vector < int > v1;
		vector < int > v2;
		v1.clear();
		v2.clear();
		for(int i = 0 ; i < s ;i++)
		{
			if((1<<i) & mask)	v1.push_back(v[i]);
			else			v2.push_back(v[i]);
		}
		vector < int > perm1;
		vector < int > perm2;
		perm1.clear();
		perm2.clear();
		for(int i = 0 ; i < v1.size() ; i++)	perm1.push_back(i);
		for(int i = 0 ; i < v2.size() ; i++)	perm2.push_back(i);
		int val1,re1 = 1000000000;
		do
		{
			val1 = 0;
			l1 = a;
			for(int i = 0 ; i < v1.size() ; i++)	
			{
				val1 += D[l1][v1[perm1[i]]];
				l1 = v1[perm1[i]];
			}
			re1 = min(re1,val1);
		}while(next_permutation(perm1.begin(),perm1.end()));
		int val2 ;
		int re2 = 1000000000;
		do
		{
			val2 = 0;
			l2 = b;
			for(int i = 0 ; i < v2.size() ; i++)	
			{
				val2 += D[l2][v2[perm2[i]]];
				l2 = v2[perm2[i]];
			}
			re2 = min(re2,val2);
		}while(next_permutation(perm2.begin(),perm2.end()));
		re = min(re , re1 + re2);
	}	
	cout << re << endl;
	return 0;
}

