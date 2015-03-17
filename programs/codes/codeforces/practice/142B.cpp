/* bhupkas */

#include "iostream"
#include "stdio.h"
#include "vector"
#include "algorithm"

using namespace std;

#define FOR(i,a,b)	for(i=a;i<b;i++)
#define LL	long long 

int main()
	{
		int m,n;
		cin>>n>>m;
		if (m>n) swap(n, m);
		if (m==1) 
			printf("%d\n", n);
		else if (m==2) 
			printf("%d\n", 2*(2*(n/4) + min(n%4, 2)));
		else
			printf("%d\n", n*m - n*m/2);
		return 0;
	}