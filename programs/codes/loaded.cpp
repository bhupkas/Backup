#include<cstdio>
using namespace std;
int main()
	{
	int t,n,i;
	long int temp,p,q;
	scanf("%d",&t);
	while(t--)
		{
		p=q=0;
		scanf("%d",&n);
		while(n--)
			{
			scanf("%ld",&temp);
			if(n&1)
				{
				if(temp>=0)	p+=temp;
				}			
			else
				if(temp<0)	q-=temp;
			
			}
		if(p>=q)	printf("Some Mirrors Lie\n");
		else		printf("Every Girl Lies!\n");
		}
	return 0;
	}
