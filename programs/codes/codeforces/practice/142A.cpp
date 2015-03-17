/* bhupkas */

#include "iostream"
#include "stdio.h"
#include "vector"
#include "algorithm"
#include "map"

using namespace std;

#define FOR(i,a,b)	for(i=a;i<b;i++)
#define LL	long long 
#define PB 	push_back

int main()
	{
		LL n,a,b,c,i,j,n1,mi=(LL)10000000000000000,ma=(LL)-1;
		cin>>n;
		for(a=1;a*a*a<=n;a++)
			{
				if(n%a==0)
					{
						for(b=a;b*b<=n/a;b++)
							{
								if(((n/a)%b)==0)
									{
										c=n/(a*b);
										ma=max(ma,(a+1)*(b+2)*(c+2)-n);
										ma=max(ma,(b+1)*(a+2)*(c+2)-n);
										ma=max(ma,(c+1)*(a+2)*(b+2)-n);
										mi=min(mi,(a+1)*(b+2)*(c+2)-n);
										mi=min(mi,(b+1)*(a+2)*(c+2)-n);
										mi=min(mi,(c+1)*(a+2)*(b+2)-n);
									}
							}
					}
			}
		cout<<mi<<" "<<ma<<endl;
		return 0;
	}