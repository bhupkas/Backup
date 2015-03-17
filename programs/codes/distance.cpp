#include<iostream>
#include<cstdio>
#include<vector>
#include<queue>
using namespace std;
#define BUF 4096 // block size on my disk is 4KBs
char ibuf[BUF];
int ipt = BUF;
int read() {
while (ipt < BUF && ibuf[ipt] < '0') ipt++;
if (ipt == BUF) {
    fread(ibuf, 1, BUF, stdin);
    ipt = 0;
    while (ipt < BUF && ibuf[ipt] < '0') ipt++;
}
int n = 0;
while (ipt < BUF && ibuf[ipt] >= '0') n = (n*10)+(ibuf[ipt++]-'0');
if (ipt == BUF) {
    fread(ibuf, 1, BUF, stdin);
    ipt = 0;
    while (ipt < BUF && ibuf[ipt] >= '0') n = (n*10)+(ibuf[ipt++]-'0');
}
return n;
}
int main()
	{
	int j,ans,k,te,curr,n,m,f,u,v,i;
	scanf("%d",&n);	
	m=n-1;
	//n=read();m=read();
	vector<int> level[n];
	vector<int> adj[n];
	vector<int>::iterator it;
	for(i=0;i<m;i++)
		{
		scanf("%d %d",&u,&v);
		//u=read();v=read();
		u--;v--;
		adj[u].push_back(v);
		adj[v].push_back(u);
		}
	queue<int> q;
	int distance[n];
	for(i=0;i<n;i++)
		distance[i]=-1;
	q.push(0);
	distance[0]=0;
	level[0].push_back(0);
	while(!q.empty())
		{
		curr=q.front();
		q.pop();		
		for(it=adj[curr].begin();it!=adj[curr].end();it++)
			{
			if(distance[*it]==-1)
				{
				distance[*it]=distance[curr]+1;
				level[distance[*it]].push_back(*it);
				q.push(*it);
				}
			}
		}
	for(i=n-1;i>=0;i--)
		{
		if(!level[i].empty())	break;
		}
	for(j=i;j>=0;j--)
		{
		if(level[j].size()>1)	break;
		}
	if(j==-1)	j=0;
	for(k=j;k>=0;k--)
		{
		if(level[k].size()==1)	break;
		}
printf("%d\n",k);
	ans=i+j-2*k;
	printf("%d\n",ans);
	return 0;
	}
