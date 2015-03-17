/* bhupkas */

using namespace std;

#include "bits/stdc++.h"

int hamming(string str1 , string str2)
{
	int n = str1.size();
	int re = 0;
	for(int i = 0 ; i < n ; ++i)
		re += (str1[i] != str2[i]);
	return re;
}

int main()
{
	int t;
	string str1,str2;
	cin >> t;
	while(t--)
	{
		cin >> str1 >> str2;
		if(str1.size() != str2.size())	
		{
			cout << -1 << endl;
			continue;
		}
		else	cout << hamming(str1,str2) << endl;
	}
	return 0;
}