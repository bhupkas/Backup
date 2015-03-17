/* bhupkas */

#include "bits/stdc++.h"

using namespace std;

int main()
{
	int n;
	string str;
	int m,k;
	scanf("%d %d %d",&n,&m,&k);
	int A[1005][105];
	for(int i = 0 ; i < n ; i++)
	{
		for(int j = 0 ; j < m ; j++)	scanf("%d",&A[i][j]);
	}
	vector < pair < int , int > > re;
	if(k == 0)
	{
		printf("%d\n",(m*(m-1)/2));
		for(int i = 1 ; i <= m ; i++)
		{
			for(int j = i + 1 ; j <= m ; j++)	
			{
				printf("%d %d\n",i,j);
			}
		}
	}
	else
	{
		printf("%d\n",(m*(m-1)/2));
		for(int i = m ; i >= 1 ; i--)
		{
			for(int j = i - 1 ; j >= 1 ; j--)	
			{
				printf("%d %d\n",i,j);
			}
		}
	}
	return 0;
}
