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
		int n,sum=0,i,t;
		S(n);
		for(i=0;i<n;i++)	{S(t);	sum+=t;}
		if(n==1)	{printf("1\n");	return 0;}
		if(sum%n==0)	{printf("%d\n",n);}
		else			printf("%d\n",n-1);
		return 0;
	}