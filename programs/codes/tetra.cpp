#include"stdio.h"
using namespace std;
#define BUF 4096 // block size on my disk is 4KBs
char ibuf[BUF];
long long int ipt = BUF;
long long int read() {
while (ipt < BUF && ibuf[ipt] < '0') ipt++;
if (ipt == BUF) {
    fread(ibuf, 1, BUF, stdin);
    ipt = 0;
    while (ipt < BUF && ibuf[ipt] < '0') ipt++;
}
long long int n = 0;
while (ipt < BUF && ibuf[ipt] >= '0') n = (n*10)+(ibuf[ipt++]-'0');
if (ipt == BUF) {
    fread(ibuf, 1, BUF, stdin);
    ipt = 0;
    while (ipt < BUF && ibuf[ipt] >= '0') n = (n*10)+(ibuf[ipt++]-'0');
}
return n;
}
#define mod 1000000007
#define FOR(i,a,b)	for(i=a;i<b;i++)
typedef long long int LL;
LL T[65][5][5];
void pre()
	{
		LL j,k,l,i,A[5][5],B[5][5];
		FOR(i,0,5)
			{
				FOR(j,0,5)
					{
						B[i][j]=0;T[0][i][j]=0;
						if(i==j)	A[i][j]=1;
						else		A[i][j]=0;
					}
			}
		FOR(i,0,5)	B[0][i]=1;
		FOR(i,1,5)	B[1][i]=1;
		FOR(i,2,5)	B[i][i-1]=1;	
		FOR(i,0,5)	FOR(j,0,5)	T[0][i][j]=B[i][j];
		FOR(k,1,65)
			{
				FOR(i,0,5)	FOR(j,0,5)	B[i][j]=T[k-1][i][j];
				FOR(i,0,5)	FOR(j,0,5)	T[k][i][j]=0;
				FOR(i,0,5)	FOR(j,0,5)	FOR(l,0,5)		T[k][i][j]=(T[k][i][j]+(B[i][l]*B[l][j])%mod)%mod;
			}
	}
LL F(LL a)
	{
		if(a==-1||a==0||a==1||a==2)	return 0;
		if(a==3)				return 1;
		if(a==4)				return 2;
		a-=4;
		LL ans=0,A[5][5],B[5][5],i,j,l,k=0;
		FOR(i,0,5)	
			{
				FOR(j,0,5)
					{
						if(i==j)	B[i][j]=1;
						else		B[i][j]=0;
					}
			}
		while(a)
			{
				if(a&1)
				{	
					FOR(i,0,5)	FOR(j,0,5)	A[i][j]=B[i][j];
					FOR(i,0,5)	FOR(j,0,5)	B[i][j]=0;
					FOR(i,0,5)	FOR(j,0,5)	FOR(l,0,5)		B[i][j]=(B[i][j]+(T[k][i][l]*A[l][j])%mod)%mod;
				}
				k++;
				a/=2;
			}
		ans=((((B[0][0]*2)%mod)%mod+B[0][1])%mod+B[0][2])%mod;
		return (ans+mod)%mod;
	}
int main()
	{
		LL t,n,m,i,j;
		pre();
		t=read();
		while(t--)
			{
				n=read();m=read();
				scanf("%lld %lld",&n,&m);
				printf("%lld\n",((F(m)-F(n-1)+mod)%mod));
			}
		return 0;
	}