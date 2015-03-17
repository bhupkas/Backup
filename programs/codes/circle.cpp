#include<cstdio>
#include<cstring>
typedef unsigned long long int ll;
ll A[100003],B[100003];
using namespace std;
int main()
	{
	ll t,i,n,sum,min;
	scanf("%llu",&t);
	while(t--)
		{
		min=0;
		sum=0;
		memset(A,0,sizeof(A));
		memset(B,0,sizeof(B));
		scanf("%llu",&n);
		for(i=0;i<n;i++)
			{
			scanf("%llu",&A[i]);
			sum+=A[i];
			B[i]=sum;
			}
		min=B[n-1]-A[0];
		for(i=1;i<n;i++)
			{
			if((B[i-1]+B[n-1]-A[i])<min)	min=B[i-1]+B[n-1]-A[i];
			}
		for(i=1;i<n;i++)
			{	
			if((2*(B[n-1]-B[i])+B[i-1])<min)	min=2*(B[n-1]-B[i])+B[i-1];
			}		
		printf("%llu\n",min);	
		}
	return 0;
	}
