#include<cstdio>
#include<cstring>
typedef long long int ll;
ll A[300][300];
int main()	
	{
	ll ansc=0,max,i,h,w,j,C[300][300],S[300],ansr=0;
	scanf("%lld %lld",&h,&w);
	for(i=0;i<h;i++)
		{
		S[i]=0;
		for(j=0;j<w;j++)
			{
			C[i][j]=1;
			scanf("%lld",&A[i][j]);
			}		
		}
	for(i=0;i<h;i++)
		{
		for(j=0;j<w;j++)
			{	
			if(A[i][j]>0)
				S[i]+=A[i][j];
			else
				C[i][j]=0;
			}
		}
	for(i=0;i<h;i++)
		{
		if(S[i]>max)	{max=S[i];	ansr=i;}
		}
	for(j=0;j<w;j++)
		if(C[ansr][j])	ansc++;
	printf("1 %lld\n",ansc);
	printf("%lld\n",ansr);
	for(j=0;j<w;j++)
		if(C[ansr][j])	printf("%lld ",j);
	printf("\n");
	return 0;
	}
