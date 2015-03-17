/* bhupkas */

#include "bits/stdc++.h"

using namespace std;

typedef long long LL;

int W[200][200];
double A[200][200];
double B[200][200];

int main()
{
	int n;
	string str;
	/*
	cin >> n ;
	vector <int > v(n);
	for(int i = 0 ; i < n ; i ++)	cin >> v[i];
	sort(v.begin(),v.end());
	*/
	cin >> n;
	for(int i = 0 ; i < n ; i++)	for(int j = 0 ; j < n ; j++)	cin >> W[i][j];
	for(int i = 0 ; i < n ; i++)
		for(int j = 0 ; j < n ; j++)
			A[i][j] = (double)(W[i][j] + W[j][i]) / 2.0;
	for(int i = 0 ; i < n ; i ++)
		for(int j = 0 ; j < n ; j++)
			B[i][j] = (double)(W[i][j] - W[j][i]) / 2.0;
	for(int i = 0 ; i < n ; i++)
	{
		for(int j = 0 ; j < n ; j++)
			printf("%0.9lf ",A[i][j]);
		cout << endl;
	}
	for(int i = 0 ; i < n ; i++)
	{
		for(int j = 0 ; j < n ; j++)
			printf("%0.9lf ",B[i][j]);
		cout << endl;
	}
	return 0;
}
