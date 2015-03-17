#include"stdio.h"
#include"vector"
#include"map"
#include"set"
#include"string"
#include"string.h"
#include"math.h"
using namespace std;
#define S(n)	scanf("%d",&n);
#define FOR(i,a,b)	for(i=a;i<b;i++)
int mo(int a)
	{
		if(a<0)	return -1*a;
		return a;
	}
int main()
	{
		int n,i,A[5][5],j,ans,i1,j1;
		FOR(i,0,5)
			{
				FOR(j,0,5)
					{
						S(A[i][j]);
						if(A[i][j])	{i1=i;j1=j;}
					}
			}
		printf("%d\n",(mo(i1-2)+mo(j1-2)));
		return 0;
	}