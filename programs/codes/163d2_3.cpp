#include"stdio.h"
#include"map"
#include"algorithm"
#include"set"
#include"string"
#include"string.h"
#include"math.h"
#include"vector"
using namespace std;
#define FOR(i,a,b)	for(i=a;i<b;i++)
#define S(n)	scanf("%d",&n);
#define P(n)	printf("%d",n);
int main()
	{
		int n,i,temp1,temp2,A[1005][1005];
		S(n);
		FOR(i,0,n)
			FOR(j,0,n)	
				A[i][j]=0;
		FOR(i,0,n-1)
			{
				S(temp1);S(temp2);
				A[temp1-1][temp2-1]=1;
			}
		return 0;
	}