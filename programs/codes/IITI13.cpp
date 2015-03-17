/* bhupkas */

#include "bits/stdc++.h"

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;cin >> n;
		string str;
		cin >> str;
		vector < int > v(str.size());
		for(int i = 0 ; i < str.size() ; i++)	cin >> v[i] , v[i]--;
		for(int i = 0 ; i < str.size() ; i++)	swap(str[i],str[v[i]]);
		cout << str << endl;
	}
	return 0;
}
