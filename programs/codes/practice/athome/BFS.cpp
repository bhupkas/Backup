/* bhupkas BFS */

#include"iostream"
#include"stdio.h"
#include"deque"
#include"vector"
using namespace std;
#define FOR(i,a,b)	for(i=a;i<b;i++)
typedef vector<int> vi;
#define MAX_SIZE 10000
#define INF 1e8
vi v[MAX_SIZE];
int DISTANCE[MAX_SIZE];
int main()
	{
		int vertex,te1,te2,n,m,i,j,source;
		deque<int> q;
		cin>>n>>m;
		FOR(i,0,m)
			{
				cin>>te1>>te2;
				v[te1].push_back(te2);
				v[te2].push_back(te1);
			}
		FOR(i,0,n)	DISTANCE[i]=INF;
		cin>>source;
		DISTANCE[source]=0;
		q.push_back(source);
		while(!q.empty())
			{
				vertex=q.front();
				q.pop_front();
				FOR(i,0,v[vertex].size())
					{
						if(DISTANCE[v[vertex][i]]==INF)	
							{
								DISTANCE[v[vertex][i]]=DISTANCE[vertex]+1;
								q.push_back(v[vertex][i]);
							}
					}
			}
		FOR(i,0,n)	cout<<DISTANCE[i]<<endl;
		return 0;
	}