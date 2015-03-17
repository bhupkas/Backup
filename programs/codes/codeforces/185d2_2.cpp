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
int main()
	{
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		int temp;
		temp=(-1*a*c)+a*d+b*c;
		double ans;
		ans=(double)(a*d)/(double)(temp);
		printf("%0.12lf\n",ans );
		return 0;
	}