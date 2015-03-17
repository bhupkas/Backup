/* bhupkas */

using namespace std;

#include "bits/stdc++.h"

typedef long long LL;

int main()
{
	int n,m;
	cin >> n >> m;
	vector < int > v(m+5);
	vector < int > A(n+5);
	for(int i = 0 ; i < m ; ++i)	cin >> v[i];
	for(int i = 0 ; i < n+1 ; ++i)	A[i] = 1000000;
	for(int i = 0 ; i < m ; ++i)
	{
		for(int j = v[i]  ; j <= n ; ++j)	
		{	
			if(A[j] == 1000000)	A[j] = v[i];
		}
	}
	for(int i = 1 ; i <=  n ; ++i)	cout << A[i] << " ";
	cout << endl;
	return 0;
}
