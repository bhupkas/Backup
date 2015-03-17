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
int main()
	{
		int i,n;
		S(n);
		if(n==1||n==2)	{printf("-1\n");	return 0;}
		for(i=n;i>0;i--)
			printf("%d ",i);
		printf("\n");

		return 0;
	}