/* bhupkas */

#include "stdio.h"
#include "iostream"
#include "math.h"
#include "algorithm"
#include "vector"

using namespace std;

#define FOR(i,a,b)	for(i=a;i<b;i++)
#define LL 			long long 

int main()
	{
		LL i,j,k,b,n,t,z=1;
		cin>>k>>b>>n>>t;
		while (k*z+b<=t) {z=z*k+b; n--;}
 		cout<<(n>0?n:0)<<endl;
		return 0;
	}