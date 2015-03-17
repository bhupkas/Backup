#include <iostream>
#include <cstdio>
#include <cstring>
#include <sstream>
#include <algorithm>
#include <time.h>

using namespace std;

int main()
{
	cout << 10000 << endl;
	srand (time(NULL));
	for (int i = 0; i < 10000; i++) {
		int w = rand() % 1000000000;
		int b = rand() % 1000000000;
		
		cout << w << " " << b << endl;
	}
	
	return 0;
}
