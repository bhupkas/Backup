/* bhupkas */

#include "bits/stdc++.h"

using namespace std;

int main()
{	
	long long curr = 24;
	int cnt = 0;
	while(1)
	{	
		if(cnt == (int)(1e9))	break;
		int sq = (int)sqrt(curr);
		if(sq * sq == curr)	break;
		curr += 48LL;
		cnt++;
	}
	cout << cnt << endl;
	cout << curr << endl;
	return 0;
}
