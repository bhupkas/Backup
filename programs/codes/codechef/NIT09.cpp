#include"stdio.h"
#include"iostream"
#include"string.h"
#include"string"
using namespace std;
int main()
	{
	int n,i;
	cin>>n;
	char S[60];
	getchar();
	scanf("%s",S);
	int co=0,te=0;
	for(i=1;i<n;i++)
		{
		if(S[i]==S[i-1])	co++;
		else			{te+=co;	co=0;}
		}
	cout<<te<<endl;
	return 0;
	}
