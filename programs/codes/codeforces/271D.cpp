/* bhupkas */

#include "bits/stdc++.h"

using namespace std;

vector < string > ss;

int main()
{	
	string str,gb;
	int k;
	cin >> str >> gb >> k;
	int n = str.size();
	string temp;
	int cnt;
	for(int i = 0 ; i < n ; i++)
	{
		temp = "";
		cnt = 0;
		for(int j = i ; j < n ; j++)
		{
			if(gb[str[j] - 'a'] == '0')	cnt++;
			if(cnt > k)	break;
			temp.push_back(str[j]);
			ss.push_back(temp);
		} 
	}
	sort(ss.begin(),ss.end());
	cout << unique(ss.begin(),ss.end())-ss.begin() << endl;
	return 0;
}
