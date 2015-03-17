/* bhupkas */

#include "bits/stdc++.h"

using namespace std;

typedef long long LL; 

LL A[50][5][5][5];

int  n;

LL B[5][5];

LL fun(int n, int a, int b , int c)
{
	if(n == 1)	return A[n][a][b][c] = min(B[a][c] , B[a][b] + B[b][c]);
	if(A[n][a][b][c])	return A[n][a][b][c];
	return A[n][a][b][c] = min(fun(n-1,a,b,c) + B[a][b] + fun(n-1,c,b,a) + B[b][c] + fun(n-1,a,b,c) ,
	 			fun(n-1,a,c,b) + B[a][c] + fun(n-1,b,a,c));
}

int main()
{
	for(int i = 0 ; i < 3 ; i++)	
		for(int j = 0 ; j < 3 ; j++)
			cin >> B[i][j];
	cin >> n;
	cout << fun(n,0,1,2) << endl;
	return 0;
}
