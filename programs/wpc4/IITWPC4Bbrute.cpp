/* bhupkas */

#include "bits/stdc++.h"

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int cnt = 0;
		for(int a = 1 ; a < n  ; a++)
		{	
			for(int b = a  ; b < n  ; b++)
			{
				int c = n - a - b;
				if(c < b)	continue;
				if((a+b) > c && (b+c) > a && (a+c) > b)	cnt++;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}
