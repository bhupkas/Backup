/* bhupkas */

#include "bits/stdc++.h"

using namespace std;

typedef long long LL;

int a,b,c,d;

int main()
{
	int n;
	string str;
	cin >> str;
	n = str.size();
	for(int i = 0 ; i < n ; i++)
	{
		if(str[i] == 'n')	a++;
		if(str[i] == 'i')	b++;
		if(str[i] == 'e')	c++;
		if(str[i] == 't')	d++;
	}
	a--;
	a/=2;
	c/=3;
	cout << min(a,min(b,min(c,d))) << endl;
	/*
	cin >> n ;
	vector <int > v(n);
	for(int i = 0 ; i < n ; i ++)	cin >> v[i];
	sort(v.begin(),v.end());
	*/
	return 0;
}
