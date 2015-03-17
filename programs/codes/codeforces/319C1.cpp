/* bhupkas */

#include "bits/stdc++.h"

using namespace std;

int main()
{	
	int n,k;
	cin >> n >> k;
	vector < int > p(n),e(n);
	for(int i = 0 ; i < n ; i++)	cin >> p[i] >> e[i];
	vector < int > temp(n);
	int val;
	int re = 1000000000;
	int need;
	int ra;
	for(int mask = 0 ; mask < (1 << n) ; mask++)
	{
		need = 0;
		val = 0 ;
		for(int i = 0 ; i < n ; i++)	temp[i] = p[i];
		for(int i = 0 ; i < n ; i++)
		{
			if((1<<i) & mask)	 val++ , need += e[i];
			else			temp[i]++;
		}
		ra = 1;
		for(int i = 0 ; i < n ; i++)
		{
			if(temp[i] > val)	ra++;
			else if(temp[i] == val && !((1<<i) & mask))	ra++;
		}
		if(ra <= k)	re = min(re,need);
	}
	if(re == 1000000000)	cout << -1 << endl;
	else			cout << re << endl;
	return 0;
}
