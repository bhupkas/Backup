#include"stdio.h"
#include"vector"
#include"map"
#include"set"
#include"string"
#include"string.h"
#include"math.h"
#include"algorithm"
using namespace std;
int l(int a)
	{
		int c=0;
		while(a)
		{
			a/=2;
			c++;
		}
		return c;
	}
bool f(int a,int b)
	{
		return a<b;
	}
//bool A[500000005];
#define S(n)	scanf("%d",&n);
#define FOR(i,a,b)	for(i=a;i<b;i++)
int main()
	{
		vector<int> v;
		vector<int> p;
		int i,n,k,t,counter=1,sum=0,j,l1;
		S(n);S(k);
		for(i=0;i<n;i++)	{S(t);		sum+=t;	v.push_back(t);}
		sort(v.begin(),v.end(),f);
		for(i=0;i<n;i++)
		{
			if(!k)	return 0;
			printf("1 %d\n",v[i]);
			k--;
		}
		while(k)		
		{
			for(i=0;i<n-counter;i++)
			{
				if(!k)	return 0;
				printf("%d ",counter+1);
				for(j=n-1;j>n-counter-1;j--)	printf("%d ",v[j]);
				printf("%d\n",v[i] );
				k--;
			}
			counter++;
		}
		return 0;
	}