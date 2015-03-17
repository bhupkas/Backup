#include "bits/stdc++.h"

using namespace std;

typedef long long LL;

LL A[100005],B[100005];

int main()
{
	LL n , m;
	cin >> n ;
	for(int i = 1 ; i <= n ; ++i)	cin >> A[i] , B[i] = A[i];
	sort(B+1,B+n+1);
	A[0] = 0;
	B[0] = 0;
	for(int i = 1 ; i <= n ; ++i)	A[i] += A[i-1] , B[i] += B[i-1];
	cin >> m;
	while(m--)
	{
		int l , r , t;
		cin >> t >> l >> r ;
		if(t == 1)
		{
			cout << A[r] - A[l-1] << endl;
		}
		else
		{
			cout << B[r] - B[l-1] << endl;
		}
	}
	return 0;
}
