#include<cstdio>
using namespace std;
int main()
	{
	int j,n,k,i,max,l,flag;
	int A[1001],B[1001];
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
		{
		B[i]=0;
		scanf("%d",&A[i]);
		}
	B[n]=0;
	for(i=0;i<n;i++)
		{
		if(i==k)	break;
		max=A[i];
		flag=i;
		for(j=0;j<n;j++)
			{
			if(A[j]>max)	{max=A[j];	flag=j;}	
			}	
		A[flag]=-1;
		B[flag]=1;
		}
		printf("%d\n",max);
		for(i=0;i<=n;i++)
			if(B[i])	printf("%d ",i+1);		
		printf("\n");
	return 0;
	}
	
