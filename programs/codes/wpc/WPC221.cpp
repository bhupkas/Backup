#include <bits/stdc++.h>

using namespace std;
 
#define SZ(a) int((a).size())
#define PB push_back
#define ALL(c) (c).begin(),(c).end()
#define LLA(A) A.rbegin(), A.rend()
#define CPY(A, B) memcpy(A, B, sizeof(A))
#define BSC(A, x) (lower_bound(ALL(A), x) - A.begin())
#define PRESENT(c,x) ((c).find(x) != (c).end())
#define CPRESENT(c,x) (find(all(c),x) != (c).end()) // present in a container or not.
#define MP make_pair
#define REP(i,n) for(int _n=n, i=0;i<_n;++i)
#define REP1(i,n) for(int _n=n, i=1;i<=_n;++i)
#define FOR(i,a,b) for(int i=(a),_b=(b);i<_b;++i)
#define FOREACH(it,c) for(typeof((c).begin()) it=(c).begin();it!=(c).end();++it)
#define FF first
#define SS second
#define INPUT(a) freopen (a, "r", stdin)
#define OUTPUT(a) freopen (a, "w", stdout)
#define FORD(i, b, a) for (int i=int(b-1);i>=int(a);--i)
#define FILL(a, v) memset(a, v, sizeof(a));
#define DREP(a)                 sort(ALL(a)); a.erase(unique(ALL(a)),a.end()) // will make the vector unique and sorted order
#define DEBUG(args...)          {dbg,args; cerr<<endl;}
#define INF                     (int)1e9
#define LINF                    (long long)1e18

typedef long long LL;
typedef long double LD;
typedef vector <int> VI;
typedef vector <LL> VLL;
typedef vector <double> VD;
typedef vector<string> VS;
typedef vector <VI> VVI;
typedef pair <int,int> PII;
typedef pair <LL,LL> PLL;
typedef vector <PII > VPII;
typedef pair <double, double> PDD;
typedef vector <PDD> VPDD;

struct debugger { template<typename T> debugger& operator , (const T& v) {  cerr<<v<<" ";    return *this;  } } dbg;

template<class T> string i2s(T x) {ostringstream o; o << x; return o.str(); }
VS splt(string s, char c = ' ') {VS rv; int p = 0, np; while (np = s.find(c, p), np >= 0) {if (np != p) rv.PB(s.substr(p, np - p)); p = np + 1;} if (p < SZ(s)) rv.PB(s.substr(p)); return rv;}

void print(VI v, int sz = -1) { if (sz == -1) sz = SZ(v); cerr << "["; if (sz) cerr << v[0]; FOR (i, 1, sz) cerr << ", " << v[i]; cerr << "]" << endl; }
void print(VD v, int sz = -1) { if (sz == -1) sz = SZ(v); cerr << "["; if (sz) cerr << v[0]; FOR (i, 1, sz) cerr << ", " << v[i]; cerr << "]" << endl; }
void print(VS v, int sz = -1) { if (sz == -1) sz = SZ(v); cerr << "["; if (sz) cerr << v[0]; FOR (i, 1, sz) cerr << ", " << v[i]; cerr << "]" << endl; }
void print (PII v) { cerr << "{ " << v.FF << ", " << v.SS << " }"; }
void print (VPII v, int sz = -1) { if (sz == -1) sz = SZ(v); cerr << "[ "; if (sz) print (v[0]); FOR (i, 1, sz) { cerr << ", "; print (v[i]);} cerr << "]" << endl;}
void print(VVI v, int sz1 = -1, int sz2 = -1) { if (sz1 == -1) sz1 = SZ(v); if (sz2 == -1) sz2 = SZ(v[0]); cerr << "[ ---" << endl;if (sz1) cerr << " ", print(v[0], sz2);FOR(i, 1, sz1) cerr << " ", print(v[i], sz2);    cerr << "--- ]\n";}

const double EPS = 1e-9;
const int MOD = int(1e9) + 7;
const double PI = acos(-1.0); //M_PI;

/////////////////////////////////////////////////////////////////

void pre()
{

}

int main()
{
	pre();
	int t;
	cin >> t;
	int A[10][10];
	int C[10][10];
	getchar();
	string str1,str2;
	while(t--)
	{
		str1 = "";
		str2 = "";
		cin >> str1 >> str2;	
		REP(i,10)	REP(j,10)	A[i][j] = C[i][j] = 0;
		int si = str1.size();
		REP(i,si)	A[str1[i] - '0' - 1][str2[i] - '0' - 1]++;
		REP(i,9)
		{
			REP(j,9)
			{
				REP(k,9)
				{
					C[i][j] += ((abs)(j - k)) * A[i][k];
				}
			}
		}
		VI v;
		int temp1,ans = 1000000000;
		REP(i,9)	v.PB(i);
		do
		{	
			temp1 = 0;
			REP(i,9)	temp1 += C[i][v[i]];
			ans = min(ans,temp1);
		}while (next_permutation(ALL(v)));
		cout<<ans<<endl;		

	}
	return 0;	 
}