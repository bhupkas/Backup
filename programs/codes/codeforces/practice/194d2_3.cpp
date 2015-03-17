/* bhupkas */

#include "iostream"
#include "stdio.h"
#include "map"
#include "set"
#include "algorithm"
#include "vector"
#include "string"
#include "string.h"

using namespace std;

char A[55][55];
bool T[55][55];

int n,m;

#define FOR(i,a,b)	for(i=a;i<b;i++)

bool oo[55][55];

void dfs(int i,int j)
	{
		oo[i][j]=false;
		if(i<n-1 && oo[i+1][j])	dfs(i+1,j);
		if(j<m-1 && oo[i][j+1])	dfs(i,j+1);
		if(i>0 && oo[i-1][j])	dfs(i-1,j);
		if(j>0 && oo[i][j-1])	dfs(i,j-1);
	}

bool check()
	{
		int i,j,k=0,l;
		bool flag=false;
		FOR(i,0,n)	FOR(j,0,m)	oo[i][j]=T[i][j];
		FOR(i,0,n)
			{
				FOR(j,0,m)
					{
						if(oo[i][j])
							{
								k++;
								dfs(i,j);
							}
					}
			}
		return k>1;
	}

int main()
	{
		int l,i,j,k,co=0;
		cin>>n>>m;
		getchar();
		FOR(i,0,n)	scanf("%s",A[i]);
		FOR(i,0,n)
			FOR(j,0,m)
					{
						if(A[i][j]=='#')	
							{
								T[i][j]=true;
								co++;
							}	
						else	T[i][j]=false;
					}
		if(co<3)	cout<<"-1"<<endl;
		else
			{
				FOR(i,0,n)
					{
						FOR(j,0,m)
							{
								if(T[i][j])
									{
										T[i][j]=false;
										if(	check())	{cout<<"1"<<endl;	return 0;}
										T[i][j]=true;
									}
							}
					}
				cout<<"2"<<endl;
			}
		return 0;
	}