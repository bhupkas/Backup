/* bhupkas */

#include "bits/stdc++.h"

using namespace std;

int main()
{
	int n;
	cin >> n;
	string str;
	cin >> str;
	string S[10];
	S[0] = "vaporeon";
	S[1] = "jolteon";
	S[2] = "flareon";
	S[3] = "espeon";
	S[4] = "umbreon";
	S[5] = "leafeon";
	S[6] = "glaceon";
	S[7] = "sylveon";
	for(int i = 0 ; i < 8 ; ++i)
	{
		bool flag = true;
		if(n != S[i].length())	
		{
			flag = false;
			continue;
		}
		for(int j = 0 ; j < n ; ++j)
		{
			if(str[j] >= 'a' && str[j] <= 'z' && str[j] != S[i][j])
			{
				flag = false;
			}
		}
		if(flag)
		{
			cout << S[i] << endl;
			return 0;	
		}
	}
	
	return 0;
}
