#include"stdio.h"
#include"string.h"
#include"vector"
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

int n;
int S[355][355];
bool N[355][355];
#define FOR(i,a,b)	for(i=a;i<b;i++)
bool P[10001000];
void pre()
	{
		int i,j;
		FOR(i,0,10001000)	P[i]=true;
		P[0]=P[1]=false;
		for(i=2;i*i<10001000;i++)
			{
				if(P[i])	
					{
						for(j=i;j<10001000/i;j++)
							P[i*j]=false;
					}
			}
	}
void grid_odd(int i,int j)
	{
		if((i!=0)&&(N[i-1][j]==false)&&(S[i-1][j]&1)&&(P[S[i-1][j]]==false))		{N[i-1][j]=true;	grid_odd(i-1,j);}
		if((i!=n-1)&&(N[i+1][j]==false)&&(S[i+1][j]&1)&&(P[S[i+1][j]]==false))		{N[i+1][j]=true;	grid_odd(i+1,j);}
		if((j!=0)&&(N[i][j-1]==false)&&(S[i][j-1]&1)&&(P[S[i][j-1]]==false))		{N[i][j-1]=true;	grid_odd(i,j-1);}
		if((j!=n-1)&&(N[i][j+1]==false)&&(S[i][j+1]&1)&&(P[S[i][j+1]]==false))		{N[i][j+1]=true;	grid_odd(i,j+1);}
	}
void grid_even(int i,int j)
	{
		if((i!=0)&&(N[i-1][j]==false)&&(S[i-1][j]%2==0)&&(P[S[i-1][j]]==false))		{N[i-1][j]=true;	grid_even(i-1,j);}
		if((i!=n-1)&&(N[i+1][j]==false)&&(S[i+1][j]%2==0)&&(P[S[i+1][j]]==false))		{N[i+1][j]=true;	grid_even(i+1,j);}
		if((j!=0)&&(N[i][j-1]==false)&&(S[i][j-1]%2==0)&&(P[S[i][j-1]]==false))		{N[i][j-1]=true;	grid_even(i,j-1);}
		if((j!=n-1)&&(N[i][j+1]==false)&&(S[i][j+1]%2==0)&&(P[S[i][j+1]]==false))		{N[i][j+1]=true;	grid_even(i,j+1);}	
	}
int main()
	{
		int prime=0,t,j,k,i,t1,t2;
		long long int ans;
		map<int,int> mymap;
		pre();
		FOR(i,2,10001000)
			{
				if(P[i])
					{
						mymap[i]=prime;
						prime++;
					}
			}
		t=read();
		while(t--)
			{
				ans=0;
				n=read();
				FOR(i,0,n)	FOR(j,0,n)	S[i][j]=read();
				FOR(i,0,n)	FOR(j,0,n)	N[i][j]=false;
				FOR(i,0,n)
					{
						FOR(j,0,n)
							{
								if(N[i][j]==true)	continue;
								N[i][j]=true;
								if(P[S[i][j]]==true)
								{
									ans+=mymap[S[i][j]];
								}
								else if(S[i][j]&1)
								{
									ans+=((S[i][j]+3)/2);
									grid_odd(i,j);

								}
								else
								{
									ans=ans+(S[i][j]/2);
									grid_even(i,j);
								}
								printf("%d %d %lld\n",i,j,ans);
							}
					}	
				printf("%lld\n",ans);
			}
		return 0;
	}