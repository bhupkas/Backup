/* bhupkas */

using namespace std;

#include "bits/stdc++.h"

vector < pair < int , int > > v;

vector < int > v1,v2;

int main()
{
	int t;
	cin >> t;
	int n;
	int num1,num2;
	int ans,tot;
	for(int tc = 1 ; tc <= t ; tc++)
	{
		cin >> n;
		v.clear();
		v1.clear();
		v2.clear();
		for(int i = 0 ; i < n ; ++i)	cin >> num1 , v2.push_back(num1);
		for(int i = 0 ; i < n ; ++i)	cin >> num2 , v1.push_back(num2);
		for(int i = 0 ; i < n ; ++i)
		{
			if(v1[i] == -1)	continue;
			else	v.push_back(make_pair(v1[i]-30,v2[i]));
		}
		sort(v.begin(), v.end());
		ans = tot = 0;
		for(int i = 0 ; i < v.size() ; ++i)
		{
			if(v[i].first < tot + v[i].second)	ans++;
			else	tot += v[i].second;	
		}
		cout << "Case " << tc << ": " << ans << endl;
	}
	return 0;
}
