#include"stdio.h"
using namespace std;
int main()
{
	int t,n,i,j;
	int totient[10005];
	for(i=1;i<10005;i++) 	totient[i]=i;
	for(i=2;i<10005;i++)
	{
		if(totient[i]==i)
			for(j=i;j<10005;j+=i)
				totient[j] = (totient[j]/i)*(i-1);
	}
	long long int h;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		h=0;
		for( i=1;i<=n;i++)
		{
			h+=totient[i]*totient[i];
            for( j=i+1;j<=n;j++)	
                h+=2*totient[i]*totient[j];
        }
        printf("%lld\n",h);
	}
	return 0;
}