#include<cstdio>
#include<cstring>
int main()
	{
	int j,t,i,len,count,k;
	char S[6102];
	scanf("%d",&t);	
	getchar();
	while(t--)
		{
		count=0;
		gets(S);
		len=strlen(S);
		if(len%2==0)
			{
			j=len/2-1;k=j+1;
			for(i=0;i<len/2;i++)
				{
				if(S[j-i]!=S[k+i])	count++;
				}
			printf("%d\n",count);
			}
		else
			{
			j=len/2;
			for(i=1;i<=len/2;i++)
				{
				if(S[j-i]!=S[j+i])	count++;
				}
			printf("%d\n",count);
			}
		}
	return 0;
	}
