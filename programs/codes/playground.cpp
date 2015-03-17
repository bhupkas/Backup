#include<cstdio>
#include<cstring>
#include<algorithm>
typedef long long int ll;
using namespace std;
int main()
	{
	ll B[21],A[21],i,ans,j;
	int n;
	double d;
	scanf("%d",&n);
	while(n!=0)
		{
		if(n==1)	{printf("NO\n");	scanf("%lf",&d);	scanf("%d",&n);	continue;}
		memset(B,0,sizeof(B));
		for(i=0;i<n;i++)
			{
			ans=0;
			scanf("%lf",&d);
			A[i]=d*1000;
			}
		sort(A,A+n);
		if(n==2)	
			{
				if(A[0]==A[1])	{printf("YES\n");	scanf("%d",&n);	continue;}
				else		{printf("NO\n");	scanf("%d",&n);	continue;}
			}
		for(i=0;i<n;i++)
			B[i]=A[i];
		for(i=1;i<n;i++)
			B[i]+=B[i-1];
		for(i=1;i<n;i++)
			if(A[i]<=B[i-1])	break;
		if(i==n)
			printf("NO\n");
		else	
			printf("YES\n");
		scanf("%d",&n);		
		}
	return 0;
	}
