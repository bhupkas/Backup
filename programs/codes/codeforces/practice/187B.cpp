/* bhupkas */
/* Floyd-Warshall */

#include "iostream"
#include "stdio.h"
#include "vector"
#include "algorithm"
#include "set"
#include "map"

using namespace std;

#define FOR(i,a,b)	for(i=a;i<b;i++)
#define LL long long
#define PB push_back
#define I insert

int n,m,r;
int A[61][61][61];
int B[61][61][61];
int main()
	{
		int ans,l,s,t,ch,i,j,k;
		cin>>n>>m>>r;
		FOR(i,0,n+1)
			{
				FOR(j,0,n)
					{
						FOR(k,0,n)
							{
								B[i][j][k]=1000000000;
							}
					}
			}
		FOR(i,0,m)
			{
				FOR(j,0,n)
					{
						FOR(k,0,n)
							{
								cin>>A[i][j][k];
							}
					}
			}
		FOR(i,0,m)
			{
				FOR(j,0,n)
					{
						FOR(k,0,n)
							{
								FOR(l,0,n)
									{
										A[i][k][l]=min(A[i][k][l],A[i][k][j]+A[i][j][l]);
									}
							}
					}
			}
		FOR(i,0,m)
			{
				FOR(j,0,n)
					{
						FOR(k,0,n)
							{
								B[0][j][k]=min(B[0][j][k],A[i][j][k]);
							}
					}
			}
		for(k=1;k<=n;k++)
			{
				FOR(i,0,n)
					{
						FOR(j,0,n)
							{
								FOR(l,0,n)
									{
										B[k][j][l]=min(B[k][j][l],min(B[k-1][j][l],B[k-1][j][i]+B[0][i][l]));
									}
							}
					}
			}
		while(r--)
			{
				cin>>s>>t>>ch;
				cout<<B[min(ch,n)][s-1][t-1]<<endl;
			}
		return 0;
	}