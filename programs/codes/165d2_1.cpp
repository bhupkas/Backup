#include"stdio.h"
#include"iostream"
#include"algorithm"
#include"vector"
#include"set"
#include"map"
#include"math.h"
#include"string.h"
#include"string"
using namespace std;
#define FOR(i,a,b)	for(i=a;i<b;i++)
#define S(n)	scanf("%d",&n)
#define P(n)	printf("%d\n",n);	
int main()
	{
		int n,i,t;
		S(n);
		double d;
		FOR(i,0,n)
			{
				S(t);
				d=(double)(360)/(double)(180-t);
				if((int)d==d)	printf("YES\n");
				else			printf("NO\n");
			}
		return 0;
	}