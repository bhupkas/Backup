#include <iostream>
#include <cstdio>
#include <cstring>
#include <sstream>

using namespace std;

int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		int w , b;
		cin >> w >> b;
		if (b % 2 == 0) cout << 0 << endl;
		else {
			cout << 1 << endl;
		}
	}
	
	return 0;
}
