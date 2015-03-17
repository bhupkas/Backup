#include"stdio.h"
#include"iostream"
#include"vector"
#include"map"
#include"set"
#include"algorithm"
#include"string.h"
#include"string"
#include"math.h"
using namespace std;
#define S(n)	scanf("%d",&n);
#define P(n)	printf("%d\n",n);
#define FOR(i,a,b)	for(i=a;i<b;i++)
int mo(int a)
	{
		if(a<0)	return -1*a;
		return a;
	}
int mi(int a,int b)
	{
		if(a<b)	return a;
		return b;
	}
int ma(int a,int b)
	{
		if(a>b)	return a;
		return b;
	}
int main()
	{
		int n,sum=0,i,j,temp,h1,h2,A[100005];
		S(n);
		FOR(i,0,n)	S(A[i]);
		sum = A[0] + 1;
		FOR(i,0,n-1)
			{
				h1=A[i];h2=A[i+1];
				if(h2<=h1)
				{
					sum = sum+ h1-h2 + 1 + 1;
				}
				else
				{
					sum = sum  + 1+h2-h1 +1;
				}
			}
			P(sum);
		return 0;
	}