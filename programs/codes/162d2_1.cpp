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
		int n,i,j,temp,le,ri,lll;
		char S[1000005];
		scanf("%s",S);
		int A[1000005];
		le=0;ri=strlen(S)-1;
		lll=strlen(S);
		for(i=0;i<lll;i++)
			{
				if(S[i]=='l')	{A[ri]=i+1;	ri--;}
				else			{A[le]=i+1;	le++;}
			}
		FOR(i,0,lll)
			P(A[i]);
		return 0;
	}