/* bhupkas */

#include "bits/stdc++.h"

using namespace std;

int main()
{
	int x,p;
	string str;
	cin >> p >> x;
	int num  = 1;
	for(int i = 0 ; i < p - 1; i++)	num = num * 10;
	for(int j = num + 1 ; j < num * 10 ; j++)
	{
		if(j % 10 * num  + j / 10 == x*j)
		{
			cout << j << endl;
			break;
		}
	}
	cout << "here" << endl;
	/*
	cin >> n;
	vector < int > v(n);
	for(int i = 0 ; i < n ; i++)	cin >> v[i];
	sort(v.begin(),v.end());
	*/
	return 0;
}
