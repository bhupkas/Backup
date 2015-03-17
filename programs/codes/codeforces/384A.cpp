/* bhupkas */

#include "bits/stdc++.h"

using namespace std;

int main()
{
	int n;
	string str;
	cin >> n;
	if(n&1)
	{
		int re = 0;
		re = (n+1)/2 * (n+1)/2 + (n/2)*(n/2);
		cout << re << endl;
		for(int i = 1 ; i <= n ; i++)
		{
			if(i&1)
			{
				for(int j = 1 ; j <= n ; j++)	
				{
					if(j&1)	cout << "C";
					else	cout << ".";
				}
			}
			else
			{
				for(int j = 1 ; j <= n ; j++)	
				{
					if(j&1)	cout << ".";
					else	cout << "C";
				}
			}
			cout << endl;
		}
	}
	else
	{
		cout << (n/2) * n << endl;
		for(int i = 1 ; i <= n ; i++)
		{
			if(i&1)
			{
				for(int j = 1 ; j <= n ; j++)	
				{
					if(j&1)	cout << "C";
					else	cout << ".";
				}
			}
			else
			{
				for(int j = 1 ; j <= n ; j++)	
				{
					if(j&1)	cout << ".";
					else	cout << "C";
				}
			}
			cout << endl;
		}
	}
	return 0;
}
