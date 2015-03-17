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
int gc(int a,int b)
	{
		if(b==0)	return a;
		return gc(b,a%b);
	}
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
		int max=-1,len=0,n,j,i,curr;
		int A[100005];
		S(n);
		FOR(i,0,n)	S(A[i]);
		bool K[100005];
		FOR(i,0,n)	K[i]=false;
		FOR(i,0,n)
			{
				if(K[i]==false)
					{
						len=1;
						curr=A[i];
						FOR(j,i+1,n)
							{
								if(gc(curr,A[j])!=1)
									{
										len++;
										K[curr]=true;
										curr=A[j];
									}
							}
						if(len>max)	max=len;
					}
			}
				P(max);
		return 0;
	}