#include<cstdio>
using namespace std;
int main()
	{
	int t,i,n,A[1000000];
	A[0]=1;A[1]=2;
	i=2;
	while(A[i]<1000000000)
		{
		A[i]=A[i-1]+A[i-2];
		i++;
		}
	scanf("%d",&t);	
	while(t--)
		{
		scanf("%d",&n);
		printf("%d\n",A[n]);
		}
	return 0;
	}
