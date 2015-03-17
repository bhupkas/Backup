/* bhupkas */

#include "iostream"
#include "stdio.h"
#include "map"
#include "algorithm"
#include "set"
#include "vector"
#include "string.h"
#include "string"
#include "math.h"

using namespace std;

#define vi			vector<int>

typedef long long LL;
bool A[100000];

int main()	
	{
	long a;
	long p=1,q=1;
	cin >> a;
	while (p*(p+1)/2<=a)
	{
		for (long q=1;q<=p;q++)
			if (p*(p+1)/2+q*(q+1)/2==a) {cout << "YES" << endl;return 0;}
		p++;
	}
	cout << "NO" << endl;
	}