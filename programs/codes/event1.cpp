#include<cstdio>
using namespace std;
typedef long long int ll;
#define BUF 4096 // block size on my disk is 4KBs
char ibuf[BUF];
int  ipt = BUF;
int  read() {
while (ipt < BUF && ibuf[ipt] < '0') ipt++;
if (ipt == BUF) {
    fread(ibuf, 1, BUF, stdin);
    ipt = 0;
    while (ipt < BUF && ibuf[ipt] < '0') ipt++;
}
int  n = 0;
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
	int A[49][49],c,t,n,u,v,i,j,temp,max[49];
	t=read();
	while(t--)
		{
		for(i=0;i<49;i++)
			{
			max[i]=0;
			for(j=0;j<i;j++)
				A[j][i]=0;
			}
		n=read();
		while(n--)
			{
			u=read();v=read();c=read();
			if(c>A[u][v])
				A[u][v]=c;
			}
		for(j=0;j<49;j++)
			{
			for(i=0;i<j;i++)
				{
				if(A[i][j]+max[i]>max[j])	max[j]=A[i][j]+max[i];
				}
			}
		printf("%d\n",max[48]);
		}
	return 0;
	}
