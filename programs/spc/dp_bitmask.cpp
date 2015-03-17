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

double dp[(1 << 15) + 5];

double findArea (double a , double b , double c)
{	
	double  s = (a + b + c) / 2.0;
	
	return sqrt (s * (s - a) * (s - b) * (s - c));
}

int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		int n;		
		cin >> n;
		vector<int> a;
		REP (i , n)
		{
			int temp;
			cin >> temp;
			a.push_back (temp);
		}
		
		memset (dp , 0 , sizeof (dp));
		for (int mask = 0; mask < (1 << n); mask ++)
		{
			//cout << "masl " << mask << endl;
			for (int i = 0; i < n; i++)
			{
				for (int j = i + 1; j < n; j++)
				{
					for (int k = j + 1; k < n; k++)
					{
						if ( (mask & (1 << i)) && (mask & (1 << j)) && (mask & (1 << k)))
						{
							VI temp;
							temp.push_back (a[i]);
							temp.push_back (a[j]);
							temp.push_back (a[k]);
							
							sort (temp.begin() , temp.end());

							//cout << "reached there" << endl;							
														
							if (temp[0] + temp[1] > temp[2])
							{
								//cout << "reached" << endl;
								double area = findArea (temp[0] , temp[1] , temp[2]);
								dp[mask] = max (dp[mask] , dp[(mask ^ (1 << i) ^ (1 << j) ^ (1 << k))] + area);
							}
						}
					}
				}
			}
		}
		
		printf ("%.6lf\n" , dp[(1 << n) - 1]); 
	}

	return 0;
}
