/* bhupkas */

#include "bits/stdc++.h"

using namespace std;

typedef long long LL;

int main()
{	
	int t;
	LL n;
	cin >> t;
	assert(t >= 1 && t <= 100000);
	while(t--)
	{	
		cin >> n;
		assert(n >= 1 && n <= (LL)(1e9));
		if(n & 1)	
		{
		 	LL re = ((n+3LL)*(n+3LL))/48LL;
			LL off = ((n+3LL)*(n+3LL))%48LL;
			if(off == 24 && re&1)	cout << re + 1 << endl;
			else if(off > 24)	cout << re + 1 << endl;
			else			cout << re << endl;
		}
		else
		{
			LL re = (n*n)/48LL;
			LL off = ((n)*(n))%48LL;
			if(off == 24 && re&1)	cout << re + 1 << endl;
			if(off > 24)	cout << re + 1 << endl;
			else		cout << re << endl;
		}
	}
	return 0;
}
