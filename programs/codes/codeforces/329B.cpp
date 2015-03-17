/* bhupkas */

#include "iostream"
#include "stdio.h"
#include "string.h"
#include "string"
#include "algorithm"
#include "math.h"
#include "vector"
#include "set"
#include "map"
#include "deque"

using namespace std;

#define FOR(i,a,b)		for(i=a;i<b;i++)
#define LL			long long 
#define PB			push_back
#define PP			pair<int,int>
#define PPL			pair<LL,LL>
#define vi			vector<int>
#define vll			vector<LL>
#define I 			insert
#define so(v)			sort(v.begin(),v.end())
#define MOD			(LL)(1e9+7)
#define MP			make_pair

int n,ans=0,r,c,co=0,cnt=0,k,te,m;
char S[1005][1005];
bool visited[1005][1005];
int dis[1005][1005];
void pre()
	{
		LL i,j;
	}

bool check(int x,int y)
	{
		if(x>=0 && x<r &&y>=0 &&y<c)	return true;
		return false;
	}

int main()
	{	
		pre();
		int i,j;
		PP start,exit,curr;
		cin>>r>>c;
		getchar();
		FOR(i,0,r)
			{
				scanf("%s",S[i]);	
			}
		FOR(i,0,r)
			{
				FOR(j,0,c)	
					{
						dis[i][j]=100000000;
						if(S[i][j]=='S')	{start.first=i;	start.second=j;}
						if(S[i][j]=='E')		{exit.first=i;	exit.second=j;}
					}
			}
		FOR(i,0,r)
			FOR(j,0,c)
				visited[i][j]=false;
		dis[exit.first][exit.second]=0;
		deque<PP> q;	
		q.PB(MP(exit.first,exit.second));
		curr.first=q.front().first;
		curr.second=q.front().second;
		visited[curr.first][curr.second]=true;
		while(!q.empty())
			{
				curr.first=q.front().first;
				curr.second=q.front().second;
				q.pop_front();
				if(check(curr.first+1,curr.second) && S[curr.first+1][curr.second]!='T' && !visited[curr.first+1][curr.second])
					{
						dis[curr.first+1][curr.second]=dis[curr.first][curr.second]+1;
						q.PB(MP(curr.first+1,curr.second));
						visited[curr.first+1][curr.second]=true;
					}
				if(check(curr.first,curr.second+1) && S[curr.first][curr.second+1]!='T' && !visited[curr.first][curr.second+1])
					{
						dis[curr.first][curr.second+1]=dis[curr.first][curr.second]+1;
						q.PB(MP(curr.first,curr.second+1));
						visited[curr.first][curr.second+1]=true;
					}
				if(check(curr.first-1,curr.second) && S[curr.first-1][curr.second]!='T' && !visited[curr.first-1][curr.second])
					{
						dis[curr.first-1][curr.second]=dis[curr.first][curr.second]+1;
						q.PB(MP(curr.first-1,curr.second));
						visited[curr.first-1][curr.second]=true;
					}
				if(check(curr.first,curr.second-1) && S[curr.first][curr.second-1]!='T' && !visited[curr.first][curr.second-1])
					{
						dis[curr.first][curr.second-1]=dis[curr.first][curr.second]+1;
						q.PB(MP(curr.first,curr.second-1));
						visited[curr.first][curr.second-1]=true;
					}
			}
		te=dis[start.first][start.second];
		FOR(i,0,r)
			{
				FOR(j,0,c)
					{
						if(S[i][j]!='T' && S[i][j]!='E' && S[i][j]!='S' && dis[i][j]<=te)	ans+=(S[i][j]-'0');
							
					}
			}
		cout<<ans<<endl;
		return 0;
	}
