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
int main()
	{
		int A[3][3],i;
		int j;
		bool B[5][5];
		FOR(i,0,3)	
			{
				FOR(j,0,3)	
					{
						S(A[i][j]);
					}
			}
		FOR(i,0,5)
			{
				FOR(j,0,5)
					B[i][j]=true;
			}
		FOR(i,0,3)
			{
				FOR(j,0,3)
					{
						if(A[i][j]&1)
							{
								B[i][j]=!B[i][j];
								B[i][j+1]=!B[i][j+1];
								B[i][j-1]=!B[i][j-1];
								B[i-1][j]=!B[i-1][j];
								B[i+1][j]=!B[i+1][j];
							}
					}
			}
		FOR(i,0,3)
			{
				FOR(j,0,3)
					{
						if(B[i][j])	cout<<"1";
						else		cout<<"0";
					}
				cout<<endl;
			}
		return 0;
	}