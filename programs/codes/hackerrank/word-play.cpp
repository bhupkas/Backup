/* bhupkas */

#include "bits/stdc++.h"

using namespace std;

typedef long long LL;

LL memo[305][305];

int win[305][305];

int main()
{
	int t;
	cin >> t;
	while(t--)
	{	
		string X,Y;
		cin >> X >> Y;
		memset(memo,0,sizeof(memo));
		for(int i = 0 ; i <= X.size() ; i++)	for(int j = 0 ; j <= Y.size() ; j++)	win[i][j] = 100000000;
		for(int i = 0 ; i < X.size() ; i++)
		{
			for(int j = 0 ; j < Y.size() ; j++)
			{
				if(X[i] == Y[j])
				{	
					if(j == 0)	memo[i+1][j+1] = memo[i][j+1] + 1LL , win[i+1][j+1] = 1;
					else		memo[i+1][j+1] = memo[i][j+1] + memo[i][j] , win[i+1][j+1] = win[i][j] + 1;
				}
				else
				{
					memo[i+1][j+1] = memo[i][j+1];
					win[i+1][j+1] = win[i][j+1] + 1;
				}	
			}
		}
		cout << memo[X.size()][Y.size()] << " ";
		if(memo[X.size()][Y.size()] == 0)
		{
			cout << -1 << endl;
			continue;
		}
		int re = 1000000000;
		for(int i = 0 ; i <= X.size() ; i++)	re = min(re, win[i][Y.size()]);
		cout << re << endl;
	}
	return 0;
}
