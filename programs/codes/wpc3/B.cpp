/* bhupkas */

#include "bits/stdc++.h"

using namespace std;

int main()
{
	int t;
	int n;
	cin >> t;
	int A[100005];
	while(t--)
	{
		cin >> n;
		bool ok = true;
		for(int i = 0 ; i < n ; i++)	
		{
			cin >> A[i] ;
			if(A[i] > i)	ok = false;	
		}
		if(ok)	puts("YES");
		else	puts("NO");
	}	
}
