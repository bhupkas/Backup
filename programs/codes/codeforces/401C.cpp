/* bhupkas */

using namespace std;

#include "bits/stdc++.h"

int main()
{
	int n,m;
	cin >> n >> m;
	if(m > 2*n + 2 || n  > m + 1 )	
	{
		cout << "-1" << endl;
		return 0;
	}
	if(n == m + 1)
	{	
		for(int i = 1 ; i < n ; ++i)	cout << "01";
		cout << "0" << endl;
		return 0;
	}
	if(m > 2 * n)
	{
		for(int i = 0 ; i < n ; ++i)	cout << "110";
		if(m & 1)	cout <<"1"<<endl;
		else		cout << "11"<<endl;
		return 0;
	}
	int foo = (m - n);
	for(int i = 0 ; i < foo ; ++i)	cout << "110";
	m -= 2*foo;
	n -= foo;
	for(int i = 0 ; i < n ; ++i)	cout << "10";
	m -= n;
	for(int i = 0 ; i < m; ++i)	cout <<"1";
	cout << endl;
	return 0;
}