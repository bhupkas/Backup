#include<iostream>
#include<cstdio>
#include<vector>
#include<queue>
using namespace std;
int main()
	{
	int curr,n,m,u,v,i;
	scanf("%d %d",&n,&m);
	vector<int> adj[n];
	vector<int>::iterator it;
	for(i=0;i<m;i++)
		{
		scanf("%d %d",&u,&v);
		u--;v--;
		adj[u].push_back(v);
		adj[v].push_back(u);
		}
	queue<int> q;
	int distance[n];
	for(i=0;i<n;i++)
		distance[i]=-1;
	q.push(0);
	distance[0]=0;
	while(!q.empty())
		{
		curr=q.front();
		q.pop();		
		for(it=adj[curr].begin();it!=adj[curr].end();it++)
			{
			if(distance[*it]==-1)
				{
				distance[*it]=distance[curr]+1;
				q.push(*it);
				}
			}
		}
	for(i=0;i<n;i++)
		if(distance[i]==-1)	break;
	if(i==n)	printf("YES\n");
	else		printf("NO\n");
	return 0;
	}


