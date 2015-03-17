/* bhupkas */

#include "bits/stdc++.h"

using namespace std;

int a,b,c;

int main()
{
	int n;
	string str;
	cin >> str;
	n = str.size();
	int i = 0;
	while(str[i] != '+')
	{
		a++;
		i++;
	}
	i++;
	while(str[i] != '=')
	{	
		b++;
		i++;
	}
	i++;
	while(i < n)
	{
		c++;
		i++;
	}
	if(a + b == c)
	{	
		cout << str << endl;
		return 0;
	}
	if(a + b == c + 2)
	{
		if(b != 1)
		{
			for(int i = 0 ; i < a ; i++)
				cout << '|';
			cout << '+';
			for(int i = 0 ; i < b - 1 ; i++)
				cout << '|';
			cout << '=';
			for(int i = 0 ; i < c + 1 ; i++)
				cout << '|';
			cout << endl;
		}
		else
		{	
			for(int i = 0 ; i < a - 1 ; i++)
				cout << '|';
			cout << '+';
			for(int i = 0 ; i < b  ; i++)
				cout << '|';
			cout << '=';
			for(int i = 0 ; i < c + 1 ; i++)
				cout << '|';
			cout << endl;
		}
		return 0;
	}
	if(a + b == c - 2)
	{
		for(int i = 0 ; i < a ; i++)
			cout << '|';
		cout << '+';
		for(int i = 0 ; i < b + 1 ; i++)
			cout << '|';
		cout << '=';
		for(int i = 0 ; i < c - 1 ; i++)
			cout << '|';
		cout << endl;
		return 0;
	}
	cout << "Impossible" << endl;	
	/*
	cin >> n;
	vector < int > v(n);
	for(int i = 0 ; i < n ; i++)	cin >> v[i];
	sort(v.begin(),v.end());
	*/
	return 0;
}
