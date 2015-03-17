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

int dx[4][4];
int dy[4][4];

void pre()
	{
		int i,j;
		dx[0][0]=0;
		dy[0][0]=1;
		dx[0][1]=1;
		dy[0][1]=0;
		dx[0][2]=0;
		dy[0][2]=-1;
		dx[0][3]=-1;
		dy[0][3]=0;
		FOR(i,1,4)	{
			FOR(j,0,4)	{
				dx[i][j] = dx[(i+3)%4][(j+1)%4];
				dy[i][j] = dy[(i+3)%4][(j+1)%4];
			}
		}
	}

void dfs(int x,int y,int curr)	{
	vi[x][y]=true;
	int i,j,xk,yk;
	FOR(i,0,4)	{
		xk = (x+dx[curr][i]);
		yk = (y+dy[curr][i]);
		if(check(xk,yk) && !vi[xk][yk])	{
			dfs(xk,yk,(curr+i+1)%4);
			break;
		}
	}
}

int main()	{
	int i,j,t;
	pre();
	cin>>t;
	while(t--)	{
		int cnt=0;
		cin>>n>>m;
		FOR(i,0,n)	FOR(j,0,m)	vi[i][j]=false;
		dfs(0,0,0);
		FOR(i,0,n)	FOR(j,0,m)	if(vi[i][j])		cnt++;
		cout<<cnt<<endl;	
	}
	
	return 0;
}