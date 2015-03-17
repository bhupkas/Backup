#include<cstdio>
using namespace std;
typedef long long int ll;
int main()
	{
	ll A[21],t,i,n;
	A[0]=0;
	A[1]=0;
	A[2]=1;
	for(i=3;i<21;i++)
		A[i]=(i-1)*(A[i-1]+A[i-2]);
	scanf("%lld",&t);
	while(t--)
		{
		scanf("%lld",&n);
		printf("%lld\n",A[n]);
		}
	return 0;
	}
