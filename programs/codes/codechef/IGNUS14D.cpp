/* bhupkas */

#include "bits/stdc++.h"

using namespace std;

int cnt[100005];

int read () 
{
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

int main()
{
	int t,n,q;
	t = read();
	deque<int> Q;
	int a,b;
	int curr;
	int si;
	while(t--)
	{
		si = 0;
		Q.clear();
		n = read();
		q = read();
		memset(cnt,0,sizeof(cnt));
		while(q--)
		{
			a = read();
			b = read();
			if(a == 1)
			{	
				Q.push_back(b);
				if(cnt[b] == 0)	si++;
				cnt[b]++;
				if(si > n)
				{
					while(si > n)
					{
						curr = Q.front();
						Q.pop_front();
						cnt[curr]--;
						if(cnt[curr] == 0)	si--;
					}
				}
			}
			else
			{	
				if(cnt[b] > 0)	puts("YES");
				else		puts("NO");
			}	
		}
	}
	return 0;	
}
