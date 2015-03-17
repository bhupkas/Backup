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
#define P(n)	printf("%d\n",n);
int main()
{
	int A[30],B[30],i,n,co=0,j;
	S(n);
	FOR(i,0,n)
		{
			S(A[i]);
			S(B[i]);
		}
	FOR(i,0,n)
		{
			FOR(j,0,n)
				{
					if(i==j)	continue;
					if(A[i]==B[j])	co++;
				}
		}
		P(co);
	return 0;
}