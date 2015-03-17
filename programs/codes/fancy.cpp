#include<cstdio>
#include<cstring>
typedef long long int ll;
char S[32];
ll A[31];
using namespace std;
int main()
	{
	ll t,i,len,ans,count,ans1;
	scanf("%lld",&t);
	getchar();
	A[0]=1;
	A[1]=1;
	for(i=2;i<31;i++)
		A[i]=(2<<(i-2));	
	while(t--)
		{
		ans=1;
		count=1;
		gets(S);
		len=strlen(S);
		if(len==1)	{printf("1\n");	continue;}
		for(i=1;i<len;i++)		
			{
			if(S[i]==S[i-1])
				count++;
			else
				{
				ans*=A[count];	
				count=1;
				}
			}
		ans*=A[count];
		printf("%lld\n",ans);
		}
	return 0;
	}
