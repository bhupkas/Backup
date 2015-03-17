/* bhupkas */

using namespace std;

#include "bits/stdc++.h"

typedef long long LL;

#define INF (LL)(1e18)

int FIN[5005] , DIS[5005] , Q[5005] ;
int TO[30005] , NEXT[30005] , FLOW[30005] , CAP[30005];

int n,m,ne;

void add(int u , int v, int c)
{
	TO[ne] = v ; NEXT[ne] = FIN[u] ; FLOW[ne] = 0 ; CAP[ne] = c ; FIN[u] = ne++;
	TO[ne] = u ; NEXT[ne] = FIN[v] ; FLOW[ne] = 0 ; CAP[ne] = c ; FIN[v] = ne++;
}

bool bfs()
{
	DIS[0] = 0;
	int st,en,curr,v;
	st = en = 0;
	Q[en++] = 0;
	for(int i = 0 ; i < n ; ++i)	DIS[i] = -1;
	while(st < en)
	{
		curr = Q[st++];
		for(int e = FIN[curr] ; e >= 0 ; e = NEXT[e])
		{
			v = TO[e];
			if(FLOW[e] < CAP[e] && DIS[v] == -1)
			{	
				DIS[v] = DIS[curr] + 1;
				Q[en++] = v;
			}
		}
	}
	return DIS[n-1] != -1;
}

LL dfs(int curr , LL val)
{
	if(curr == n - 1)	return val;
	for(int e = FIN[curr] ; e >= 0 ; e = NEXT[e])
	{
		int v = TO[e];
		if(FLOW[e] < CAP[e] && DIS[v] == DIS[curr] + 1)
		{
			LL df = dfs(v,min((LL)(CAP[e] - FLOW[e]) , val));
			if(df > 0)
			{
				FLOW[e] += df;
				FLOW[e^1] -= df;
				return df;
			}
		}
	}
	return 0;
}

int main()
{
	ne = 0;
	cin >> n >> m;
	int u,v,c;
	for(int i = 0 ; i < n ; ++i)	FIN[i] = -1;
	for(int i = 0 ; i < m ; ++i)
	{
		cin >> u >> v >> c;
		u--;
		v--;
		add(u,v,c);
	}
	LL re = 0LL;
	LL temp;
	while(bfs())
	{
		while(true)
		{
			temp = dfs(0,INF);
			if(temp > 0)	re += temp;
			else break;
		}
	}
	cout << re << endl;
	return 0;
}
