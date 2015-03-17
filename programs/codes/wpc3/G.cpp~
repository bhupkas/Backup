/* bhupkas */

#include "bits/stdc++.h"

using namespace std;

typedef long long LL;

#define MOD (LL)(1e9 + 7)

LL modpow (LL a, LL b, LL mod)
{
    LL res = 1;
    while (b)
    {
        if (b & 1) res = (res * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }

    return res;
}

vector < int > adj[100005];

bool visi[100005];

int cnt ;
int co;
void dfs(int v)
{	
	co++;
	visi[v] = true;
	for(int i = 0 ; i < adj[v].size() ; i++)	if(!visi[adj[v][i]])	dfs(adj[v][i]);
}

int main()
{
	int n,m,u,v;
	int t;
	cin >> t;
	LL re;
	vector < LL > ans;
	while(t--)
	{
		ans.clear();
		re = 0;
		cnt = 0;
		scanf("%d %d",&n,&m);
		for(int i = 0 ; i < n ; i++)	adj[i].clear();
		memset(visi,false,sizeof(visi));
		for(int i = 0 ; i < m ; i++)	
		{
			scanf("%d %d",&u,&v);
			u--;
			v--;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		for(int i = 0 ; i < n ; i++)
		{
			if(!visi[i])	
			{
				co = 0;
				dfs(i);
				cnt++;
				ans.push_back((LL)co);
			}
		}
		LL tot = 1;
		if(ans.size() == 1)	
		{
			cout << -1 << endl;
			continue;
		}
		/*if(ans.size() == 2)	
		{
			cout << (ans[0] * ans[1]) %MOD << endl;
			continue;
		}*/
		LL sum = 0;
		for(int i = 0 ; i < ans.size() ; i++)	sum = (sum + ans[i])%MOD;
		re = modpow(sum,ans.size() - 2,MOD);
		for(int i = 0 ; i < ans.size() ; i++)	re = (re * ans[i])%MOD;
		cout << re << endl;
	}
	return 0;
}
