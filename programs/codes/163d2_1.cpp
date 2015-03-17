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
		int curr,count=0,n,i,temp;
		char S[55];
		S(n);
		getchar();
		scanf("%s",S);
		curr=0;
		FOR(i,0,n-1)
			{
				if(S[curr]==S[i+1])	{count++;}
				else				curr=i+1;
			}
		P(count);
		return 0;
	}