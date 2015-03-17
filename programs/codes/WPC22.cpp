#include"stdio.h"
#include"iostream"
#include"string.h"
using namespace std;
int main()
	{
		int A[30];
		bool B[30];
		int j,i,m,k,ll;
		char S[150];
		scanf("%s",S);
		for(i=0;i<30;i++)
			{
				A[i]=0;
				B[i]=false;
			}
		m=strlen(S);
		scanf("%d",&k);
		for(i=0;i<m;i++)
			{
				A[S[i]-'a']++;
				B[S[i]-'a']=true;
			}	
		int min=100000000;
		for(i=0;i<26;i++)
		{
			min=1000000000;
			for(j=0;j<26;j++)
			{
				if(B[j]==true && A[j]<min)	{min=A[j];	ll=j;}
			}
			if(k>=A[ll])	{k-=A[ll];	B[ll]=false;A[ll]=0;}
			if(k<=0)	break;
		}
		int now=0;
		for(i=0;i<26;i++)
			if(B[i])	now++;
		printf("%d\n",now);
		for(i=0;i<m;i++)
		{
			if(B[S[i]-'a'])	printf("%c",S[i]);
		}
		printf("\n");
		return 0;
	}