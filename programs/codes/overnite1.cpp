#include"stdio.h"
#include"iostream"
#include"math.h"
#include"string.h"
#include"string"
#include"vector"
#include"map"
#include"set"
#include"algorithm"
typedef long long int LL;
#define SI(n)	scanf("%d",&n)
#define SLL(n)	scanf("%lld",&n)
#define FOR(i,a,b)	for(i=a;i<b;i++)
using namespace std;
int main()
	{
		int t,n,i,j;
		LL T[10009];
		LL 	A1[10009],A[10009],S[10009];
		FOR(i,0,10009) 	T[i]=i;
		FOR(i,0,10009)	S[i]=A1[i]=A[i]=0;
		FOR(i,2,10009)
			if(T[i]==i)
				for(j=i;j<=10009;j+=i)	T[j] = (T[j]/i)*(i-1);
		FOR(i,1,10009)	A1[i]=T[i]*T[i];
		FOR(i,1,10009)
			{
				FOR(j,1,i)
					A[i]=A[i]+2*T[i]*T[j];
			}
		S[1]=A1[1];
		FOR(i,1,10009)	A[i]=A[i]+A1[i];
		FOR(i,0,10009)	S[i]=A[i];
		FOR(i,2,10009)	S[i]=S[i]+S[i-1];
		SI(t);
		FOR(i,1,11)	printf("%lld\n",S[i] );
		while(t--)
			{
				SI(n);
				printf("%lld\n",S[n]);
			}
		return 0;
	}