#include"iostream"
#include"stdio.h"
#include"string.h"
int main()
	{
		char S[100005];
		int i,j,len;
		scanf("%s",S);
		len=strlen(S);
		for(i=0;i<len;i++)
		{
			if(S[i]=='0')	{j=i;	break;}
		}
		if(i==len)
		{
			for(i=0;i<len-1;i++)	printf("%c",S[i]);
				printf("\n");
		}
		else
		{
			for(i=0;i<len;i++)	
				{
					if(i==j)	continue;
					else	printf("%c",S[i]);
				}
			printf("\n");
		}
	}