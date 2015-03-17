/* bhupkas */

#include "bits/stdc++.h"

using namespace std;


int read () {
	bool minus = false;
	int result = 0;
	char ch;
	ch = getchar();
	while (true) {
		if (ch == '-') break;
		if (ch >= '0' && ch <= '9') break;
		ch = getchar();
	}
	if (ch == '-') minus = true; else result = ch-'0';
	while (true) {
		ch = getchar();
		if (ch < '0' || ch > '9') break;
		result = result*10 + (ch - '0');
	}
	if (minus)
		return -result;
	else
		return result;
}

int a[25],b[25],c[25];

bool visi[20];

int A[25],B[25],C[25];
typedef long long LL;

int n,m,k;

int dfn;
int DFN[20];
int HIGH[20];
int PARENT[20];

bool bri;

vector < int > com[23];
typedef struct node Node;


vector < int > adj[20];

void dfs1(int vertex)
{
	visi[vertex]=true;
	HIGH[vertex] = DFN[vertex] = dfn++;
	for(int i = 0; i < adj[vertex].size() ; i++)
	{
		if(!visi[adj[vertex][i]])	
		{
			PARENT[adj[vertex][i]]=vertex;
			dfs1(adj[vertex][i]);
			HIGH[vertex]=min(HIGH[vertex],HIGH[adj[vertex][i]]);
			if(HIGH[adj[vertex][i]]>DFN[vertex])	
			{
				bri = true;
				return ;
			}
		}	
		if(visi[adj[vertex][i]] && PARENT[vertex]!=adj[vertex][i])		HIGH[vertex]=min(HIGH[vertex],DFN[adj[vertex][i]]);
	}
}

LL fun(int mask)
{
	bri = false;
	for(int i = 0 ; i < n ; i++)	adj[i].clear();
	for(int i = 0 ; i < m ; i++)
	{
		if((1<<i) & mask)	
		{
			adj[a[i]].push_back(b[i]);
			adj[b[i]].push_back(a[i]);
		}
	}
	memset(visi,false,sizeof(visi));
	dfn = 0;
	for(int i = 0 ; i < n ; i++)	PARENT[i] = i;
	dfs1(0);
	for(int i = 0 ; i < n ; i++)	if(!visi[i])	return (LL)(-1);
	if(bri)	return (LL)(-1);
	LL re = 0;
	for(int i = 0 ; i < m ; i++)	if((1<<i) & mask)	re += (LL)(c[i]);
	return re;	
}

int main()
{	
	int cnt = 1;
	ios_base::sync_with_stdio(0);
	while(1)
	{
		n = read();
		m = read();
		if(n == 0 && m == 0)	break;
		for(int i = 0 ; i < m ; i++)	
		{
			a[i] = read();
			b[i] = read();
			c[i] = read();
			a[i]--;
			b[i]--;
		}
		if(m < n-1)
		{
			printf("There is no reliable net possible for test case %d.\n",cnt++);
			continue;
		}
		
		long long re = 10000000000000000LL;
		int cnt1 = 0;
		for(int mask = (1<<(n-1)) ; mask < (1<<m) ; mask++)
		{
			LL num = fun(mask);
			if(num != -1)	re = min(re,num);	
		}
		if(re == 10000000000000000LL)
		{
			printf("There is no reliable net possible for test case %d.\n",cnt++);
		}
		else
		{
			printf("The minimal cost for test case %d is %lld.\n",cnt++,re);			
		}
	}
	return 0;
}
