/* bhupkas */

using namespace std;

#include "bits/stdc++.h"

int main()
{	
	srand(time(NULL));
	int n = rand() % 1000 + 1;
	int m = rand() % 1000 + 1;
	cout << n << " " << m << endl;
	for(int i = 0 ; i < n ; ++i)	cout << rand() % 100000 + 1 << " ";
	cout << endl;
	int i = 0;
	while(i < m)
	{
		int a = rand() % n + 1;
		int b = rand() % n + 1;
		if(a > b)	continue;
		cout << rand() % 100000 + 1 << " " << a << " " << b << endl;
		++i;
	}
	return 0;
}
