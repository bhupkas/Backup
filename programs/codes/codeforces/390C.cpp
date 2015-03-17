/* bhupkas */

#include "bits/stdc++.h"

using namespace std;

int A[100005],B[100005];

int main()
{
	int n,k,w;
	cin >> n >> k >> w;
	int l,r;
	string str;
	cin >> str;
	B[1] = str[0] - '0';
	for(int i = 2 ; i <= n ; i++)	B[i] = B[i-1] + str[i-1] - '0';
	A[1+k-1] = str[k-1] - '0';
	for(int i = k + 1 ; i <= n ; i++)	A[i] = A[i - k] + str[i-1] - '0';
	int ans = 0;
	for(int i = 0 ; i < w ; i++)
	{	
		ans = 0;
		cin >> l >> r;
		ans += (r - l + 1)/k - (A[r] - A[l-1]);
		ans += B[r] - B[l-1] - (A[r] - A[l-1]);
		cout << ans << endl;
	}
	return 0;
}
