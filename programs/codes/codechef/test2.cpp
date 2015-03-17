// Author : Abhisar Singhal
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <queue>
#include <algorithm>
#include <vector>
#include <cstring>
#include <stack>
#include <cctype>
#include <utility>   
#include <map>
#include <string>  
#include <climits> 
#include <set>
#include <string>    
#include <sstream>
#include <utility>   
#include <ctime>
#include <cassert>
#include <fstream>
using namespace std;

typedef long long LL;
typedef vector<int> VI;
typedef pair<int, int> II;
typedef vector<long long> VLL;
typedef vector<bool> VB;

#define SZ(A) ((int)A.size())
#define LEN(A) ((int)A.length())
#define MS(A) memset(A, 0, sizeof(A))
#define MSV(A,a) memset(A, a, sizeof(A))
#define MAX(a,b) ((a >= b) ? (a) : (b))
#define MIN(a,b) ((a >= b) ? (b) : (a))
#define ABS(a) (((a) > 0) ? (a) : (-a))
#define MP make_pair
#define X first
#define Y second
#define PB push_back
#define FOUND(A, x) (A.find(x) != A.end())
#define getcx getchar_unlocked
#define INF (int(1e9))
#define INFL (LL(1e18))
#define EPS 1e-12

#define chkbit(s, b) (s & (1<<b))
#define setbit(s, b) (s |= (1<<b))
#define clrbit(s, b) (s &= ~(1<<b))

#define REP(i, n) for(int i = 0; i < (n); i++)
#define FOR(i, a, n) for(int i = a; i < n; i++)
#define REV(i, a, n) for(int i = a; i > n; i--)
#define FORALL(itr, c) for(itr = (c).begin(); itr != (c).end(); itr++)
#define ALL(A) A.begin(), A.end()
#define LLA(A) A.rbegin(), A.rend()
//int dx[] = {-1, 0, 1, 0}, dy[] = {0, 1, 0, -1};
//int dx[] = {1, 1, 1, 0, 0, -1, -1, -1}, dy[] = {1, 0, -1, 1, -1, 1, 0, -1};
inline void inp( int &n ) {
	n=0; int ch = getcx(); int sign = 1;
	while(ch < '0' || ch > '9') { if(ch == '-') sign=-1; ch = getcx(); }
	while(ch >= '0' && ch <= '9') { n = (n << 3) + (n << 1) + ch - '0', ch = getcx(); }
	n = n * sign;
}
// sieve and factorize
const int LIM = 100000;
vector<int> P;
bool mark[LIM + 5];
int isp[LIM+5];
void init() {
	P.PB(2);
	for(int i = 3; i <= sqrt(LIM); i += 2){
		if (!mark[i]) {
			for(int j=i*i; j <= LIM; j += (i<<1)) {
				mark[j] = 1;
			}
		}
	}
	isp[2] = 1;
	for(int i=3; i <= LIM; i+=2) if(!mark[i]) {
		P.PB(i);
	}
	isp[3] = 1;
	FOR(i, 4, 100004){
		if(!(i&1)){
			isp[i] = isp[i-1];
		}else{
			isp[i] = isp[i-1] + (!mark[i]);
		}
	}
}

string s;

int main(){
	init();
	ios_base::sync_with_stdio(0);
	int t;
	cin >> t;
	while(t--){
		cin >> s;
		LL ans = 0;
		REP(i, LEN(s)-1){
			if(s[i] == s[i+1]) ans++;
		}
		int N = LEN(s);
		int i, j, k, rp, R[2][N+1];

		s = "@" + s + "#"; // insert 'guards' to iterate easily over s

		for(j = 0; j <= 1; j++)
		{
			R[j][0] = rp = 0; i = 1;
			while(i <= N)
			{
				while(s[i - rp - 1] == s[i + j + rp]) rp++;
				R[j][i] = rp;
				k = 1;
				while((R[j][i - k] != rp - k) && (k < rp))
				{
					R[j][i + k] = min(R[j][i - k],rp - k);
					k++;
				}
				rp = max(rp - k,0);
				i += k;
			}
		}

		s = s.substr(1,N); // remove 'guards'
		for(i = 1; i <= N; i++)
		{
		//	cout << R[0][i] << " " << R[1][i] << endl;
			int a = R[1][i];
			a <<= 1;
			a++;
			ans += isp[a];
		//	cout << a << endl;
		}
		cout << ans << endl;
	}
	return 0;
}

