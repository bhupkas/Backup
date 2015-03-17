#include<cstdio>
#include<cstring>
using namespace std;
int main()
	{
	int j,ans,i,t,len,temp;
	char S[100001],T[100001];
	scanf("%d",&t);
	while(t--)
		{
		ans=0;
		gets(S);
		len=strlen(S);
		j=0;
		for(i=0;i<len;)
			{
			T[j]=S[i];
			temp=1;
			i++;
			while(S[i]!=T[j])
				{
				
				i++;
				temp++;
				}
			}
		}
	return 0;
	}

