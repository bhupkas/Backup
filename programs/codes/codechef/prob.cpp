/* bhupkas */

#include "iostream"
#include "stdio.h"
#include "math.h"
#include "algorithm"
#include "vector"

using namespace std;

#define LL	long long
#define FOR(i,a,b)	for(i=a;i<b;i++)


int main()
	{
		LL t,t1,t2,t3,t4,num;
		cin>>t;
		while(t--)
			{
				cin>>t1>>t2>>t3>>t4;
				printf("%0.9f\n",(double)(t1)/(double)(t1+t2));				
			}
		return 0;
	}