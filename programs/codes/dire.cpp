#include"stdio.h"
#include"string.h"
int main()
	{
		int t,n,i;
		char S1[45][52],S2[45][52];
		scanf("%d",&t);
		while(t--)
			{
				scanf("%d",&n);
				getchar();
				for(i=0;i<n;i++)
				{
					scanf("%s",S1[i]);
					getchar();getchar();getchar();getchar();
					gets(S2[i]);
				}
				printf("Begin on %s\n",S2[n-1]);
				for(i=n-1;i>=1;i--)
				{
					if(S1[i][0]=='R')	printf("Left on %s\n",S2[i-1]);
					else				printf("Right on %s\n",S2[i-1]);
				}
			printf("\n");
			}
		return 0;
	}