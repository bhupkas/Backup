/* bhupkas */

#include "iostream"
#include "stdio.h"
#include "vector"
#include "map"
#include "set"
#include "algorithm"
#include "string.h"
#include "string"
#include "math.h"
#include "deque"

using namespace std;

#define PB 	push_back
#define I   insert
#define LL	long long 
#define so(v)	sort(v.begin(),v.end())
#define FOR(i,a,b)	for(i=a;i<b;i++)


void pre()
	{

	}

struct node
	{
		LL l;
		LL r;
		LL idx;
	};
typedef struct node Node;

vector<int> V[105];
Node N[105];
LL co;

void add(Node N1)
	{
		LL i,j,a,b,c,d;

		FOR(i,0,co-1)
			{
				a=N[i].l;
				b=N[i].r;
				c=N1.l;
				d=N1.r;
				if((a<d && a>c) || (b<d && b>c))	V[i].PB(N1.idx);
				a=N1.l;
				b=N1.r;
				c=N[i].l;
				d=N[i].r;
				if((a<d && a>c) || (b<d && b>c))	V[N1.idx].PB(i);
			}
	}

bool visited[106];

void dfs(int idx)
	{
		visited[idx]=true;
		LL i;
		for(i=0;i<V[idx].size();i++)
			{
				if(!visited[V[idx][i]])	dfs(V[idx][i]);
			}
	}

bool check(int idx1,int idx2)
	{
		LL i;
		FOR(i,0,105)	visited[i]=false;
		dfs(idx1);
		if(!visited[idx2])	return false;
		return true;
	}

int main()
	{
		LL x,y,t,i,j,n,k,m;
		cin>>n;
		while(n--)
			{	
				cin>>t>>x>>y;
				x--;
				y--;
				if(t==1)	
					{
						N[co].idx=co;
						N[co].l=x;
						N[co].r=y;
						co++;
						add(N[co-1]);
					}
				else
					{
						if(check(x,y))	cout<<"YES"<<endl;
						else	cout<<"NO"<<endl;
					}
			}
		pre();
		return 0;
	}