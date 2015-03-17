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
	int curr,n,m,u,v,i;
	scanf("%d %d",&n,&m);
	//n=read();m=read();
	vector<int> adj[n];
	vector<int>::iterator it;
	for(i=0;i<m;i++)
		{
		scanf("%d %d",&u,&v);
		//u=read();v=read();
		adj[u].push_back(v);
		adj[v].push_back(u);
		}
	queue<int> q;
	int distance[n];
	for(i=0;i<n;i++)
		distance[i]=-1;
	q.push(0);
	distance[0]=0;
	while(!q.empty())
		{
		curr=q.front();
		q.pop();		
		for(it=adj[curr].begin();it!=adj[curr].end();it++)
			{
			if(distance[*it]==-1)
				{
				distance[*it]=distance[curr]+1;
				q.push(*it);
				}
			}
		}
	for(i=0;i<n;i++)
		printf("%d ",distance[i]);
	printf("\n");
	return 0;
	}
