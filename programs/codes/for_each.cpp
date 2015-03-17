#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>
#include<cstdio>
int myfunction(int n)
	{
	printf("%d\n",n);	
	}
int main()
	{
	int t,n;
	scanf("%d",&t);
	vector<int> v;
	while(t--)
		{
		scanf("%d",&n);
		v.push_back(n);
		}
	for_each(v.begin(),v.end(),myfunction);
	return 0;	
	}
	
