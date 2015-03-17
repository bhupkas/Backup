/* bhupkas */

#include "bits/stdc++.h"

using namespace std;

int main()
{
	int re = 0;
	int n,m;
	vector < int > adj[105];
	int u,v;
	cin >> n >> m;
	for(int i = 0 ; i < m ; i++)
	{
		cin >> u >> v;
		u-- , v--;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	deque < int > q;
	int deg[105];
	for(int i = 0 ; i < n ; i++)	deg[i] = adj[i].size();
	for(int i = 0 ; i < n ; i++)	if(deg[i] == 1)	q.push_back(i);
	while(!q.empty())
	{
		re++;
		int la = q[q.size() - 1];
		vector < int > v;
		while(!q.empty())	
		{
			int curr = q.front();
			for(int i = 0 ; i < adj[curr].size() ; i++)	
			{
				deg[adj[curr][i]]--;
				if(deg[adj[curr][i]] == 1)	v.push_back(adj[curr][i]);
			}
			q.pop_front();
		}
		for(int i = 0 ; i < v.size() ; i++)	if(deg[v[i]] == 1)	q.push_back(v[i]);
		v.clear();
	}
	cout << re << endl;
	return 0;
}
