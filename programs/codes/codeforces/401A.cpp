/* bhupkas */

using namespace std;

#include "bits/stdc++.h"

int n,x;

string str;

int main()
{
	cin >> n;
	cin >> x;
	vector <int> v(n);
	for(int i = 0 ; i < n ; ++i)	cin >> v[i];
	int tot = 0;
	for(int i = 0 ; i < n ; ++i)	tot+=v[i];
	if(tot < 0)	tot = -1 * tot;
	if(tot == 0)
	{
		cout << 0 << endl;
		return 0;
	}
	cout << (tot-1)/x + 1 << endl;
	return 0;
}
