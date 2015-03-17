#include<cstdio>
#include<vector>
using namespace std;
typedef long long int ll;
bool cycle=false;
void dfs(ll parent[],bool visited[],vector<ll> adj[],ll i)
	{
	visited[i]=true;
	vector<ll>::iterator it;
	for(it=adj[i].begin();it!=adj[i].end();it++)
		{
		if(!visited[*it])	
			{
			parent[*it]=i;
			dfs(parent,visited,adj,*it);
			}
		else
			{	
			if(parent[i]!=*it)	
				cycle=true;
			}
		}
	}
int main()
	{
	ll cc=0,u,v,i,n,m;
	scanf("%lld",&n);
	scanf("%lld",&m);	
	vector<ll> adj[n];
	for(i=0;i<m;i++)
		{
		scanf("%lld %lld",&u,&v);
		u--;v--;
		adj[u].push_back(v);
		adj[v].push_back(u);
		}
	bool visited[n];
	ll parent[n];
	for(i=0;i<n;i++)
		{
		visited[i]=false;
		parent[i]=-1;
		}
	for(i=0;i<n;i++)
		{
		if(!visited[i])	
			{
			dfs(parent,visited,adj,i);
			cc++;
			}
		}
	if(cc==1 && cycle==false)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
	}
