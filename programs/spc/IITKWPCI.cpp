/* bhupkas */

#include "iostream"
#include "stdio.h"
#include "vector"
#include "algorithm"
#include "assert.h"

using namespace std;

#define FOR(i,a,b)			for(i=a;i<b;i++)
#define vi 					vector<int>
#define PB					push_back
#define MAX    				1005
#define MP					make_pair
#define PP					pair<int,int>
#define VPP					vector<PP>

vi adj[MAX+5];
bool visited[MAX+5];
vi A;
vi temp1,temp2;

void dfs(int x)	
	{
		visited[x]=true;
		temp1.PB(A[x]);
		temp2.PB(x);
		int i;
		FOR(i,0,adj[x].size())
			if(!visited[adj[x][i]])	dfs(adj[x][i]);
	}

int main()
	{
		int t,i,j,x,y,n,k,m,te;
		cin>>t;
		assert(t<=10);
		while(t--)
			{
				A.clear();
				cin>>n>>m;
				assert(n<=1000 && n>=1);
				assert(m<=100000 && m<=(n*n-n)/2);
				FOR(i,0,n)	adj[i].clear(),visited[i]=false;
				FOR(i,0,n)		cin>>te,A.PB(te);
				FOR(i,0,m)
					{
						cin>>x>>y;
						x--;
						y--;
						adj[x].PB(y);
						adj[y].PB(x);
					}
				FOR(i,0,n)
					{
						if(!visited[i])
							{
								temp1.clear();
								temp2.clear();
								dfs(i);
								sort(temp1.begin(),temp1.end());
								sort(temp2.begin(),temp2.end());
								FOR(j,0,temp1.size())
									A[temp2[j]]=temp1[j];	
							}	
					}
				FOR(i,0,n)	cout<<A[i]<<" ";
				cout<<endl;
			}
		return 0;
	}