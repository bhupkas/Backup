/* bhupkas */

#include "bits/stdc++.h"

using namespace std;

typedef long long LL;

LL L[200005],R[200005];

int main()
{
	int n;
	string str;
	cin >> n;
	vector < int > v(n);
	for(int i = 0 ; i < n ; i++)	cin >> v[i];
	int cnt = 0;
	LL re = 0;
	for(int i = 0 ; i < n ; i++)
	{
		if(v[i])	cnt++;
		else		re += (LL)(cnt);
	} 
	cout << re << endl;
	return 0;
}
