#include"iostream"
#include"stdio.h"
#include"vector"
#include"algorithm"
#include"set"
#include"map"
#include"math.h"
#include"string.h"
#include"string"
using namespace std;
#define FOR(i,a,b)	for(i=a;i<b;i++)
typedef long long int LL;
int HCF(int a,int b)
	{
	if(b>a)	swap(a,b);
	if(b==0)	return a;
	return HCF(b,a%b);
	}
int main()
	{
	int x,y,n;
	cin>>x>>y>>n;
	int temp;
	temp=HCF(x,y);
	while(y/temp >=n)
		{
		x=x/temp;
		y=y/temp;
		temp=HCF(x,y);
		}
	return 0;
	}
