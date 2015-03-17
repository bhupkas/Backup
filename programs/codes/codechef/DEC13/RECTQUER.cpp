/* bhupkas */

#include "bits/stdc++.h"

using namespace std;

int n,q;
int A[305][305];
int cnt[305][305][11];

int main()
{
	memset(cnt,0,sizeof(cnt));
	cin >> n;
	for(int i = 1 ; i <= n ; i++)	for(int j = 1 ; j <= n ; j++)	cin >> A[i][j] , cnt[i][j][A[i][j]]++;
	for(int i = 1 ; i <= n ; i++)
	{
		for(int j = 1 ; j <= n ; j++)
		{
			for(int k = 1 ; k <= 10 ; k++)
			{
				cnt[i][j][k] += cnt[i][j-1][k] + cnt[i-1][j][k] - cnt[i-1][j-1][k];
			}
		}
	}
	cin >> q;
	int x1,y1,x2,y2;
	int re;
	while(q--)
	{
		cin >> x1 >> y1 >> x2 >> y2;
		re = 0;
		for(int i = 1 ; i <= 10 ; i++)
		{
			if(cnt[x2][y2][i] - cnt[x1 - 1][y2][i] - cnt[x2][y1 - 1][i] + cnt[x1 - 1][y1 - 1][i]  > 0)	re++;
		}
		cout << re << endl;
	}
	return 0;
}
