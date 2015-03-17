/* bhupkas */

using namespace std;

#include "bits/stdc++.h"

int main()
{
	int t;
	cin >> t;
	int h,m;
	double a,b,re;
	while(t--)
	{
		cin >> h >> m;
		if(h < 0 || h > 23 || m < 0 || m > 59)	
		{
			cout << "Invalid Time" << endl;
			continue;
		}
		if(h >= 12)	h-= 12;
		b = m * 6.0;
		a = h * 30.0 + m * 0.5;
		if(a > b)	re = a-b;
		else	re = b-a;
		printf("%0.1lf\n",min(fabs(re),fabs(360.0-re)));
	}
	return 0;
}
