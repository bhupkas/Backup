#include<cstdio>
using namespace std;
int main()
	{
	int j,len,t,n,A[1000001],i,temp;
	scanf("%d",&t);
	while(t--)
		{
		scanf("%d",&n);
		for(i=0;i<n;i++)
			scanf("%d",&A[i]);
		for(i=n-1;i>=1;i--)
			{
			if(A[i]>A[i-1])
				{
				temp=A[i];
				A[i]=A[i-1];
				A[i-1]=temp;
				len=i;
				break;
				}
			}
		for(j=len;j<n-1;j++)
			{
			if(A[j]>A[j+1])	
				{
				temp=A[j];
				A[j]=A[j+1];
				A[j+1]=temp;
				}
			else	break;
			}
		if(!i)	printf("-1\n");
		else
			{
			for(i=0;i<n;i++)
				printf("%d",A[i]);
			printf("\n");
			}
		}
	return 0;
	}
