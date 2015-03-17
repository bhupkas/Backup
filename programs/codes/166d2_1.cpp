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
bool fun(int n)
	{
		int i;
		int n1,n2,n3,n4;
		n1=n%10;
		n2 =(n%100)/10;
		n3=(n%1000)/100;
		n4=(n/1000);
		if(n1!=n2 && n1!=n3 && n1!=n4 && n2!=n3 && n2!=n4 && n3!=n4)	return true;
		else return false;
	}
int main()
	{
		int n,i,t;
		int ans;
		S(n);
		for(i=n+1;i<=9999;i++)
			{
				if(fun(i))	{cout<<i<<endl;	break;}
			}
		return 0;
	}