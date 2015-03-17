/* bhupkas */

using namespace std;

#include "bits/stdc++.h"

typedef long long LL;

int main()
{
	LL a,b,c,d;
	while(1)
	{
		cin >> a >> b >> c;
		if(!a && !b && !c)	return 0;
		if(b-a == c-b)	cout << "AP " << c + b - a << endl;
		else	cout << "GP " << c * c/b << endl;
	}
}