/* bhupkas */

#include "bits/stdc++.h"

using namespace std;

int main()
{
	int n;
	cin >> n;
	int a,b;
	vector < int > v;
	int ans = 0;
	int cnt = 1;
	for(int i = 0 ; i < n ; i++)
	{
		cin >> a >> b;
		if(b > 0)	ans += a , cnt += (b - 1);
		else	v.push_back(a);
	}
	sort(v.begin(),v.end());
	for(int i = (int)(v.size()) - 1; cnt > 0 && i >= 0 ; i--)	ans += v[i] , cnt--;
	cout << ans << endl;
	return 0;
}
