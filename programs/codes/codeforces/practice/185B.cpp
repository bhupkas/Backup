/* bhupkas */

#include "iostream"
#include "stdio.h"
#include "math.h"
#include "vector"
#include "algorithm"

using namespace std;

#define FOR(i,a,b)	for(i=a;i<b;i++)

int main()
	{
		double a,b,c,x,y,z,s,o;
		int i,j;
		cin>>s>>a>>b>>c;
		o=a+b+c;
		if(a==b && a==c && a==0)
			{
				printf("0.0 0.0 0.0\n");
				return 0;
			}
		printf("%.15lf %.15lf %.15lf\n",a*s/o,b*s/o,c*s/o);
		return 0;
	}