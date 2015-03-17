#include"stdio.h"
using namespace std;
typedef long long int ll;
int main()
	{
		ll n,p,x;
		scanf("%lld %lld",&n,&p);
		if(n>=4)	{printf("Impossible\n");}
		else if(n==1)	{printf("%lld\n",(2+p)%p);}
		else if(n==2)	{printf("%lld\n",(3+p)%p);}
		else printf("%lld\n",(7+p)%p);
		return 0;
	}