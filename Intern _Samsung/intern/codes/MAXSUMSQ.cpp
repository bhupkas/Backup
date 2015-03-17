/* bhupkas */

/* Maximum sum subarray O(n) algorithm */

#include "iostream"
#include "stdio.h"
#include "algorithm"

using namespace std;

#define FOR(i,a,b)			for(i=a;i<b;i++)
#define LL					long long 

LL A[100005];
LL S[100005];

int main()
	{
		LL i,j,t,n,ma,co,cnt;
		scanf("%lld",&t);
		while(t--)
			{
				cnt=1;
				scanf("%lld",&n);
				FOR(i,0,n+1)	S[i]=0;
				FOR(i,0,n)		scanf("%lld",&A[i]);
				LL rmx = -1000000LL;
				LL mn = 0; LL mnct = 1,sum,rct;
				for(i=sum=0;i<n;i++)
				{
					sum += A[i];
							
					if( sum - mn > rmx) rmx = sum-mn ,  rct = mnct;
					else if( sum - mn == rmx ) rct += mnct;
				 
					if( sum < mn ) mn = sum ,  mnct = 1;
					else if( sum == mn ) mnct++;
				}
				cout<<rmx<<" "<<rct<<endl;
			}
		return 0;
	}