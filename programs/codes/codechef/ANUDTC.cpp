/* bhupkas */

using namespace std;

#include "bits/stdc++.h"

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		if(360 % n == 0)	cout << "y ";
		else			cout << "n ";
		if(n <= 360)		cout << "y ";
		else			cout << "n ";
		if(n <= 26)		cout << "y" << endl;
		else			cout << "n" << endl;
	}
	return 0;
}
