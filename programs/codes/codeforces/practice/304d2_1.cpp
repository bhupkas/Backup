/* bhupkas */

#include "iostream"
#include "stdio.h"
#include "algorithm"
#include "vector"
#include "set"
#include "map"
#include "string"
#include "string.h"
#include "math.h"

using namespace std;

#define FOR(i,a,b)	for(i=a;i<b;i++)
#define PB 	push_back

int main()
	{
		int i,j,n,m;
		cin>>n;
		double oo;
		int a,b,c;
		int ans=0;
		for(i=1;;i++)
			{
				for(j=i;;j++)
					{
						//cout<<i<<" "<<j<<endl;
						oo=sqrt(i*i+j*j);
						if(i*i + j*j <= n*n)	{if(oo-(int)oo < 0.0000001)		ans++;}
						else 					break;
					}
				if(j==i)	break;
			}
		cout<<ans<<endl;
		return 0;
	}