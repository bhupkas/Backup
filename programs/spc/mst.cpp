#define _CRT_SECURE_NO_WARNINGS
#pragma comment(linker, "/stack:16777216")
#include <string>
#include <vector>
#include <map>
#include <list>
#include <iterator>
#include <set>
#include <queue>
#include <iostream>
#include <sstream>
#include <stack>
#include <deque>
#include <cmath>
#include <memory.h>
#include <cstdlib>
#include <cstdio>
#include <cctype>
#include <algorithm>
#include <utility>
using namespace std;

#define FOR(i, a, b) for(int i = (a); i < (b); ++i)
#define RFOR(i, b, a) for(int i = (b) - 1; i >= (a); --i)
#define REP(i, N) FOR(i, 0, N)
#define RREP(i, N) RFOR(i, N, 0)
#define FILL(A,value) memset(A,value,sizeof(A))

#define ALL(V) V.begin(), V.end()
#define SZ(V) (int)V.size()
#define PB push_back
#define MP make_pair
#define Pi 3.14159265358979
#define maxn 100000

typedef long long Int;
typedef unsigned long long UInt;
typedef vector <int> VI;
typedef pair <int, int> PII;

const Int INF =  1000000000000000001LL;

int parent[maxn + 5];
int rank[maxn + 5];

typedef struct edge 
{
	int x , y , cost;
} edge;

edge createEdge (int x , int y , int c)
{
	edge E;
	E.x = x;
	E.y = y;
	E.cost = c;
	
	return E;
}

bool cmp (edge a , edge b)
{
	return a.cost < b.cost;
}

void createSet (int n)
{
	for (int i = 0; i < n; i++)
	{
		parent[i] = i;
		rank[i] = 0;
	}
}

int findSet (int x)
{
	if (x != parent[x]) return parent[x] = findSet(parent[x]);
	return parent[x];
}

void mergeSet (int x, int y)
{
	int px = findSet(x);
	int py = findSet(y);
	
 	if (rank[px] > rank[py]) parent[py] = px;
 	else parent[px] = py;
 	
 	if (rank[px] == rank[py]) rank[py] = rank[py] + 1;
}

int findLog (Int n)
{
	Int temp = 1;
	int ans = 0;
	while (temp != n)
	{
		temp *= 2;
		ans ++;
	}
	return ans;
}

int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		int n , m;
		cin >> n >> m;
		
		vector<edge> E;
		
		REP (i , m)
		{
			int a , b;
			Int c;
			cin >> a >> b >> c;
			a -- , b --;
			E.push_back(createEdge (a , b , findLog(c)));
		}
		
		createSet (n);
		
		int ans = 0;
		
		REP (i , m)
		{	
			edge e = E[i];
			int u = e.x , v = e.y;
			int cost = e.cost;
			
			if (findSet(u) != findSet(v))
			{
				ans += cost;
				mergeSet(u  , v);
			}
		}
			
			
		cout << ans << endl;
	}	

	return 0;
}
