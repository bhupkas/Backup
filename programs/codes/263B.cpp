#include"stdio.h"
#include"vector"
#include"map"
#include"set"
#include"string"
#include"string.h"
#include"math.h"
#include"algorithm"
using namespace std;
#define S(n)	scanf("%d",&n);
#define FOR(i,a,b)	for(i=a;i<b;i++)
bool f(int a,int b)
	{
		return a>b;
	}
int main()
	{
		int n,k,temp,i,j,ans;
		vector<int> v;
		S(n);S(k);
		FOR(i,0,n)	
			{
				S(temp);
				v.push_back(temp);
			}
		if(k>n)	{printf("-1\n");	return 0;}
			sort(v.begin(),v.end(),f);
		printf("%d %d\n",v[k-1],v[k-1]);
		return 0;
	}