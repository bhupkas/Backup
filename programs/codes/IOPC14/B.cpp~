/* bhupkas */

#include "bits/stdc++.h"

using namespace std;

typedef long long LL;

int main()
{
	int m;
	int t;
	cin >> t;
	string str;
	int n;
	int re = 1000000000;
	int cnt;
	while(t--)
	{
		re = 1000000000;
		cin >> str;
		cin >> m;
		n = str.size();
		cnt = 0;
		for(int i = 0 ; i < m ; i++)	if(str[i] == 'B')	cnt++;
		re = min(re,cnt);
		for(int i = 1 ; i <= n - m ; i++)
		{
			if(str[i-1] == 'B')	cnt--;
			if(str[i+m-1] == 'B')	cnt++;
			re = min(re,cnt);
		}
		cout << re << endl;
	}
	return 0;
}
