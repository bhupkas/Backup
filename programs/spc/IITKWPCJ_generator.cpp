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
#include <time.h>
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

int main(int argc, char *argv[])
{
	freopen ("output.txt", "w", stdout);
	//cout << "hi" << endl;
	//cout << 1000 << endl;
    //    registerGen(argc, argv);
	//cout << 100 << endl;
	//for (int i = 0; i < 100; i++) {
    //		cout << rnd.next("[a-z]{1,10000}") << " ";
	//	cout << rnd.next("[a-z]{1,10000}") << endl;		
	//cout << rnd.next("[a-z]{1,100}")<<endl; 
	FOR(i,0,4997)
		FOR(j,0,20)
			cout<<(char)(j+'a');
	cout<<endl;
	return 0;
}
