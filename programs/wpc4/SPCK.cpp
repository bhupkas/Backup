/* bhupkas */

#include "bits/stdc++.h"

using namespace std;

#define EPS 1e-9

int main()
{
	int t;
	cin >> t;
	assert(t >= 1 && t <= 100);
	int A[55];
	double re = 0.0;
	int n,m;
	while(t--)
	{
		cin >> n >> m;
		assert(n <= 50 && n >= 1);
		assert(m <= 50 && m >= 1);
		for(int i = 0 ; i < n ; i++)	cin >> A[i] , assert(A[i] >= 0 && A[i] <= m);
		re = 0.0;
		for(int mx = 1 ; mx <= m ; mx++)
		{
			double re1 = 0.0;
			int i = 0;
			int mxlen = 0;
			while(1)
			{
				if(i >= n)	break;
				if(A[i] == mx || A[i] == 0)
				{
					double prob = 0.0;
					int cnt = 0;
					while(i < n && (A[i] == mx || A[i] == 0))
					{
						if(A[i] == 0)	prob += (1.0/(1.0*m));
						else		prob += 1.0;
						cnt++;
						i++;
					}
					re1 += prob;
				}
				else	i++;
			}
			re += re1;
		}
		printf("%0.6lf\n",re);
	}	
	return 0;
}
