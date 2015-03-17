/* bhupkas */

#include "bits/stdc++.h"

using namespace std;

int main()
{
	srand(time(NULL));
	int t = 10;
	cout << t << endl;
	while(t--)
	{
		int n = rand() % 100000 + 1;
		string str = "";
		for(int i = 0 ; i < n ; ++i)	
		{
			char ch;
			ch = (char)(rand() % 26 + 'a');
			str.push_back(ch);
		}
		cout << str << endl;
	}
	return 0;
}
