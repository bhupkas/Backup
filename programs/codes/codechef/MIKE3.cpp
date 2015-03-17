/* bhupkas */

using namespace std;

#include "bits/stdc++.h"

using namespace std;

int n,m;
bool B[21][21];
bool A[21][20003];

int main()
{
	scanf("%d %d",&n,&m);
	memset(A,false,sizeof(A));
	memset(B,false,sizeof(B));
	for(int i = 0 ; i < m ; ++i)
	{
		int k;
		scanf("%d",&k);
		int temp;
		for(int j = 0 ; j < k ; ++j)	scanf("%d",&temp),A[i][temp-1] = true;
	}
	
	for(int i = 0 ; i < n ; ++i)
	{	
		for(int j = 0 ; j < m ; ++j)
		{
			for(int k = j + 1 ; k < m ; ++k)
			{	
				if(A[j][i] && A[k][i])	B[j][k] = true;
			}
		}
	}
	int re = 1;
	vector < int > v;
	for(int mask = 0 ; mask < (1 << m) ; mask++)
	{
		v.clear();
		for(int i = 0 ; i < m ; ++i)
			if((mask >> i) & 1)	v.push_back(i);
		bool foo = true;
		for(int i = 0 ; i < v.size() ; ++i)
		{
			for(int j = i + 1 ; j < v.size() ; ++j)
			{
				if(B[v[i]][v[j]])	
				{
					foo = false;
					break;
				}	
			}
			if(!foo)	break;
		}	
		if(foo)	re = max(re,(int)v.size());		
	}
	printf("%d\n",re);
	return 0;
}
