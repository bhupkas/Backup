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
int ma(int a,int b)
	{
		if(a>b)	return a;
		return b;
	}
int main()
	{
		int n,tem,i,che=0,bi=0,ba=0;
		S(n);
		FOR(i,0,n)
			{
				S(tem);
				if(i%3==0)	che+=tem;
				if(i%3==1)	bi+=tem;
				else		ba+=tem;
			}
		if((ma(ma(che,bi),ba))==che)	printf("chest\n");
	if((ma(ma(che,bi),ba))==bi)	printf("biceps\n");
	if((ma(ma(che,bi),ba))==ba)	printf("back\n");
		return 0;
	}