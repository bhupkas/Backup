#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdio>
using namespace std;
typedef unsigned long long int ull;
int main()
	{	
	ull n,temp,count=0;
	vector<ull> v;
	vector<ull>::iterator it;
	scanf("%llu",&n);
	scanf("%llu",&temp);
	v.push_back(temp);
	n--;
	while(n--)
		{
		scanf("%llu",&temp);
		for(it=v.begin();it!=v.end();it++)
			{
			if(temp<*it)	count++;
			}
		v.push_back(temp);
		}
	printf("%llu\n",count);
	return 0;
	}
		
