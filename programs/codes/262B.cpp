#include"stdio.h"
#include"vector"
#include"algorithm"
using namespace std;
int mo(int a)
	{
		if(a<0)	return -1*a;
		return a;
	}
bool f(int a,int b)
	{
		if(mo(a)<mo(b))	return true;
		return false;
	}
int main()
	{
		int j,sum=0,i,n,k,A[100005];
		scanf("%d %d",&n,&k);
		for(i=0;i<n;i++)	scanf("%d",&A[i]);
		sort(A,A+n,f);
		for(i=n-1;i>=0;i--)
		{
			if(k==0)	break;
			if(A[i]<0)	{A[i]=-1*A[i];	k--;}
			sum+=A[i];
		}
		for(j=i;j>=0;j--)
			sum+=A[j];
		if(k&1)	sum-=2*A[0];
		printf("%d\n",sum );
		return 0;
	}