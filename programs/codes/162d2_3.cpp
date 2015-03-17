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
		char S[100],T[100];
		int n,i,j,temp=1;
		scanf("%s",S);
		char ch;
		getchar();
		scanf("%s",T);
		ch=S[0];
		for(i=0;i<(int)strlen(T);i++)
		{
			if(T[i]==ch)	{temp++;	ch=S[temp-1];}	
		}
		P(temp);
		return 0;
	}