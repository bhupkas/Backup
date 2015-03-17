#include<cstdio>
using namespace std;
int main()
	{
	int n,i,A[4][1000];
	A[0][0]=1;A[1][0]=1;A[2][0]=1;A[3][0]=3;
	i=1;
	while(A[3][i]<1000000000)
		{
		A[0][i]=A[0][i-1]+A[1][i-1];
		A[1][i]=A[0][i-1]+A[1][i-1]+A[2][i-1];
		A[2][i]=A[1][i-1]+A[2][i-1];
		A[3][i]=A[0][i]+A[1][i]+A[2][i];
		i++;
		}
	while((scanf("%d",&n))>0)
		printf("%d\n",A[3][n-1]);
	return 0;
	}
