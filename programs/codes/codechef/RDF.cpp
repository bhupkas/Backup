#include"stdio.h"
#include"iostream"
#include"vector"
#include"algorithm"
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
typedef double dd;
vector<dd> v[100001];
void pre()
	{
	int i,j;
	dd sum=0;
	sum=0;
	for(i=1;i<100001;i++)	
		{
		sum+=i;
		v[i].push_back(sum);
		}
	for(i=0;i<50;i++)	v[0].push_back(0);
	for(i=1;i<50;i++)
		{
		sum=0;
		for(j=1;j<100001;j++)
			{
			sum+=v[j-1][i-1]/j;
			v[j].push_back(sum);
			}
		}
	}
int main()
	{
	pre();
	int t,n,k;
	dd z=0;
	t=read();
	while(t--)
		{
		n=read();k=read();
		if(n==0)	{printf("%0.9lf\n",z);	continue;}
		if(k>=50)	{printf("%0.9lf\n",z);	continue;}
		printf("%0.9lf\n",v[n][k]-v[n-1][k]);
		}
 	return 0;
	}
