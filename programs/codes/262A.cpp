#include"stdio.h"
using namespace std;
int k;
bool len(int a)
	{
		int a1=a,count=0,l=0,i;
		while(a!=0)	
		{
			l++;
			a/=10;
		}
		for(i=0;i<l;i++)
			{
				if(a1%10==4||a1%10==7)	count++;
				a1/=10;
			}
		if(count<=k)	return true;
		return false;
	}
int main()
	{
		int ans=0,count=0,n,A[200],i;
		scanf("%d %d",&n,&k);
		for(i=0;i<n;i++)	scanf("%d",&A[i]);
		for(i=0;i<n;i++)	if(len(A[i]))	ans++;
		printf("%d\n",ans );
		return 0;

	}