/* bhupkas */

using namespace std;

#include "bits/stdc++.h"

int color[505];

vector < int > adj[505];

bool bipartite;

int cnt1,cnt2;

void dfs(int u)
{
	int nx;
	if(color[u] == 1)	nx = 2;
	else	nx = 1;
	for(int i = 0 ; i < adj[u].size() ; ++i)
	{
		if(color[adj[u][i]] == 0)	
		{
			color[adj[u][i]] = nx;
			dfs(adj[u][i]);
		}
		else if(color[adj[u][i]] == color[u])	bipartite = false;
	}
}

int main()
{
	int t;
	cin >> t;
	int n;
	int p,num;
	for(int tc = 1 ; tc <= t ; tc++)
	{
		cin >> n;
		for(int i = 0 ; i < n ; ++i)	adj[i].clear() ,  color[i] = 0;
		for(int i = 0 ; i < n ; ++i)
		{
			cin >> p;
			for(int j = 0 ; j < p ; ++j)
			{
				cin >> num;
				num--;
				adj[i].push_back(num);
				adj[num].push_back(i);
			}
		}
		bipartite = true;
		cnt1 = 0;
		cnt2 = 0;
		for(int i = 0 ; i < n ; ++i)	
		{
			if(color[i] == 0)
			{
				color[i] = 1;
				dfs(i);
			}
		}
		cout << "Case " << tc << ": ";
		if(bipartite)
		{
			for(int i = 0 ; i < n ; ++i)	
			{
				if(color[i] == 1)	cnt1++;
				else	cnt2++;
			} 
			cout << "1 " << min(cnt1,cnt2) << " " << max(cnt1,cnt2) << endl;
		}
		else	puts("0 0 0");
	}
	return 0;
}