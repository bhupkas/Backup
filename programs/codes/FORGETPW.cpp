/* bhupkas */

using namespace std;

#include "bits/stdc++.h"

map < char , char > mymap;
map < char , char > :: iterator it;

int main()
{
	int t;
	int n;
	string str;
	cin >> t;
	char ch1 , ch2;
	while(t--)
	{
		bool foo = false;
		mymap.clear();
		cin >> n;
		for(int i = 0 ; i < n ; ++i)
		{
			getchar();
			ch1 = (char)getchar();
			getchar();
			ch2 = (char)getchar();
			mymap[ch1] = ch2;
		}
		getchar();
		cin >> str;
		for(int i = 0 ; i < str.size() ; ++i)	
		{
			it = mymap.find(str[i]);
			if(it != mymap.end())
				str[i] = mymap[str[i]];
			if(str[i] == '.')	foo = true;
		}
		bool foo1 = true;
		for(int i = 0 ; i < str.size() ; ++i)	if(str[i] != '0' && str[i] != '.')	{foo1 = false; break;}
		if(foo1)	
		{
			cout << 0 << endl;
			continue;
		}
		int s,e;
		e = (int)str.size() - 1;
		if(foo)
			while(str[e] == '0')	e--;
		s = 0;
		while(str[s] == '0')	s++;
		for(int i = s ; i < e ; ++i)	cout << str[i];
		if(str[e] != '.')	cout << str[e];
		cout << endl;
	}
	return 0;	
}
