#include "bits/stdc++.h"

using namespace std;

int color[100000];

void dfs(int u)
{
	int curr = color[u],fi;
	if(curr == 1)	fi = 2;
	else		fi = 1;
	for(int i = 0 ; i < adj[u].size() ; i++)
	{
		if(color[adj[u][i]] == 0)	
		{
			color[adj[u][i]] = fi;
			dfs(adj[u][i]);
		}
		else if(color[adj[u][i]] == curr)	bip = false;
	}
}

int main()
{
	int 
	memset(color,0,sizeof(color));
	color[0] = 1;
	dfs(0);
	return 0;
}
