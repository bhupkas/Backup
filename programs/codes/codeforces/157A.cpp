/* bhupkas */

#include "bits/stdc++.h"

using namespace std;

int main()
{
	int n;
	cin >> n;
	int A[35][35];
	for(int i = 0 ; i < n ; i++)	for(int j =0 ; j < n ; j++)	cin >> A[i][j];
	int R[35],C[35];
	for(int i = 0 ; i < n ; i++)	R[i] = C[i] = 0;
	for(int i = 0 ; i < n ; i++)
	{
		for(int j = 0 ; j < n ; j++)	R[i] += A[i][j] , C[j] += A[i][j];
	}	
	int ans = 0;
	for(int i = 0 ; i < n ; i++)	for(int j = 0 ; j < n ; j++)	if(C[j] > R[i])	ans++;
	cout << ans << endl;
	return 0;
}
