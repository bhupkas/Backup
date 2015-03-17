/* bhupkas */

#include "bits/stdc++.h"

using namespace std;

#define NMAX 5005
#define EMAX 30005
#define INF 1000000000

int PARENT[NMAX + 5];
int CAPACITY[NMAX + 5][NMAX + 5];
int flowcurr[NMAX + 5][NMAX + 5];
vector < int > adj[NMAX + 5];

int bfs(int start , int end)
{
	deque < int > q;
	q.push_back(start);
	int flow = INF;
	memset(PARENT,-1,sizeof(PARENT));
	while(!q.empty())
	{	
		int curr = q.front();
		q.pop_front();
		for(int i = 0 ; i < adj[curr].size() ; i++)
		{
			if(PARENT[adj[curr][i]] == -1 && CAPACITY[curr][adj[curr][i]] - flowcurr[curr][adj[curr][i]] > 0)
			{
				PARENT[adj[curr][i]] = curr;
				flow = min(flow , CAPACITY[curr][adj[curr][i]] - flowcurr[curr][adj[curr][i]]);
			}			
		}
	}
	return flow;	
}

int max_flow(int start,int end)
{
	int re = 0;
	//while(1)
	{
		int val = bfs(start,end);
		if(!val)	return re;
		re += val;
		int curr = end;
		while(1)
		{
			if(curr == start)	break;
			flowcurr[PARENT[curr]][curr] += val;
			flowcurr[curr][PARENT[curr]] -= val;
			curr = PARENT[curr];
		}
	}
}

int main()
{	
	int n,m;
	cin >> n >> m;
	int u,v,c;
	memset(CAPACITY,0,sizeof(CAPACITY));
	for(int i = 0 ; i < m ; i++)
	{
		cin >> u >> v >> c;
		u--;
		v--;
		if(u == v)	continue;
		adj[u].push_back(v);
		adj[v].push_back(u);
		CAPACITY[u][v] += c;
		CAPACITY[v][u] += c;
	}
	cout << max_flow(0,n-1) << endl;
	return 0;
}
