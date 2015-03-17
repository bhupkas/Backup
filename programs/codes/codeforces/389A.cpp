/* bhupkas */

#include "bits/stdc++.h"

using namespace std;
	
int main()
{
	int n;	
	cin >> n;	
	vector < int > v(n);
	for(int i = 0 ; i < n ; i++)	cin >> v[i];
	int gc = __gcd(v[0],v[1]);
	for(int i = 2 ; i < n ; i++)	gc = __gcd(gc,v[i]);
	cout << n*gc << endl;
	return 0;
}
