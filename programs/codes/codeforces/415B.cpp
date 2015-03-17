/* bhupkas */

using namespace std;

#include "bits/stdc++.h"

typedef long long LL;

LL bsearch(LL val , double frac, LL num)
{
	LL l,r;
	l = 0;
	r = num+5;
	if((floor)(frac * (double)(num)) == val && (floor)(frac * (double)(num-1)) < val)	return num;
	while(l < r)
	{
		LL mid = (l + r) >> 1;
		if((floor)(frac * (double)(l)) == val && (floor)(frac * (double)(l-1)) < val)	return l;
		if((floor)(frac * (double)(r)) == val && (floor)(frac * (double)(r-1)) < val)	return r;
		if((floor)(frac * (double)(mid)) == val && (floor)(frac * (double)(mid-1)) < val)	return mid;
		if((floor)(frac * (double)(mid)) >= val)	r = mid - 1;
		else	l = mid + 1;
	}
}

int main()
{
	LL n,a,b;
	cin >> n >> a >> b;
	LL gc = __gcd(a,b);
	a/=gc;
	b/=gc;
	vector < int > v(n);
	for(int i = 0 ; i < n ; ++i)	cin >> v[i];
	for(int i = 0 ; i < n ; ++i)	
	{
		double foo = (double)(a) / (double)(b);
		double te = (double(v[i]) * foo);
		LL val = (floor)(te);		
		cout << v[i] - bsearch(val,foo,v[i]) << " ";		
	}
	cout << endl;
	return 0;
}
