/* bhupkas */

#include "bits/stdc++.h"

using namespace std;

int main()
{		
	string str;
	cin >> str;
	bool ok1 , ok6 , ok8 , ok9;
	ok1 = ok6 = ok8 = ok9 = true;
	vector < int > v;
	int num = 0;
	string str1;
	for(int i = 0 ; i < str.size() ; i++)
	{
		if (str[i] == '1' && ok1)		ok1 = false;
		else if (str[i] == '6' && ok6)		ok6 = false;
		else if (str[i] == '8' && ok8) 		ok8 = false;
		else if (str[i] == '9' && ok9)		ok9 = false;
		else	str1.push_back(str[i]) , num = ((num * 10) + (str[i] - '0')) % 7;
	}
	int st = 0;
	while(str1[st] == '0' && st < str1.size())	st++;
	string str3;
	for(int i = 0 ; i < str1.size() ; i++)	str3.push_back(str1[i]);
	str1 = "";
	for(int i = st ; i < str3.size() ; i++)	str1.push_back(str3[i]);
	str3 = "";
	for(int i = 0 ; i < st ; i++)	str3.push_back('0');
	if(num % 7 == 0)	cout << 1869 << str1 << str3 << endl;
	if(num % 7 == 1)	cout << str1 << 6198 << str3 << endl;
	if(num % 7 == 2)	cout << str1 << 1896 << str3 << endl;
	if(num % 7 == 3)	cout << str1 << 6918 << str3 << endl;
	if(num % 7 == 4)	cout << str1 << 1986 << str3 << endl;
	if(num % 7 == 5)	cout << str1 << 1968 << str3 << endl;
	if(num % 7 == 6)	cout << str1 << 1698 << str3 << endl;
	return 0;
}
