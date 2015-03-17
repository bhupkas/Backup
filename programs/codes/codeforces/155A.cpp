/* bhupkas */

#include "bits/stdc++.h"

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector < int > v(n);
	int ans = 0;
	int mi , ma;
	cin >> v[0];
	mi = v[0] , ma = v[0];
	for(int i = 1 ; i < n ; i++)
	{
		cin >> v[i];
		if(v[i] < mi)	ans++, mi = v[i];
		if(v[i] > ma)	ans++ , ma = v[i];
	}
	cout << ans << endl;
	return 0;
}
