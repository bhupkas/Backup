#include"iostream"
#include"stdio.h"
#include"vector"
#include"algorithm"
#include"map"
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
		int n,m,k;
		n=read();m=read();k=read();
		int te1,te2,i;
		map<int,bool> my[n];
		for(i=0;i<m;i++)
			{
			te1=read();te2=read();
			if(te1==te2)	continue;
			my[te1][te2]=true;
			my[te2][te1]=true;
			}
		int ans=0;
		for(i=0;i<n;i++)
			if(my[i].size()>=k)	ans++;
		printf("%d\n",ans);
	return 0;
	}	
