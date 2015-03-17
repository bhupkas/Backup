#include"iostream"
#include"stdio.h"
#include"string.h"
#include"algorithm"
#include"string"
using namespace std;
bool fun(char S1[],char S2[])
	{
		int l1,l2,i,j,k;
		l1=strlen(S1);
		l2=strlen(S2);
		k=0;
		for(j=0;(k<l2 && j<l1);j++)
				{
					if(S1[j]==S2[k])	k++;
				}
		if(k==l2)	return true;
		return false;
	}
int main()
	{
		int t,i,j,l1,l2;
		bool flag;
		char M[25002],W[25002];
		scanf("%d",&t);
		while(t--)
			{
				flag=false;
				getchar();
				scanf("%s %s",M,W);
				//cout<<M<<" "<<W<<endl;
				l1=strlen(M);
				l2=strlen(W);
				if(l1==l2)
					{
						if(!strcmp(M,W))	{cout<<"YES"<<endl;	continue;}
					}
				if(l1>l2)
						flag=fun(M,W);
				else	flag=fun(W,M);
				if(flag)	printf("YES\n");
				else		printf("NO\n");
			}
		return 0;
	}