#include"stdio.h"
using namespace std;
typedef long long int LL;
LL comb(LL a,LL b)
	{
		LL i,j,b1,re=1;
		if(b==0||b==1)	return 1;
		if(b>a)	return 0;
		if(a==b)	return 1;
		if(b>(a-b))	b1=a-b;
		else		b1=b;
		for(i=b1-1;i>=0;i--)
				re=(re*(a-i))/(b1-i);
		return re;
	}
int main()
	{
		LL t,n,B,G,ans,gr;
		scanf("%lld",&n);
		printf("%lld\n",fact(n) );
		n=0;
		while(n--)
			{
				ans=0;
				scanf("%lld %lld %lld",&B,&G,&t);
				ans-=(comb(B,t)+B*(comb(G,4))+comb()
			}
		return 0;
	}