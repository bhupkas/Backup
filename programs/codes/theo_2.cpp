#include<cstdio>
#include<vector>
#include<cstring>
#define MAX 100
int TED1[MAX],TED[MAX],LOW_POINT[MAX],S[MAX],E[MAX],PARENT[MAX];
int time,dfn=0;
int max(int a,int b)
	{
	if(a>b)	return a;
	return b;
	}
using namespace std;

void dfs(bool visited[],vector<int> vlist[],int i)
	{
	TED[i]=i;
	vector<int>::iterator j;
	visited[i]=true;
	S[i]=time;
	time++;
	for(j=vlist[i].begin();j!=vlist[i].end();j++)
		{
		if(!visited[(*j)])	
			{
			PARENT[*j]=i;
			dfs(visited,vlist,(*j));
			TED[i]=max(TED[i],TED[*j]);
			}
		}
	E[i]=time;
	time++;
	}
/*
void dfs2(vector<int> vlist[],bool visited[],int TED[],int i)
	{
	LOW_POINT[i]=i;
	vector<int>::iterator j;
	visited[i]=true;
	for(j=vlist[i].begin();j!=vlist[i].end();j++)
		{
		if(!visited[(*j)])	
			{
			dfs2(vlist,visited,TED,(*j));
			LOW_POINT[i]=max(LOW_POINT[i],LOW_POINT[*j]);
			}
		else if(PARENT[i]!=(*j))
			LOW_POINT[i]=max(LOW_POINT[i],TED[*j]);
		}
	}
*/
void dfs3(vector<int> vlist[],bool visited[],int TED[],int i)
	{
	dfn++;
	LOW_POINT[i]=i;
	printf("%d\n",i);
	TED1[i]=dfn+(E[i]-S[i])/2;
	vector<int>::iterator j;
	visited[i]=true;
	for(j=vlist[i].begin();j!=vlist[i].end();j++)
		{
		if(!visited[(*j)])	
			{
			dfs3(vlist,visited,TED,(*j));
			LOW_POINT[i]=max(LOW_POINT[i],LOW_POINT[*j]);
			}
		else if(PARENT[i]!=(*j))
			LOW_POINT[i]=max(LOW_POINT[i],TED[*j]);
		}
	}
int main()
	{	
	int n,m,i,u,v;
	time=0;
	bool visited[MAX];
	vector<int>  vlist[MAX];	
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
		{
		visited[i]=false;
		S[i]=E[i]=0;
		}	
	for(i=0;i<m;i++)
		{
		scanf("%d %d",&u,&v);
		u--;
		v--;
		vlist[u].push_back(v);
		vlist[v].push_back(u);
		}
		
	dfs(visited,vlist,0);
	/*
	PARENT[0]=1;
	for(i=0;i<n;i++)
		visited[i]=false;
	dfs2(vlist,visited,TED,0);
	for(i=0;i<n;i++)
		printf("%d\t %d\n",S[i],E[i]);
	for(i=0;i<n;i++)
		TED1[i]=S[i]+(E[i]-S[i])/2;
	for(i=0;i<n;i++)
		printf("%d %d\n",TED[i]+1,TED1[i]+1);
	*/	
	for(i=0;i<n;i++)
		visited[i]=false;
	dfs3(vlist,visited,TED,0);
	for(i=0;i<n;i++)
		printf("%d\t %d\n",TED[i],TED1[i]);
	return 0;
	}
