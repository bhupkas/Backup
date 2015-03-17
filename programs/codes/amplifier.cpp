#include<cstdio>
#include<algorithm>
using namespace std;
bool f(int a,int b)
	{
	return b<a;
	}
int main()	
	{
	int temp,t,n,c1,c2,c3,i;
	int A[100001];
	scanf("%d",&t);
	while(t--)
		{
		c1=c2=c3=0;
		scanf("%d",&n);
		for(i=0;i<n;i++)
			{
			scanf("%d",&A[i]);	
			if(A[i]==1)	c1++;
			else if(A[i]==2)	c2++;
			else if(A[i]==3)	c3++;
			}
		sort(A,A+n,f);
		for(i=c1;i<n;i++)
			A[i]=A[i-c1];
		for(i=0;i<c1;i++)
			A[i]=1;			
		if(c2&&c3)
			{
			if(A[0]==3&&A[1]==2)
				printf("2 3 ");
			for(i=0;i<c2-1;i++)			
				printf("2 ");				
			}	
		else
			{
		for(i=0;i<n-c1;i++)
			printf("%d ",A[i]);
			}
		printf("\n");		
		}
	return 0;
	}
