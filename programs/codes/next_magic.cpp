#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int main()
	{
	char S[102];
	int t,i;
	scanf("%d",&t);
	while(t--)
		{
		scanf("%s",S);
		for(i=strlen(S)-1;i>=0;i--)
			if(S[i]==4)	{S[i]=7;	break;}		
		if(i==-1)
			{
			for(i=0;i<=strlen(S);i++)
				printf("4");
			printf("\n");
			continue;
			}
		else
			printf("%s\n",S);
		}
	return 0;
	}			
