/* bhupkas */

#include <vector>
#include <list>
#include <queue>
#include <map>
#include <set>
#include <stack>
#include <bitset>
#include <algorithm>
#include <sstream>
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include "cstring"

using namespace std;

int main()
{
	int n;
	set < int > s;
	cin >> n;
	vector < int > v(n);
	for(int i = 0 ; i < n ; i++)	cin >> v[i];
	bool dp[100005];
	memset(dp,false,sizeof(dp));
	sort(v.begin(),v.end());
	for(int i = 0 ; i < n ; i++)
	{
		for(int j = i + 1 ; j < n ; j++)	dp[v[j]-v[i]] = true;
	}
	int cnt = 0;
	for(int i = 0 ; i < 100001 ; i++)	if(dp[i])	cnt++;
	cout << cnt << endl;
	return 0;
}
