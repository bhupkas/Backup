/* bhupkas */

#include "bits/stdc++.h"

using namespace std;

int main()
{
	int re = 0;
	int l,m,k,n,d;
	cin >> l >> m >> k >> n >> d;
	for(int i = 1 ; i <= d ; i++)
		if(i % l == 0 || i % k == 0 || i % n == 0 || i % m == 0)	re++;
	cout << re << endl;
	return 0;
}