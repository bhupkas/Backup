/* bhupkas */

#include "bits/stdc++.h"

using namespace std;

typedef long long LL;

LL A[1005],B[1005],C[1005],D[1005],E[1005],F[1005];

int main()
{
	int n,m;
	cin >> n >> m;
	for(int i = 0 ; i < n ; i++)	cin >> A[i] >> B[i] >> C[i];
	for(int i = 0 ; i < m ; i++)	cin >> D[i] >> E[i] >> F[i];
	LL re = 0;
	for(int i = 0 ; i < n ; i++)
	{
		for(int j = 0 ; j < m ; j++)
		{
			if(A[i] >= D[j] && A[i] <= D[j] + F[j] && E[j] >= B[i] && E[j] <= B[i] + C[i])	
			{
				re = max(re , min(A[i] - D[j] , min ( D[j] + F[j] - A[i] , min (E[j] - B[i] , B[i] + C[i] - E[j]))));
			}
		}
	}
	cout << re << endl;
	return 0;
}
