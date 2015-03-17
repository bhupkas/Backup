/* bhupkas */

#include "bits/stdc++.h"

using namespace std;

int A[1005][1005];
int B[1005][1005];
int n,m;

int read () {
	bool minus = false;
	int result = 0;
	char ch;
	ch = getchar();
	while (true) {
		if (ch == '-') break;
		if (ch >= '0' && ch <= '9') break;
		ch = getchar();
	}
	if (ch == '-') minus = true; else result = ch-'0';
	while (true) {
		ch = getchar();
		if (ch < '0' || ch > '9') break;
		result = result*10 + (ch - '0');
	}
	if (minus)
		return -result;
	else
		return result;
}

int memo[1005][1005];

int main()
{
	int t;
	int q;
	t = read();
	int x1,x2,y1,y2;
	int re;
	while(t--)
	{	
		n = read();
		m = read();
		q = read();
		for(int i = 0 ; i < n ; i++)	for(int j = 0 ; j < m ; j++)	A[i][j] = read();
		for(int i = 0 ; i < n ; i++)	for(int j = 0 ; j < m ; j++)	B[i][j] = read();
		memset(memo,0,sizeof(memo));
		for(int i = 1 ; i <= n ; i++)
			for(int j = 1 ; j <= m ; j++)
				memo[i][j] = (int)(A[i-1][j-1] == B[i-1][j-1]) + memo[i-1][j] + memo[i][j-1] - memo[i-1][j-1];
		while(q--)
		{
			cin >> x1 >> y1 >> x2 >> y2;
			re = memo[x2][y2] + memo[x1 - 1][y1 - 1] - memo[x1 - 1][y2] - memo[x2][y1 - 1];
			printf("%d\n",re);
		}
	}
	return 0;
}
