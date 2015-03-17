#include<cstdio>
using namespace std;
int f(int,int);
int w(int,int);
int ma(int a,int b)
	{
	if(a>b)	return a;
	else		return b;
	}
int main()
	{
	int ans,t,h,a;
	scanf("%d",&t);
	while(t--)	
		{
		ans=0;
		scanf("%d %d",&h,&a);
		ans=1+ma(w(h+3,a+2),f(h+3,a+2));
		printf("%d\n",ans);
		}
	return 0;
	}
int w(int h,int a)
	{
	if(h>5&&a>10)	return 2+ma(f(h-2,a-8),w(h-2,a-8));;	
	return 0;
	}
int f(int h,int a)
	{
	if(h>20)	return 2+ma(w(h-17,a+7),f(h-17,a+7));;	
	return 0;
	}
