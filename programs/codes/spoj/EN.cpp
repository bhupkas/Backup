/* bhupkas */
#include <vector>
#include <list>
#include <queue>
#include <map>
#include <set>
#include <stack>
#include <bitset>
#include <algorithm>
#include <sstream>
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

#define inf (int)1e8
using namespace std;
int DFN[30020];
bool VISITED[30020];
bool AP[30020];
int dfn;
int HIGH[30020];
int PARENT[30020];
vector<int> v[30020];
void dfs(int i)
	{
	HIGH[i]=DFN[i]=dfn++;
	VISITED[i]=true;
	int si,j;
	si=v[i].size();
	for(j=0;j<si;j++)
		{
		if(!VISITED[v[i][j]])	
			{
			PARENT[v[i][j]]=i;	dfs(v[i][j]);	HIGH[i]=min(HIGH[v[i][j]],HIGH[i]);	
			if(HIGH[v[i][j]] >= DFN[i]) AP[i]=true;
			}
		else if(PARENT[i]!=v[i][j])	HIGH[i]=min(HIGH[i],DFN[v[i][j]]);
		}
	}	
int dis1[30020],dis2[30020];
vector < pair < int , int >  > ans;
int main()
	{
	int t,i,j,n,m,k,te1,te2;
	cin >> t;
	while(t--)
		{
		dfn=0;
		cin >> n >> m;
		for(i=0;i<n;i++)	{DFN[i]=0;	VISITED[i]=AP[i]=false;	v[i].clear();}
		for(i=0;i<m;i++)
			{
			cin >> te1 >> te2;
			te1--;
			te2--;
			v[te1].push_back(te2);
			v[te2].push_back(te1);
			}
		dfs(0);
		//for(int i = 0 ; i < n ; i++)	if(AP[i])	cout << i << endl;
		for(int i = 0 ; i < n ; i++)	dis1[i] = dis2[i] = inf;
		deque < int > q;
		dis1[0] = 0;
		q.push_back(0);
		while(!q.empty())
		{
			int curr = q.front();
			q.pop_front();
			for(int i = 0 ; i < v[curr].size() ; i++)
			{
				if(dis1[v[curr][i]] == inf)
				{
					dis1[v[curr][i]] = dis1[curr] + 1;
					q.push_back(v[curr][i]);
				}	
			}	
		}
		dis2[n-1] = 0;
		q.push_back(n-1);
		while(!q.empty())
		{
			int curr = q.front();
			q.pop_front();
			for(int i = 0 ; i < v[curr].size() ; i++)
			{
				if(dis2[v[curr][i]] == inf)
				{
					dis2[v[curr][i]] = dis2[curr] + 1;
					q.push_back(v[curr][i]);
				}	
			}	
		}
		ans.clear();
		for(int i = 1 ; i < n ; i++)	if(AP[i])	ans.push_back(make_pair(dis1[i],i));
		sort(ans.begin(),ans.end());
		bool ok = false;
		for(int i = 0 ; i < ans.size() ; i++)	
		{
			if(ans[i].first + dis2[ans[i].second] == dis1[n-1])	
			{
				cout << ans[i].second + 1 << endl;
				ok = true;
				break;
			}
		}
		if(!ok)	cout << n << endl;
		}
	}
