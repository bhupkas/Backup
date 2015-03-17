#include"stdio.h"
#include"iostream"
#include"vector"
#include"algorithm"
#include"map"
#include"set"
#include"string.h"
#include"string"
#include"math.h"
using namespace std;
#define FOR(i,a,b)	for(i=a;i<b;i++)
#define S(n)	scanf("%d",&n);
#define P(n)	printf("%d\n",n);
int main()
	{
		int n;
		int i,cou=0;
		int temp=0;
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>temp;
			cou+=temp;
		}
		int ans=0;
		int l=cou%(n+1);
		for(i=1;i<=5;i++)
		{
			if((cou+i)%(n+1)!=1)	ans++;
		}
		cout<<ans<<endl;
		return 0;
	}