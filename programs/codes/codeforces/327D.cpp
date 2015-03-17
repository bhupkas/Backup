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

#define FOR(i,a,b)	for(i=a;i<b;i++)
#define LL			long long 
#define PB			push_back
#define PP			pair<int,int>
#define PPL			pair<LL,LL>
#define vi			vector<int>
#define vll			vector<LL>
#define I 			insert
#define so(v)		sort(v.begin(),v.end())
#define MOD			(LL)(1e9+7)
#define MP 			make_pair

LL n,ans=0,co=0,cnt=0,k,te,m;

char S[505][505];
int A[505][505];

void pre()
	{

	}

bool check(LL i,LL j)
	{
		if(i>=0 && i<n &&j>=0 && j<m)	return true;
		return false;
	}

LL dx[]={1,0,-1,0};
LL dy[]={0,-1,0,1};

vector<char> ansch;
vector<PPL> anspp;

bool visited[505][505];

void dfs(LL x,LL y)
	{
		LL i,j;
		visited[x][y]=true;
		ansch.PB('B');
		anspp.PB(MP(x+1,y+1));
		FOR(i,0,4)
			{
				if(check(x+dx[i],y+dy[i]) && !visited[x+dx[i]][y+dy[i]] && S[x+dx[i]][y+dy[i]]=='.')
					{
						dfs(x+dx[i],y+dy[i]);
						ansch.PB('D');
						anspp.PB(MP(x+dx[i]+1,y+dy[i]+1));
						ansch.PB('R');
						anspp.PB(MP(x+dx[i]+1,y+dy[i]+1));
					}
			}
	}

int main()
	{
		pre();
		LL i,j;
		vll v;
		cin>>n>>m;
		FOR(i,0,n)
			{
				getchar();
				scanf("%s",S[i]);
			}
		FOR(i,0,n)	FOR(j,0,m)	visited[i][j]=false;
		FOR(i,0,n)
			{
				FOR(j,0,m)
					{
						if(S[i][j]=='.' && !visited[i][j])	dfs(i,j);
					}
			}
		cout<<ansch.size()<<endl;
		FOR(i,0,ansch.size())
			cout<<ansch[i]<<" "<<anspp[i].first<<" "<<anspp[i].second<<endl;
		string str;
	}