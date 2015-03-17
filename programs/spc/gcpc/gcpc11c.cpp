//Test data is also there
#include <stdio.h>
#include <vector>
#include <queue>
#include <algorithm>
#include <iostream>

using namespace std;

#define MAXN 10010

vector< int > graph[MAXN];
bool vis[MAXN];
int order[MAXN];
int inde[MAXN];
int n, cnt;
queue<int> q;

bool bfs()
{
	bool cycle = false;
	bool multiple = false;
	int qx, nx;
	cnt=0;
	while(!q.empty())
	{
		if(q.size()>1)
			multiple = true;
		qx = q.front();
		q.pop();

		order[cnt++] = qx;

		for(int j=0;j<graph[qx].size(); j++)
		{
			nx = graph[qx][j];
			if(!vis[nx])
			{
				inde[nx]--;
				if(inde[nx]==0)
				{
					q.push(nx);
					vis[nx]= true;
				}
			}
		}
	}
	return multiple;
}

int main()
{
	int i, j, k, l, a, b, c, m, t, s, start, e;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d %d", &n, &m);
		for(i=0;i<MAXN;i++)
			graph[i].clear();
		for(i=0;i<MAXN;i++)
		{
			vis[i]=false;
			inde[i]=0;
		}

		while(!q.empty())
			q.pop();

		for(i=0;i<m;i++)
		{
			scanf("%d %d", &a, &b);
			a--, b--;
			graph[a].push_back(b);
			inde[b]++;
		}
		bool missing = false;
		bool recheck = false;
		for(i=0;i<n;i++)
		{
			//printf("%d ", inde[i]);
			if(inde[i]==0)
			{
				q.push(i);
				vis[i] = true;
			}
		}
		//printf("\n");
		if(q.empty())
		{
			printf("recheck hints\n");
			continue;
		}
	
		missing = bfs();
		if(cnt!=n)
			printf("recheck hints\n");
		else if(missing)
			printf("missing hints\n");
		else
		{
			for(j=0; j<n; j++)
				printf("%d ", order[j]+1);
			printf("\n");
		}
	}
	return 0;
}
