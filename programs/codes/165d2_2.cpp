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
		int n,t,i,count=0,A[100005];
		S(n);
		bool flag=false;
		FOR(i,0,n)
			{
				S(A[i]);
			}
		i=n-1;
		while(A[i]>A[i-1])
			{
				if(i==1)	{P(0);	return 0;}
				i--;
			}
		P(i);
		return 0;
	}