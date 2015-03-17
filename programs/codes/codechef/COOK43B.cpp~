/* bhupkas */

#include "bits/stdc++.h"

using namespace std;

typedef long long LL;

LL P[100005];

int n;

int main()
{	
	LL t;
	cin >> t;
	LL ans = 0;
	while(t--)
	{
		ans = 0;
		cin >> n;
		for(int i = 0 ; i < n ; i++)	cin >> P[i];
		sort(P,P+n);
		for(int i = 1 ; i < n ; i++)	ans += (P[0] * P[i]);
		cout << ans << endl;
	}	
	return 0;
}
