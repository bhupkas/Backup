/* bhupkas */

#include "bits/stdc++.h"

using namespace std;

typedef long long LL;

LL L,R,U,D,n,x,y,c;

LL cal(LL L , LL U , LL t)
{
	LL a,b;
	if(U == 0) return 0;
	a = min(t-L,U);
	b=(a+U)*(U-a+1)/2+(L+1-(U-a+1))*U;
	return b;
}

LL val(LL t)
{
	L = min(y-1,t);
	U = min(x-1,t);
	R = min(n-y,t);
	D = min(n-x,t);
	return 1+cal(L,U,t)+cal(U,R,t)+cal(R,D,t)+cal(D,L,t);
}

LL bsearch()
{
	LL l = 0 , r = 2000000009;
	while(l <= r)
	{
		LL mid = (l + r) / 2;
		if(mid == 0 && val(mid) >= c)	return mid;
		if(val(mid) >=c && val(mid - 1) < c)	return mid;
		if(val(mid) >= c)	r = mid - 1;
		else			l = mid + 1;
	}	
}

int main()
{
	cin >> n >> x >> y >> c;
	cout << bsearch() << endl;
	return 0;	
}
