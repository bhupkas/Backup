/* bhupkas */

using namespace std;

#include "bits/stdc++.h"

int F[1005];

char str[100005];
char pattern[1005];

void Failure()
{
	F[0] = 0;
	int len = strlen(pattern);
	for(int i = 1 ; i < len ; ++i)
	{
		int k = F[i-1];
		while(k > 0 && pattern[i] != pattern[k])	k = F[k];
		if(pattern[i] == pattern[k])	F[i] = F[k] + 1;
		else	F[i] = 0;
	}
}

bool check()
{	
	int n = strlen(str);
	int len = strlen(pattern);
	int k = 0;
	for(int i = 0 ; i < n ; ++i)
	{
		while(k > 0 && pattern[k] != str[i])	k = F[k];
		if(pattern[k] == str[i])	if(++k == len)	return true;	
	}
	return false;
}

int main()
{
	int t,q;
	scanf("%d\n",&t);
	while(t--)
	{	
		scanf("%s",str);
		scanf("%d",&q);
		while(q--)
		{
			scanf("%s",pattern);
			Failure();
			if(check())	printf("y\n");
			else		printf("n\n");
		}
	}	
	return 0;
}
