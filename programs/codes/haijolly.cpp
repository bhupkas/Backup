#include<cstdio>
#include<cstring>
using namespace std;
int main()
	{	
	char S[50002];
	int temp,carry1,carry,len,t,i;
	scanf("%d",&t);
	getchar();
	while(t--)
		{
		temp=carry=0;
		gets(S);
		len=strlen(S);
		for(i=0;i<len;i++)
			{
			temp=carry*10+(S[i]-'0');
			carry=(temp)%252;
			}
		temp=carry1=0;
		for(i=0;i<len;i++)
			{
			temp=carry1*10+(S[i]-'0');
			carry1=(temp)%525;
			}
		if(carry==0)	printf("Yes ");
		else		printf("No ");
		if(carry1==0)	printf("Yes\n");
		else		printf("No\n");
		}
	return 0;
	}
