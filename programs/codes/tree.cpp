#include"stdio.h"
#include"vector"
#define mod 1000000007
using namespace std;
struct node
	{
		int vertex;
		int weight;
	};
typedef struct node Node;
int path;
vector<Node> g[100002];
void dfs(int vertex)
	{

	}
int main()
	{
		int n,i,v1,v2,w;
		Node N;
		scanf("%d",&n);
		for(i=0;i<n;i++)
			{
				scanf("%d %d %d",&v1,&v2,&w);
				N.vertex=v2;
				N.weight=w;
				g[v1].push_back(N);
				N.vertex=v1;
				g[v2].push_back(N);
			}
		path=0;
	}