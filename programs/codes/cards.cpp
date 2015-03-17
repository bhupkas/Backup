#include"stdio.h"
#include"vector"
using namespace std;
int main()
{
	int temp,n,i,j;
	vector<int> v[5005];
	for(i=0;i<=5001;i++)	v[i].clear();
	scanf("%d",&n);
	for(i=1;i<=2*n;i++)
	{
		scanf("%d",&temp);
		v[temp].push_back(i);
	}
	for(i=0;i<=5001;i++)
	{
		if((int)v[i].size()==0)	continue;
		if((int)v[i].size()&1)	{printf("-1\n");	return 0;}
		else 
			{
				for(j=0;j<(int)v[i].size();j+=2)
					printf("%d %d\n",v[i][j],v[i][j+1]);
			}
	}
	return 0;
}