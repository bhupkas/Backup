/* bhupkas */

using namespace std;

#include "bits/stdc++.h"

const int N = 50005;

int n,m;

int B[N];

int CC[N];

int I[N];

vector < int > adj[N];

bool visi[N];

int cnt;

int P[N];

vector < int > dfstree[N];

void dfs(int x,int p)
{
	visi[x] = true;
	if(B[x])	CC[cnt]++;
	P[x] = p;
	I[x] = B[x];
	for(int i = 0 ; i < adj[x].size() ; ++i)
	{	
		int curr = adj[x][i];
		if(!visi[curr])	
		{
			dfstree[x].push_back(curr);
			dfs(curr,p);
			I[x] += I[curr];
		}
	}
}

int main()
{
	cin >> n >> m;
	for(int i = 0 ; i < n ; ++i)	cin >> B[i];
	for(int i = 0 ; i < m ; ++i)
	{
		int a,b;
		cin >> a >> b;
		a-- , b--;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
		
	for(int i = 0 ; i < n ; ++i)
	{
		if(!visi[i])	
			dfs(i,i) , P[i] = -1 , cnt++;
	}
	long long re1 = 0;
	for(int i = 0 ; i < cnt ; ++i)	re1 += (long long)((long long)CC[i] * (long long)(CC[i] - 1))/2;
	int re2 = 0;
	int co;
	for(int i = 0 ; i < n ; ++i)
	{
		if(P[i] != -1 && I[i] > 0 && I[i] < I[P[i]])	
		{
			re2++;
			continue;
		}
		if(B[i] && I[i] > 1)	
		{
			re2++;
			continue;
		}
		co = 0;
		for(int j = 0 ; j < dfstree[i].size() ; ++j)
			if(I[dfstree[i][j]])	co++;		
		if(co > 1)	re2++;
	}
	cout << re1 << " " << re2 << endl;
	return 0;
}