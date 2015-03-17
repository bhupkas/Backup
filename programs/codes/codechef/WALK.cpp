/* bhupkas */

using namespace std;

#include "bits/stdc++.h"

int main()
{
	int mx;
	int t,n,w;
	cin >> t;
	while(t--)
	{
		mx = -1;
		cin >> n;
		for(int i = 0 ; i < n ; ++i)	cin >> w , mx = max(mx,i+w);  
		cout << mx << endl;
	}
	return 0;
}
