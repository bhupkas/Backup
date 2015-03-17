#include<cstdio>
#include<cstdlib>
#include<vector>
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
	int c=0,len=0,B[33],temp,j,n,k,m,i,*M[100001],o;
	n=read();k=read();m=read();
	int N[k+1];
	vector<int> v;
	vector<int>::iterator it;
	for(i=0;i<n;i++)
		{
		temp=read();
		v.push_back(temp);
		}
	for(i=1;i<=k;i++)
		{
		temp=read();
		N[i]=temp;
		}
	for(i=0;i<100001;i++)
		M[i]=(int*)malloc(33*sizeof(int));
	for(i=0;i<33;i++)
		M[0][i]=0;
	for(i=1;i<100001;i++)
		M[i][0]=N[i];
	temp=m;
	while(temp)
		{
		temp/=2;
		c++;
		}
	for(i=1;i<c+1;i++)
		{
		for(j=1;j<=k;j++)
			{
			M[j][i]=M[M[j][i-1]][i-1];
			}
		}
	for(i=0;i<33;i++)
		B[i]=0;
	i=0;
	m--;
	while(m)
		{
		B[i]=m%2;
		m/=2;
		len++;
		i++;
		}
	for(it=v.begin();it!=v.end();it++)
		{
		o=*it;	
		for(i=len-1;i>=0;i--)
			{
			if(B[i])
				o=M[o][i];
			}
		printf("%d ",o);
		}
	printf("\n");
	return 0;
	}
