#include<cstdio>
#include<cstring>
using namespace std;
typedef long long int ll;
int main()
	{
	ll ansr=0,ansc=0,h,w,i,j,A[300][300],SR[300],SC[300],RC[300],CC[300],CH[300][300],maxr,maxc,r,c;
	for(i=0;i<300;i++)
		SR[i]=SC[i]=RC[i]=CC[i]=0;
	scanf("%lld %lld",&h,&w);
	for(i=0;i<h;i++)
		{
		for(j=0;j<w;j++)
			{
			scanf("%lld",&A[i][j]);		
			if(A[i][j]>0)	
				{
				CH[i][j]=1;
				RC[i]++;
				CC[j]++;
				}	
			else	CH[i][j]=0;
			}
		}
	maxr=RC[0];
	for(i=0;i<h;i++)
		{
		SR[i]=0;
		if(RC[i]>maxr)	{maxr=RC[i];	r=i;}
		}
	maxc=CC[0];
	for(j=0;j<w;j++)
		{
		SC[j]=0;
		if(CC[j]>maxc)	{maxc=CC[j];	c=j;}
		}
	if(maxr>maxc)
		{
		for(i=0;i<h;i++)
			for(j=0;j<w;j++)
				if(CH[r][j])	SR[i]+=A[i][j];
		for(i=0;i<h;i++)
			if(SR[i]>0)	ansr++;
		printf("%lld %lld\n",ansr,maxr);
		for(i=0;i<h;i++)
			if(SR[i]>0)	printf("%lld ",i);
		printf("\n");
		for(j=0;j<w;j++)
			if(CH[r][j])	printf("%lld ",j);
		printf("\n");
		}
	else
		{
		for(i=0;i<h;i++)
			for(j=0;j<w;j++)
				if(CH[i][c])	SC[j]+=A[i][j];
		for(j=0;j<w;j++)	
			if(SC[j]>0)	ansc++;
		printf("%lld %lld\n",maxc,ansc);
		for(i=0;i<h;i++)
			if(CH[i][c])	printf("%lld ",i);
		printf("\n");
		for(j=0;j<w;j++)
			if(SC[j]>0)	printf("%lld ",j);
		printf("\n");
		}
	return 0;
	}		
	
