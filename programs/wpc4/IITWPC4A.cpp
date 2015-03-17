/* bhupkas */

#include "bits/stdc++.h"

typedef long long LL;

using namespace std;

int main()
{	
	int t;
	cin >> t;
	assert(t<=100 && t>=1);
	string str;
	int m,n;
	while(t--)
	{
		cin >> str;
		cin >> m >> n;
		assert(str.size() >= 1 && str.size() <= 100000 && m >= 1 && m <= 100000 && n >= 1 && n <= 100000);
		int i = 0;
		LL re = str.size();
		int cnt;
		while(1)
		{	
			if(i >= str.size())	break;
			if(str[i] == 'a')
			{
				cnt = 0;
				while(str[i] == 'a' && i < str.size())	cnt++ , i++;
				re += (LL)(cnt / m) * (LL)(n - m);
			}
			i++;
		}
		cout << min((LL)str.size(),(LL)re) << " " << max((LL)re,(LL)str.size()) << endl;
	}
	return 0;
}
