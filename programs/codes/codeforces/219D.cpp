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


#define N 200010
vector < pair < int, bool > > adj[N + 5];
int n;

bool visited[N + 5];

int smalldp[N + 5];
int largedp[N + 5];

void dfs (int vertex)
{
	visited[vertex] = true;
	smalldp[vertex] = 0;
	REP(i,adj[vertex].size())
	{
		if (!visited[adj[vertex][i].first])
		{
			dfs (adj[vertex][i].first);
			if (!adj[vertex][i].second)	smalldp[vertex] += 1 + smalldp[adj[vertex][i].first];
			else					smalldp[vertex] += smalldp[adj[vertex][i].first];
		}
	}
		
}

void dfs1 (int vertex)
{
	visited[vertex] = true;
	REP(i,adj[vertex].size())
	{
		if (!visited[adj[vertex][i].first])
		{
			if (!adj[vertex][i].second)	largedp[adj[vertex][i].first] = largedp[vertex] - 1;
			else					largedp[adj[vertex][i].first] = largedp[vertex] + 1;
			dfs1(adj[vertex][i].first);
		}
	}
		
}

int main()
{
        int n;
        cin>>n;
        int c1,c2;
        REP(i,n-1)
        {
        	cin >> c1 >> c2;
        	c1 --;
        	c2 --;
        	adj[c1].PB(MP(c2,true));
			adj[c2].PB(MP(c1,false));
        }
        memset(visited,false,sizeof(visited));
        dfs(0);
        memset(visited,false,sizeof(visited));
        largedp[0] = smalldp[0];
		dfs1(0);
		VI re;
		int mi = INF;
		REP(i,n)	mi = min (mi, largedp[i]);
		REP(i,n)	if (largedp[i] == mi)	re.PB(i + 1);

		cout << mi << endl;
		int si = re.size();
		REP(i,si)	cout << re[i] << " ";
		cout << endl;
        return 0;
}