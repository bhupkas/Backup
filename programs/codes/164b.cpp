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
	int n,ans=0,i=1;
	S(n);
	if(n==1)	{printf("1\n");	return 0;}
	while((n-i) != 0)
	{
		ans += ((n-i)*i +1);
		i++;
	}
	ans++;
	P(ans);
	return 0;
}