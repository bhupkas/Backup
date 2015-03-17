#include<cstdio>
#include<vector>
using namespace std;
bool paradox;
void dfs(int i,bool visited[],bool given[],bool a,vector<int> adj[],bool find[])
	{
	if(paradox)	return;
	bool temp;
	visited[i]=true;
	vector<int>::iterator it;
	for(it=adj[i].begin();it!=adj[i].end();it++)
		{
		if(!visited[*it])	
			{
			if(a)	find[*it]=given[*it];
			else	find[*it]=!given[*it];
			dfs(*it,visited,given,find[*it],adj,find);			
			}
		else
			{
			if(a)	temp=given[*it];
			else	temp=!given[*it];
			if(temp!=find[*it])	{paradox=true;	return;}
			}
		}
	}
int main()
	{	
	int n,i,u,v;
	char S[10];
	vector<int> adj[101];
	bool given[101];
	bool find[101];
	bool visited[101];
	while(1)
		{
		paradox=false;
		scanf("%d",&n);
		if(!n)	return 0;
		if(n==1)	
			{
			getchar();
			gets(S);
			if(S[2]=='f')	printf("PARADOX\n");
			else		printf("NOT PARADOX\n");
			continue;
			}
		for(i=0;i<101;i++)
			{
			adj[i].clear();	
			visited[i]=false;
			}
		for(i=0;i<n;i++)	
			{
			scanf("%d",&v);	
			v--;
			adj[i].push_back(v);
			getchar();
			scanf("%s",S);
			if(S[0]=='f')	given[v]=false;
			else		given[v]=true;
			}
		for(i=0;i<n;i++)
			{
			if(!visited[i])	
				{
				find[i]=true;
				dfs(i,visited,given,true,adj,find);
				}
			}
		if(paradox)	printf("PARADOX\n");
		else		printf("NOT PARADOX\n");
		}
	return 0;
	}
