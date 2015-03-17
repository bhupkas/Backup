#include"stdio.h"
#include"iostream"
using namespace std;
bool F[110][110];
char A[110][110];
bool visited[110][110];
void dfs(int i,int j)
	{
	visited[i][j]=true;
	if(!visited[i][j+1] && F[i][j+1])	dfs(i,j+1);
	if(!visited[i][j-1] && F[i][j-1])	dfs(i,j-1);
	if(!visited[i+1][j] && F[i+1][j])	dfs(i+1,j);
	if(!visited[i-1][j] && F[i-1][j])	dfs(i-1,j);
	if(!visited[i+1][j+1] && F[i+1][j+1])	dfs(i+1,j+1);
	if(!visited[i+1][j-1] && F[i+1][j-1])	dfs(i+1,j-1);
	if(!visited[i-1][j+1] && F[i-1][j+1])	dfs(i-1,j+1);
	if(!visited[i-1][j-1] && F[i-1][j-1])	dfs(i-1,j-1);
	}
int main()
	{
	int t,n,i,j,ans;
	cin>>t;
	while(t--)
		{
		cin>>n;
		getchar();
		for(i=0;i<=n+1;i++)
			for(j=0;j<=n+1;j++)	
				visited[i][j]=F[i][j]=false;
		for(i=0;i<n;i++)
			scanf("%s",A[i]);
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				if(A[i][j]=='S')	F[i+1][j+1]=true;
		ans=0;
		for(i=1;i<=n;i++)
			{
			for(j=1;j<=n;j++)
				{
				if(!visited[i][j] && F[i][j])	{dfs(i,j);	ans++;}
				}
			}
		if(ans&1)	cout<<"Alice"<<endl;
		else		cout<<"Bob"<<endl;
		}
	return 0;
	}
