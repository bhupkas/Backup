/* bhupkas */

#include "bits/stdc++.h"

using namespace std;

typedef long long LL;

int main()
{
	int n;
	LL re = 0;	
	cin >> n ;
	vector < LL > a(n),b(n);
	for(int i = 0 ; i < n ; i++)	cin >> a[i];
	for(int i = 0 ; i < n ; i++)	cin >> b[i];
	for(int i = 0 ; i < n ; i++)
	{
		if(b[i] == 1)	
		{
			re--;
			continue;
		}
		if(2*a[i] < b[i])	re--;
		else	re += (b[i]/2 * (b[i] - b[i]/2));		 
	}
	cout << re << endl;
	return 0;
}
