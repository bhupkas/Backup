/* bhupkas */

using namespace std;

#include "bits/stdc++.h"

int main()
{
	int t,n,k;
	cin >> t;
	while(t--)
	{
		int temp;
		int cnt = 0;
		cin >> n >> k;
		for(int i = 0 ; i < n ; ++i)
		{
			cin >> temp;
			if(temp % 2 == 0)	cnt++;
		}
		if(k == 0 && cnt == n)
		{
			puts("NO");
			continue;
		}
		if(cnt >= k)	puts("YES");
		else		puts("NO");
	}
	return 0;
}