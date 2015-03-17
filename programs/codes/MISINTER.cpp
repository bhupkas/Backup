#include"stdio.h"
#include"vector"
#include"string.h"
#include"string"
#include"map"
#include"algorithm"
#include"math.h"
using namespace std;
#define MOD (long long int)(1e9 + 7)
typedef long long int LL;
#define FOR(i,a,b)	for(i=a;i<b;i++)
#define SI(n)	scanf("%d",&n);
#define SLL(n)	scanf("%lld",&n);
#define PI(n)	printf("%d\n",n);
#define PLL(n)	printf("%lld\n",n);
bool A[100003];
LL po(int a)
	{
		if(a==0)	return 1;
		LL re=po(a/2)%MOD;
		if(a&1)	return (((26*re)%MOD)*re)%MOD;
		return (re*re)%MOD;
	}
int main()
	{
		LL ans;
		int count,t,i,j,n;
		SI(t);
		while(t--)
		{
			count=0;
			SI(n);
			FOR(i,0,n)	A[i]=false;
			FOR(i,0,n)
					if(A[i]==false)
					{
						//j=i;
						while(A[i]==false)
						{
							A[i]=true;
							if((2*i + 1) < n) 	i=2*i + 1;
							else				i=2*i - n;
						}
					printf("%d  %d\n",i,count );
					count++;
					}
			printf("%d\n",count );
			printf("%lld\n",po(count));
		}
		return 0;
	}