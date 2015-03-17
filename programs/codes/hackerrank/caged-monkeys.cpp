/* bhupkas */

#include "bits/stdc++.h"

using namespace std;

typedef long long LL;

#define NMAX 10005	

int main()
{
	int t;
	cin >> t;
	int m;
	LL X[NMAX + 5] , Y[NMAX + 5];
	LL area,pts;
	while(t--)
	{
		area = pts = 0;
		cin >> m;
		for(int i = 0 ; i < m ; i++)	cin >> X[i] >> Y[i];
		X[m] = X[0] , Y[m] = Y[0];
		for(int i = 0 ; i < m ; i++)
		{
			area += (X[i] * Y[i+1] - X[i+1]*Y[i]);
			pts += __gcd(abs(X[i+1]-X[i]),abs(Y[i]-Y[i+1]));
		}
		area = abs(area);
		cout << (area - pts + 2)/2 << endl;
	}
	return 0;
}
