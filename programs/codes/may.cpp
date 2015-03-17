#include"stdio.h"
using namespace std;
#define Mod 10000007
typedef long long int LL;
LL F[10009];
void pre()
	{
		int m=Mod,i;
	    F[1] = 1;
	    for(int i = 2; i <= 10008; i++) {
	        F[i] = (-(m/i) * F[m % i]) % m + m;
	    }
	}
int mi(int a,int b)
	{
		if(a<b)	return a;
		return b;
	}
LL comb(int n,int r)
	{
		LL ans=1;
		int i,r1=r;
		r=mi(r1,n-r1);
		if(r==0)	return 1;
		for(i=1;i<=r;i++)
			{
				ans= (((ans*(n-r+i))%Mod)*F[i])%Mod;
			}
		return (ans+Mod)%Mod;
	}
int main()
	{
		int n,r,i;
			pre();
				scanf("%d %d",&n,&r);
				if(n<r)	{printf("-1\n");	return 0;}
				if(n==1 && r==1)	{printf("1\n");	return 0;}
				printf("%lld\n",comb(n-1,r-1) );
		return 0;
	}