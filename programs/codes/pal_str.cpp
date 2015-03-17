#include<cstdio>
#include<cstring>
using namespace std;
int min(int a,int b)
	{
	if(a<b)	return a;
	else		return b;
	}
int main()
	{
	int diff,A[6102],B[6102],j,len,t,i;
	char S[6102];
	scanf("%d",&len);
	getchar();
		diff=0;
		gets(S);
		if(len==1)	{printf("0\n");	return 0;}
		if(len==2)	
			{
			if(S[0]==S[1])	printf("0\n");
			else		printf("1\n");
			return 0;
			}
		for(i=0;i<len;i++)
			A[0]=B[0]=0;
		diff=1;
		for(j=0;j<len-1;j++)
			{
			if(S[j]==S[j+1])	A[j]=0;
			else			A[j]=1; 
			}
		len--;
		diff++;
		for(j=0;j<len-1;j++)
			{
			if(S[j]==S[j+2])	B[j]=0;
			else			B[j]=1+min(A[j],A[j+1]);
			}
		len--;
		while(len>1)
			{
			diff++;
			if(diff%2==0)	
				{
				for(j=0;j<len-1;j++)
					{
					if(S[j]==S[j+diff])	B[j]=B[j+1];
					else			B[j]=1+min(A[j],A[j+1]);
					}
				}
			else
				{
				for(j=0;j<len-1;j++)
					{
					if(S[j]==S[j+diff])	A[j]=A[j+1];
					else			A[j]=1+min(B[j],B[j+1]);
					}
				}
			len--;
			}
		if(diff%2==0)	printf("%d\n",B[0]);
		else		printf("%d\n",A[0]);
	return 0;
	}
