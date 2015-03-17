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

int dp[1005];

int main()
{
    pre();
    int t;
    VI v;
    cin >> t;
    LL total = 0;
    double avg;
    int te;
    while(t--)
    {

    	total = 0;
    	v.clear();
    	REP(i,6)	cin >> te, v.PB(te);
    	int i;
    	set <PII> myset;
    	for(i=0;i<1001;i++)	dp[i]=INF;
    	REP(k,6)	dp[v[k]] = 1;
		int te3,te4,si;
		REP(k,6)	myset.insert(MP(1,v[k]));
		set<PII>::iterator it;
		while(!myset.empty())
			{
				it=myset.begin();
				te4=(*it).second;
				myset.erase(myset.begin());
				REP(k,6)
				{
					if(te4 + v[k] <=1000)
					{
						if(dp[te4] + 1 < dp[te4 + v[k]])	
						{
						if(myset.find(MP(dp[te4 + v[k]],te4+v[k]))!=myset.end())
							myset.erase(MP(dp[te4 + v[k]],te4+v[k]));
						dp[te4 + v[k]] = dp[te4] + 1;
						myset.insert(MP(dp[te4 + v[k]],te4+v[k]));
						}	
					}
				}
				REP(k,6)
				{
					if(te4 - v[k] > 0)
					{
						if(dp[te4] + 1 < dp[te4 - v[k]])	
						{
						if(myset.find(MP(dp[te4 - v[k]],te4-v[k]))!=myset.end())
							myset.erase(MP(dp[te4 - v[k]],te4-v[k]));
						dp[te4 - v[k]] = dp[te4] + 1;
						myset.insert(MP(dp[te4 - v[k]],te4-v[k]));
						}	
					}
				}
			}
    	int ma = -1;
    	FOR(i,1,101)
    	{
    		ma = max(dp[i],ma);
    		total += (LL)(dp[i]);
    	}
    	avg = (double)(total)/100.0;
    	printf("%0.2lf %d\n",avg,ma);
    }
    return 0;
}