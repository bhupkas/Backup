#include"stdio.h"
#include"iostream"
#include"vector"
#include"algorithm"
#include"map"
#include"set"
#include"string.h"
#include"string"
#include"math.h"
using namespace std;
#define FOR(i,a,b)	for(i=a;i<b;i++)
#define S(n)	scanf("%d",&n);
#define P(n)	printf("%d\n",n);
bool BB[55][55];
void dfs(int i,int j)
	{
		BB[i][j]=false;
		if(BB[i+1][j])	dfs(i+1,j);
		if(BB[i][j+1])	dfs(i,j+1);
		if(BB[i-1][j])	dfs(i-1,j);
		if(BB[i][j-1])	dfs(i,j-1);
	}
int main()
	{
		char C[55][55];
		int n,m;
		int i,j;
		cin>>n>>m;
		getchar();
		FOR(i,0,n)
			{
				FOR(j,0,m)
					{
						C[i][j]=(char)getchar();
					}
				getchar();
			}
		int ini;
		FOR(i,0,n)
			{
				FOR(j,0,m)
					{
						if(C[i][j]=='B')	{ini=j;	break;}
					}
				FOR(j,ini+1,m)
					{
						if(C[i][j]=='B')
						{
							if(j-ini !=1 )
								{
									cout<<"NO"<<endl;	return 0;
								}
							else
								{
									ini=j;
								}
						}
					}
			}
		FOR(i,0,m)
			{
				FOR(j,0,n)
					{
						if(C[j][i]=='B')	{ini=j;	break;}
					}
				FOR(j,ini+1,n)
					{
						if(C[j][i]=='B')
						{
							if(j-ini !=1 )
								{
									cout<<"NO"<<endl;	return 0;
								}
							else
								{
									ini=j;
								}
						}
					}
			}

		FOR(i,0,n)	FOR(j,0,m)	BB[i][j]=false;
		FOR(i,0,n)
			{
				FOR(j,0,m)
					{
						if(C[i][j]=='B')	BB[i+1][j+1]=true;
					}
			}
		bool flag=false;
		FOR(i,0,n)
			{
				FOR(j,0,m)
					{
						if(BB[i+1][j+1])	{dfs(i+1,j+1);	flag=true;	break;}
					}
				if(flag)	break;
			}	
		FOR(i,0,n)
			{
				FOR(j,0,m)
					{
						if(BB[i+1][j+1])	{cout<<"NO"<<endl;	return 0;}
					}
			}
		cout<<"YES"<<endl;
		return 0;
	}