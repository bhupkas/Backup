/* bhupkas */

#include "iostream"
#include "stdio.h"
#include "set"
#include "map"
#include "vector"
#include "algorithm"
#include "string.h"
#include "string"

using namespace std;

#define FOR(i,a,b)	for(i=a;i<b;i++)
#define LL 	long long 
#define I   insert

char S[2][100005];
bool dp[2][200007];
int n,k;

bool ans;
int foo;

void fun(int wall,int pos,int water)
	{
		if(ans)	return;
		if(pos>n-1||pos+k>n-1)	{ans=true;	return;}
		dp[wall][pos]=true;
		if(wall==0)	foo=1;
		else		foo=0;
		if(S[foo][pos+k]=='-' && dp[foo][pos+k]==false)	fun(foo,pos+k,water+1);
		if(S[wall][pos+1]=='-' && dp[wall][pos+1]==false)						fun(wall,pos+1,water+1);
		if(S[wall][pos-1]=='-' && water<pos-2 && dp[wall][pos-1]==false)			fun(wall,pos-1,water+1);
		
	}

int main()	
	{
		ans=false;
		int i,j;
		scanf("%d %d",&n,&k);
		getchar();
		scanf("%s",S[0]);
		getchar();
		scanf("%s",S[1]);
		fun(0,0,-1);
		FOR(i,0,2)	FOR(j,0,n+k+10)	dp[i][j]=false;
		if(ans)	printf("YES\n");
		else	printf("NO\n");
		return 0;
	}