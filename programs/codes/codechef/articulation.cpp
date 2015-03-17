#include"iostream"
#include"stdio.h"
#include"algorithm"
#include"vector"
#define inf (int)1e8
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
int DFN[3002];
bool VISITED[3002];
bool AP[3002];
int dfn;
int HIGH[3002];
int PARENT[3002];
vector<int> v[3002];
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
int main()
	{
	int ans=0,t,i,j,n,m,k,te1,te2;
	t=read();
	while(t--)
		{
		ans=0;
		dfn=0;
		n=read();m=read();k=read();
		for(i=0;i<n;i++)	{DFN[i]=0;	VISITED[i]=AP[i]=false;	v[i].clear();}
		for(i=0;i<m;i++)
			{
			te1=read();te2=read();
			v[te1].push_back(te2);
			v[te2].push_back(te1);
			}
		dfs(0);
		AP[0]=false;
		int co=0;
		for(i=1;i<n;i++)
			if(PARENT[i]==0)	co++;
		if(co>1)	AP[0]=true;
		//for(i=0;i<n;i++)	if(AP[i])	{ans++;}
		//printf("%d\n",ans*k);
		for(i=0;i<n;i++)
			if(AP[i])	cout<<i<<endl;
		}
	}