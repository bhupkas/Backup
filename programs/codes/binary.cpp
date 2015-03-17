#include "bits/stdc++.h"

using namespace std;

int n;
int A[100000];
int x;

int bsearch()
{
	int l = 0 ,r = n - 1;
	while(l <= r)
	{
		int mid = (l + r)/2;
		if(mid == 0 && A[mid] > x)	return 0;
		if(A[mid] > x && A[mid - 1] <= x)	return mid;
		else if(A[mid] > x)	r = mid - 1;
		else			l = mid + 1;
	}
	return -1;
}

int myBinarysearch () {
	int lo = 0, hi = n;
	while (lo < hi) {
		int mid = (lo + hi) / 2;
		if (A[mid] <= x) lo = mid + 1;
		else hi = mid;
	}
	if (hi == n) hi = -1;
	return hi;
}

int main()
{
	cin >> n;
	for(int i = 0 ; i < n ; i++)	cin >> A[i];
	sort(A,A+n);
	cin >> x;
	int idx = bsearch();
	int idx1 = myBinarysearch ();
	assert (idx == idx1);
	if(idx == -1)	cout << "Impossible" << endl;
	else		cout << idx << endl;
	return 0;
}
