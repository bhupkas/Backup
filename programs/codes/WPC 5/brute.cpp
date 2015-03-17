#include "bits/stdc++.h"

using namespace std;

int main()
{
	for(int k = 1 ; k <= 100 ; k += 2)
	{
		int cnt = 0 ; 
		for(int i = 0 ; i < 1000 ; ++i)
		{
			for(int j = i ; j < 1000 ; ++j)
			{
				if(k <= i && k * k + i * i == j * j)	cnt++;			
			}		
		}
		cout << k << " " << cnt << endl;
	}
	return 0;
}
