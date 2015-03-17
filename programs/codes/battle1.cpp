#include<iostream>
#include<cstdio>
#include<map>
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
	int ans,t,n,m,i,V[101],vi,li;
	map<int,int> mymap;
	map<int,int>::iterator it;
	t=read();
	while(t--)
		{
		for(i=0;i<101;++i)	V[i]=0;
		ans=0;
		n=read();m=read(); 
		while(n--)
			{
			vi=read();li=read();
			if(V[li]==1)
				mymap[li]+=vi;
			else
			{
				mymap[li]=vi;
				V[li]=1;	
			}
			}
		while(m--)
			{
			vi=read();li=read();
			mymap[li]-=vi;	
			}
		for ( it=mymap.begin() ; it != mymap.end(); it++ )
			{
				if((*it).second<0)	ans-=(*it).second;
			}
		mymap.clear();
		printf("%d\n",ans);	
		}
	return 0;
	}
