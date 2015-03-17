/* bhupkas */

#include "bits/stdc++.h"

using namespace std;

int main()
{
	string str1,str2;
	cin >> str1 >> str2;
	int com = 0;
	if(str1.size() > str2.size())
	{
		com = 0;
		int te = 0;
		for(int i = 0 ; i < str1.size() - str2.size() ; i++)
		{
			te = 0;
			for(int j = 0 ; j < str2.size() ; j++)	if(str2[j] == str1[i + j])	te++;
			com = max(te , com);
		}
		cout << str2.size() - com << endl;
	}
	else
	{
		com = 0;
		int te = 0;
		for(int i = 0 ; i < str2.size() - str1.size() ; i++)
		{
			te = 0;
			for(int j = 0 ; j < str1.size() ; j++)	if(str1[j] == str2[i + j])	te++;
			com = max(te , com);
		}
		cout << str2.size() - com << endl;
	}	
	return 0;
}
