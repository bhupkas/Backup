/* bhupkas */

#include "bits/stdc++.h"

using namespace std;

int A[1005];
int main()
{
	for(int i = 1 ; i <= 1000 ; i++)
	{
		int cnt = 0;
		int num = i;
		while(num)
		{
			if(num&1)	
			{
				cnt++;
			}
			num/=2;
		}
		A[i] = A[i-1]+cnt;
	}
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		cout << A[n] << endl;
	}
	return 0;
}
