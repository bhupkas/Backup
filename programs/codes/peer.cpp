#include<cstdio>
#include<vector>
#include<queue>
using namespace std;
typedef long long int ll;
void bfs(vector<ll> v[],ll i,bool visited[])
	{
	visited[i]=true;
	queue<ll> q;
	ll curr;
	vector<ll>::iterator it;
	q.push(i);
	while(!q.empty())
		{
		curr=q.front();
		q.pop();
		for(it=v[curr].begin();it!=v[curr].end();it++)	
			{
			if(!visited[*it])
				{
				visited[*it]=true;
				q.push(*it);
				}
			}
		}
	}
int main()	
	{
	ll t,i,n,m,t1,t2,count=0;
	scanf("%lld",&t);
	vector<ll>::iterator it;
	while(t--)
		{
		count=0;
		scanf("%lld %lld",&n,&m);
		vector<ll> v[100000];	
		bool visited[100000];
		for(i=0;i<100000;i++)
			visited[i]=false;
		for(i=0;i<m;i++)
			{
			scanf("%lld %lld",&t1,&t2);	
			v[t1].push_back(t2);
			v[t2].push_back(t1);	
			}
		for(i=0;i<n;i++)
			{
			for(it=v[i].begin();it!=v[i].end();it++);
			}
		while(true)
			{
			for(i=0;i<n;i++)
				if(!visited[i])	
					{
					bfs(v,i,visited);
					count++;
					}
			
			if(i==n)	break;
			}
		printf("%lld\n",count);	
		}
	return 0;
	}
