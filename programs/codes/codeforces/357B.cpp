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
    int n,m;
    cin >> n >> m;
    int A[100005],B[100005],C[100005];
    REP(i,m)	cin >> A[i] >> B[i] >> C[i];
    int re[100005];
    REP(i,n)	re[i] = -1;
    REP(i,m)
    {
    	int a,b,c;
    	a = A[i] - 1;
    	b = B[i] - 1;
    	c = C[i] - 1;
    	vector < pair < int ,int > > v;
    	v.PB(MP(re[a],a));
    	v.PB(MP(re[b],b));
    	v.PB(MP(re[c],c));
    	sort(ALL(v));
    	if(v[2].FF == -1)
    	{
    		re[v[0].SS] = 1;
    		re[v[1].SS] = 2;
    		re[v[2].SS] = 3;
    	}
    	else if(v[1].FF == -1)
    	{	
    		if(v[2].FF == 1)
    		{
    			re[v[0].SS] = 2;
    			re[v[1].SS] = 3;
    		}
    		else if(v[2].FF == 2)
    		{
    			re[v[0].SS] = 1;
    			re[v[1].SS] = 3;
    		}
    		else
    		{
    			re[v[0].SS] = 1;
    			re[v[1].SS] = 2;
    		}
    	}
    	else if(v[0].FF == -1)
    	{
    		if(v[1].FF == 1 && v[2].FF == 2)
    		{
    			re[v[0].SS] = 3;
    		}
    		else if(v[1].FF == 1 && v[2].FF == 3)
    		{
    			re[v[0].SS] = 2;
    		}
    		else
    		{
    			re[v[0].SS] = 1;
    		}
    	}
    }
    REP(i,n)	cout << re[i] << " ";
    cout << endl;
    return 0;
}