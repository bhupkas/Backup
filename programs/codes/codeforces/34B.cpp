/* bhupkas */

#include "bits/stdc++.h"

using namespace std;

int main()
{
	int n,m;
	cin >> n >> m;
	int re = 0;
	vector < int > v(n);
	for(int i = 0 ; i < n ; i++)	cin >> v[i];
	sort(v.begin() , v.end() );
	for(int i = 0 ; i < min(n,m) && v[i] < 0 ; i++)	re += v[i];
	cout << -1*re << endl; 
	return 0;
}