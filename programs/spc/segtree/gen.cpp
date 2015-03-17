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
#define maxn 1000000

typedef long long Int;
typedef unsigned long long UInt;
typedef vector <int> VI;
typedef pair <int, int> PII;

int main()
{
	cout << 3 << endl;
	for (int i = 0; i < 3; i++) {
		int n = rand() % 100000 + 1;
		int Q = rand() % 100000 + 1;
		cout << n << " " << Q << endl;
		for (int j = 0; j < n; j++) {
			cout << rand() % 100000 + 1 << " ";
		}
		cout << endl;
		
		while (Q--) {
			int flag = rand() % 2;
			if (flag == 0) {
				int a = rand() % n + 1;
				int b = rand() % n + 1;
				if (a > b) swap(a , b);
				cout << "query " << a << " " << b << endl; 
			} else {
				int a = rand() % n + 1;
				int b = rand() % n + 1;
				if (a > b) swap(a , b);
				cout << "update " << a << " " << b << endl; 
			}
		}
	}
	
	return 0;
}
