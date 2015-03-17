/* bhupkas */

#include "iostream"
#include "stdio.h"

using namespace std;

#define FOR(i,a,b)		for(i=a;i<b;i++)


int n,m;
bool vi[105][105];
bool check(int x,int y)	{
	if(x>=0 && x<n && y>=0 && y<m)	return true;
	return false;
}

int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};

void dfs(int x,int y,int curr)	{
	vi[x][y]=true;
	int i,j,xk,yk;
	FOR(i,0,4)	{
		xk = (x+dx[(i+curr)%4]);
		yk = (y+dy[(i+curr)%4]);
		if(check(xk,yk) && !vi[xk][yk])	{
			dfs(xk,yk,(curr+i+1)%4);
			break;
		}
	}
}

int main()	{
	int i,j,t;
	cin>>t;
	while(t--)	{
		cin>>n>>m;
		int cnt=0;
		FOR(i,0,n)	FOR(j,0,m)	vi[i][j]=false;
		dfs(0,0,0);
		FOR(i,0,n)	FOR(j,0,m)	if(vi[i][j])		cnt++;
		cout<<cnt<<endl;	
	}
	return 0;
}