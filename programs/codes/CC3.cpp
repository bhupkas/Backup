/* bhupkas */

#include "bits/stdc++.h"

using namespace std;

int A[100005],B[100005];

int main()
{	
	int n;
	cin >> n;
	for(int i = 0  ; i < 110 ; i++)	A[i] = 0;
	vector <int > top(n);
	vector < int > bot(n);
	for(int i = 0  ; i < n ; i++)	cin >> top[i] >> bot[i];
	for(int i = 0 ; i < n ; i++)	
	{
		if(top[i] == bot[i])	A[top[i]]++;
		else			
		{
			A[top[i]]++;
			A[bot[i]]++;
		}
		B[top[i]]++;
	}	
	int re = 1000000000;
	for(int i = 0 ; i <= 100000 ; i++)
	{
		if(A[i] < (n + 1)/2)	continue;
		re = min(re , max(0,(n + 1)/2 - B[i]));	
	}
	if(re == 1000000000)	cout << "Impossible" << endl;
	else			cout << re << endl;
	return 0;
}