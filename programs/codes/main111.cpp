#include"stdio.h"
#include"math.h"
using namespace std;
bool P[100002],A[100002];
int po(int k)
	{
		if(k==0)	return 1;
		if(k==1)	return 10;
		if(k==2)	return 100;
		if(k==3)	return 1000;
		if(k==4)	return 10000;
		if(k==5)	return 100000;
	}
int num(int i,int j,int n)
	{
		int n1=n,le=0,k,o=0;
		while(n1)	{le++;	n1/=10;}
		for(k=le;k!=j;k--)	n/=10;
		return n%=(po(j-i+1));	
	}
bool check(int n)
	{
		int n1=n,le=0,i,j,k,l,m;
		while(n1)	{le++;	n1/=10;}
		if(le==1)	if(P[n])	return true;
		if(le==2)
			{
				if(P[num(1,1,n)])	return true;
				if(P[num(1,2,n)])	return true;
				if(P[num(2,2,n)])	return true;
			}
		if(le==3)
			{
				if(P[num(1,1,n)])	return true;
				if(P[num(2,2,n)])	return true;
				if(P[num(3,3,n)])	return true;
				if(P[num(1,2,n)])	return true;
				if(P[num(2,3,n)])	return true;
				if(P[num(1,3,n)])	return true;	
			}
		if(le==4)
			{
				for(i=1;i<=4;i++)
					for(j=i;j<=4;j++)
						if(P[num(i,j,n)])	return true;	
			}
		if(le==5)
			{
				for(i=1;i<=5;i++)
					for(j=i;j<=5;j++)
						if(P[num(i,j,n)])	return true;	
			}
	}
int main()
	{
		int a,b,t,sq,i,j,ans,S[100002],co=0;
		for(i=0;i<100002;i++)	A[i]=P[i]=true;
		P[0]=P[1]=false;
		A[0]=A[1]=true;
		sq=(int)sqrt(100002);
		for(i=2;i<=sq;i++)
		{
			if(P[i])
				for(j=i;j<=100002/i;j++)
					P[i*j]=false;
		}
		for(i=2;i<100002;i++)
				if(check(i))	A[i]=false;
		for(i=1;i<100002;i++)
		{
			if(A[i])	co++;
			S[i]=co;
		}
		scanf("%d",&t);
		while(t--)
		{
			ans=0;
			scanf("%d %d",&a,&b);
			printf("%d\n",S[b]-S[a-1] );
		}
		return 0;
	}