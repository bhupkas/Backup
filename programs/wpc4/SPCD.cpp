/* bhupkas */

#include "bits/stdc++.h"

using namespace std;

#define NMAX 100005

typedef long long LL;

bool B[NMAX + 5];

vector < int > adj[NMAX + 5];

bool cmp( pair < int , pair < int , int > > p1 ,  pair < int , pair < int , int > > p2)
{	
	return p1.first < p2.first;
}

vector < pair < int , pair < int , int > > > edges;

int SIZE[NMAX + 5];
int PARENT[NMAX + 5];

int par(int a)
	{
		if(PARENT[a]==a)	return a;
		int p1;
		p1=par(PARENT[a]);
		PARENT[a]=p1;
		return p1;
	}
void uni(int a,int b)
	{
		int p1,p2;
		p1=par(a);
		p2=par(b);
		if(SIZE[p1]<SIZE[p2])
		{
			PARENT[p1]=p2;
			SIZE[p2]+=SIZE[p1];
			SIZE[p1]=0;
		}
		else
		{
			PARENT[p2]=p1;
			SIZE[p1]+=SIZE[p2];
			SIZE[p2]=0;	
		}
		if(B[p1] || B[p2])	
			B[p1] = B[p2] = true;
	}

int main()
{
	int t;
	cin >> t;
	int n,m;
	LL re = 0;
	while(t--)
	{	
		edges.clear();
		re = 0;
		memset(B,false,sizeof(B));
		int mil;
		cin >> n >> m;
		for(int i = 0 ; i < n ; i++)	adj[i].clear();
		for(int i = 0 ; i < n ; i++)
		{
			PARENT[i] = i;
			SIZE[i] = 1;
			cin >> mil;
			if(mil != 0)	B[i] = true;
		}
		for(int i = 0 ; i < m ; i++)
		{	
			int u,v,c;
			cin >> u >> v >> c;
			u--;
			v--;
			edges.push_back(make_pair(c,make_pair(u,v)));
		}
		sort(edges.begin(),edges.end(),cmp);
		for(int i = 0 ; i < m ; i++)
		{
			if(par(edges[i].second.first) == par(edges[i].second.second))	continue;
			if(!B[par(edges[i].second.first)] || !B[par(edges[i].second.second)])
			{
				uni(edges[i].second.first,edges[i].second.second);
				re += (LL)edges[i].first;
			}
		}
		bool foo = true;
		for(int i = 0 ; i < n ; i++)	
		{
			if(!B[par(i)])
			{
				foo = false;
				break;
			}
		}
		if(foo)	cout << re << endl;		
		else	cout << "impossible" << endl;
	}
	return 0;
}
