/* bhupkas */

/* Largest Area rectangle in a histogram */

#include "iostream"
#include "stdio.h"
#include "algorithm"
#include "vector"
#include "deque"

using namespace std;

#define FOR(i,a,b)			for(i=a;i<b;i++)
#define PB					push_back
#define MAX 				100005
#define LL					long long
#define PLL					pair<LL,LL>
#define MP					make_pair
#define PPF					pop_front
#define F 					front
#define PF 					push_front

int main()
	{
		LL n,i,j,te;
		LL A[MAX+5],L[MAX+5],R[MAX+5];
		deque<LL,LL> q;
		while(scanf("%lld",&n))	
			{
				FOR(i,0,n)	cin>>A[i];
				q.clear();
				q.PF(MP(A[0],0));
				i=1;
				while(i<n)
					{
						te=q.F();
						if(A[i]>=te)		q.PF(MP(A[i],i));
						else
							while(	)

					}
			}
		return 0;
	}