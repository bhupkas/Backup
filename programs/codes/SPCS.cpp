/* bhupkas */

using namespace std;

#include "bits/stdc++.h"

bool isPalin(string str)
{
	int sz = (int)(str.size());
	for(int i = 0 ; i < sz/2 ; ++i)
		if(str[i] != str[sz - i - 1])	return false;
	return true;
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string str1,str2;
		cin >> str1;
		char ch = str1[0];
		str2.push_back(ch);
		for(int i = 1 ; i < str1.size() ; ++i)
		{
			if(str1[i] != ch)
			{
				str2.push_back(str1[i]);
				ch = str1[i];
			}
		}
		if(isPalin(str2)) puts("YES");
		else	puts("NO");
	}
	return 0;
}
