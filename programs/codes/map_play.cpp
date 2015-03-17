#include<cstdio>
#include<map>
#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main()
	{
	map<string,int> m;
	map<string,int>::iterator it;
	int t,n;
	string S;
	scanf("%d",&t);
	getchar();
	while(t--)
		{
		cin>>S;
		cin>>n;
		m[S]=n;
		}
	for(it=m.begin();it!=m.end();it++)
		printf("%d\n",(*it).second);
	return 0;
	}
