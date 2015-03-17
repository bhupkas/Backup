#include"stdio.h"
#include"vector"
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
		int i,j,k,l,q,n,a,flag;
		vector<int> A[100005];
		q=read();
		flag=0;
		for(i=0;;i++)
			{
				for(j=i;;j++)
				{
					for(k=j;;k++)
					{
						for(l=k;;l++)
						{
							if(i*i+j*j+k*k+l*l>100000)	{flag=1;	break;}
							if(!(A[i*i+j*j+k*k+l*l]).empty())	continue;
							A[i*i+j*j+k*k+l*l].push_back(i);
							A[i*i+j*j+k*k+l*l].push_back(j);
							A[i*i+j*j+k*k+l*l].push_back(k);
							A[i*i+j*j+k*k+l*l].push_back(l);
						}
						if(l==k)	break;
					}
					if(k==j)	break;
				}
				if(j==i)	break;
			}
		while(q--)
			{
				n=read();
				a=read();
				while(n>4)
				{
					printf("0 ");
					n--;
				}
				printf("%d %d %d %d\n",A[a][0],A[a][1],A[a][2],A[a][3]);
			}
		return 0;
	}