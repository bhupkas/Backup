/* bhupkas */

#include "bits/stdc++.h"

using namespace std;

typedef long long LL;

LL po(LL a , LL b)
{	
	LL re = 1;
	for(LL i = 0 ; i < b ; i++)	re = re*a;
	return re;	
}

int main()
{
	vector < long long > v;
	LL n;
	cin >> n;
	for(LL i = 1 ; i <= n ; i++)	v.push_back(po(i,i));
	LL cnt = 0;
 	for(int i = 0 ; i < (1<<n) ; i++)
	{
		LL sum = 0;
		for(int j = 0 ; j < n ; j++)	if((1<<j) & i)	sum = (sum + v[j])%250;
		if(sum % 250 == 0)	cnt++;
	}
	cout << cnt << endl;
	return 0;
}
