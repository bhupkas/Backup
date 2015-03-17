#define _CRT_SECURE_NO_WARNINGS
#pragma comment(linker, "/stack:16777216")
#include <string>
#include <vector>
#include <map>
#include <list>
#include <iterator>
#include <set>
#include <queue>
#include <iostream>
#include <sstream>
#include <stack>
#include <deque>
#include <cmath>
#include <memory.h>
#include <cstdlib>
#include <cstdio>
#include <cctype>
#include <algorithm>
#include <utility>
using namespace std;

#define FOR(i, a, b) for(int i = (a); i < (b); ++i)
#define RFOR(i, b, a) for(int i = (b) - 1; i >= (a); --i)
#define REP(i, N) FOR(i, 0, N)
#define RREP(i, N) RFOR(i, N, 0)
#define FILL(A,value) memset(A,value,sizeof(A))

#define ALL(V) V.begin(), V.end()
#define SZ(V) (int)V.size()
#define PB push_back
#define MP make_pair
#define Pi 3.14159265358979

typedef long long Int;
typedef unsigned long long UInt;
typedef vector <int> VI;
typedef pair <int, int> PII;

const Int INF =  1000000000000000001LL;
const int MAX = 1005;

Int cnt[1 << 10 + 5];

vector<int> findDigits(Int n)
{
	vector<int> ans;
	while (n)
	{
		ans.push_back(n % 10);
		n /= 10;
	}
	
	return ans;
}

int main()
{
//	freopen("input_K.txt" , "r" , stdin);
	int T;
	cin >> T;
	while (T--)
	{
		int n;
		cin >> n;
		
		REP (i , n)
		{
			Int temp;
			cin >> temp;
			
			vector<int> dig = findDigits (temp);
			
			int mask = 0;
			
			REP (j , dig.size())
			{
				mask |= (1 << dig[j]);	
			}
			
			cnt[mask] ++;
		}		
				
				
		Int ans = 0;
		
		REP (i , 1 << 10)
		{
			for (int j = i + 1; j < (1 << 10) ; j++)
			{
				if (i & j)
					ans += cnt[i] * cnt[j];
			}
		}
		
		REP (i , 1 << 10)
		{
			ans += (cnt[i] * (cnt[i] - 1)) / 2;
		}
		
		cout << ans << endl;
		
		// clear data
		
		REP ( i , 1 << 10)
			cnt[i] = 0;
	}	
	 //fprintf(stderr, "%.2lf\n", clock()*1.0/CLOCKS_PER_SEC );
	return 0;
}
