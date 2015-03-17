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
#define maxn 1000000

typedef long long Int;
typedef unsigned long long UInt;
typedef vector <int> VI;
typedef pair <int, int> PII;

const Int INF =  1000000000000000001LL;
const int MAX = 100005;

int n;
int a[MAX];
int tree[3 * MAX];
int prime[maxn + 5];

void buildTree (int node ,int lo , int hi)
{
	if (lo == hi)
	{	
		if (prime[a[lo]])
			tree[node] = 1;
		else 
			tree[node] = 0;
	}
	else
	{
		int mid = (lo + hi) / 2;
		
		buildTree (2 * node , lo , mid);
		buildTree (2 * node + 1 , mid + 1 , hi);
		
		tree[node] = tree[2 * node] + tree[2 * node + 1];
	}
}

int query (int node , int lo , int hi , int qlo , int qhi)
{
	if (qhi < lo || qlo > hi)
		return 0;
	if (qlo <= lo && hi <= qhi)
		return tree[node];
	
	int mid = (lo + hi) / 2;
	int res1 = query (2 * node , lo , mid , qlo , qhi);
	int res2 = query (2 * node + 1 , mid + 1 , hi , qlo , qhi);
	
	return res1 + res2;
}

void update (int node , int lo , int hi , int index , int value)
{
	if (lo <= index && index <= hi)
	{
		if (lo == hi)
		{
			int wasPrime = false;
			if (prime[a[index]]) wasPrime = true;
			int isPrime = false;
			if (prime[value]) isPrime = true;
			a[index] = value;
			tree[node] += isPrime - wasPrime; 
		}
		else
		{
			int mid = (lo + hi) / 2;
			
			update (2 * node , lo , mid , index , value);
			update (2 * node + 1, mid + 1 , hi, index , value);
			
			tree[node] = tree[2 * node] + tree[2 * node + 1];		
		}
	}
}

void pre()
{
	for (int i = 2; i <= maxn; i++)
		prime[i] = true;
	
	for (int i = 2; i * i <= maxn; i++)
	{
		if (prime[i])
			for (int j = i * i; j <= maxn; j += i)
				prime[j] = false;
	}

}

int main()
{
	pre();

	int T;
	cin >> T;
	while (T--)
	{
		int Q;
		cin >> n >> Q;
		
		REP (i , n) cin >> a[i + 1];
		
		buildTree (1 , 1,  n);
		
		while (Q--)
		{
			int u , v;
			
			string s;			
			cin >> s >> u >> v;
			if (s[0] == 'q')
			{
				int res = query (1 , 1 , n , u , v);
				cout << res << endl;
			}
			else 
			{
				update (1 , 1 , n , u , v);
			}
		}
		
		
		memset (a , 0 , sizeof (a));
		
		memset (tree , 0 , sizeof (tree));
	}	

	return 0;
}
