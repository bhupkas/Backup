/* bhupkas */

#include "bits/stdc++.h"

using namespace std;

int row[105];
int column[105];

int main()
{
	int n;
	cin >> n ;
	vector < int > x(n) , y(n);
	for(int i = 0 ; i < n ; i++)	cin >> x[i] >> y[i] , row[x[i]]++ , column[y[i]]++;
	int re1 = 0;
	int re2 = 0;
	for(int i = 0 ; i < 105 ; i++)	if(row[i])	re1++;
	for(int i = 0 ; i < 105 ; i++)	if(column[i])	re2++;	
	cout << min(re1,re2) << endl;
	return 0;
}
