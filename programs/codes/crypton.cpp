#include<cstdio>
#include<cstring>
typedef long long int ll;
using namespace std;
char S[102];
ll A[1000005];
bool division(ll o)
	{
	ll len,i,value=0,carry=0;
	len=strlen(S);
	for(i=0;i<strlen(S);i++)
		{
		value=carry*10+(S[i]-'0');
		carry=value%o;
		}
	if(!carry)	return true;
	else		return false;
	}
int main()	
	{
	ll l,i,j;
	for(i=0;i<1000005;i++)
		A[i]=1;
	A[1]=0;	
	for(i=1;i<1001;i++)		
		{
		if(A[i])
			{
			for(j=i;j<(1000005/i);j++)
				A[i*j]=0;
			}
		}
	while(1)
		{
		scanf("%s %lld",S,&l);
		if(l==0)	break;
		for(i=2;i<l;i++)
			{
			if(A[i])
				{
				if(division(i))	break;
				}
			}
		if(i==l)	printf("GOOD\n");
		else		printf("BAD %lld\n",i);		
		}
	return 0;
	}
