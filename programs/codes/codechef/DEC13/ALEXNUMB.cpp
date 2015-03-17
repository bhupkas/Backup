/* bhupkas */

#include "bits/stdc++.h"

using namespace std;

vector < int > v;
int main()
{
	int t,temp,n;
	cin >> t;
	while(t--)
	{
		cin >> n;
		v.clear();
		for(int i = 0 ; i < n ; i++)	cin >> temp;
		long long re = (long long )(n) * (long long )(n - 1) / 2LL;
		cout << re << endl;
	}
	return 0;
}
