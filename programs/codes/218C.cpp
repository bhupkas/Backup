#include"stdio.h"
#include"vector"
#include"iostream"
using namespace std;
bool visited[101];
void dfs(int i,vector<int> v[])
	{
		visited[i]=true;
		for(int j=0;j<(int)v[i].size();j++)
		{
			if(!visited[v[i][j]])	dfs(v[i][j],v);
		}
		return;
	}
int main()
	{
		int n;
		vector<int> v[101];
		int i;
		for(i=0;i<101;i++)	visited[i]=false;
		int H[1001],V[1001];
		for(i=0;i<1001;i++)	H[i]=V[i]=-1;
		cin>>n;
		int x,y;
		for(i=0;i<n;i++)
		{	
			cin>>x>>y;
			if(H[y]==-1&&V[x]==-1)
			{
				H[y]=i;
				V[x]=i;
			}
			else if(H[y]!=-1 && V[x]==-1)
			{
				v[H[y]].push_back(i);
				v[i].push_back(H[y]);
				V[x]=i;
			}
			else if(V[x]!=-1 && H[y]==-1)
			{
				v[V[x]].push_back(i);
				v[i].push_back(V[x]);
				H[y]=i;
			}
			else
			{
				v[H[y]].push_back(i);
				v[i].push_back(H[y]);
				v[V[x]].push_back(i);
				v[i].push_back(V[x]);

			}
		}
		int count=0;
		for(i=0;i<n;i++)
		{
			if(!visited[i])
			{
				dfs(i,v);
				count++;
			}
		}
		cout<<count-1<<endl;
		return 0;
	}