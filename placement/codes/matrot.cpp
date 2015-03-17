/* bhupkas */

using namespace std;

#include "bits/stdc++.h"

int A[1005][1005];
int B[1005][1005];

int main()
{
	int n;
	cin >> n;
	for(int i = 0 ; i < n ; ++i)	for(int j = 0 ; j < n ; ++j)	cin >> A[i][j];
	for(int i = 0 ; i < n ; ++i)	for(int j = 0 ; j < n ; ++j)	B[j][n-i-1] = A[i][j];
	for(int i = 0 ; i < n ; ++i)
	{
		for(int j = 0 ; j < n ; ++j)	cout << B[i][j] << " ";
		cout << endl;
	} 
	return 0;
}
