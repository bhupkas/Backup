/* bhupkas */

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

vector < string > maze;
vector < pair < int , int > > v;

bool visi[505][505];

int n,m,k;

bool check(int x,int y)
{
	return ( x>=0 && x < n && y >=0 && y < m);
}

int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};

pair < int , int > par[505][505];
int deg[505][505];

void dfs(int x , int y)
{
	visi[x][y] = true;
	REP(i,4)
	{
		int xk = x + dx[i];
		int yk = y + dy[i];
		pair <int , int > p;
		if(check(xk,yk) && maze[xk][yk] == '.')
		{
			p.first = x , p.second = y;
			if(visi[xk][yk] ==  false)	dfs(xk,yk) , deg[x][y]++ , par[xk][yk] = p;
		}
	}
}

int main()
{
   pre();
   
   string str;
   memset(visi,false,sizeof(visi));
   memset(deg,0,sizeof(deg));
   cin >> n >> m >> k;
   REP(i,n)	
   {
   		cin >> str;
   		maze.push_back(str);
   }

   REP(i,n)
   {
   		REP(j,m)	if(maze[i][j] == '.' && !visi[i][j])	dfs(i,j);
   }
   int val = 0;
   set < pair < int , pair < int , int > > > ss;
   set < pair < int , pair < int , int > > > :: iterator it;;
   REP(i,n)	REP(j,m)	if(maze[i][j] == '.')	ss.insert(MP(deg[i][j],MP(i,j)));
   while(val < k)
   {
   		it = ss.begin();
   		int x = (*it).second.first;
   		int y = (*it).second.second;
   		ss.erase(ss.begin());
   		v.PB(MP(x,y));
   		ss.erase(ss.find(MP(deg[par[x][y].first][par[x][y].second],MP(par[x][y].first,par[x][y].second))));
   		ss.insert(MP(deg[par[x][y].first][par[x][y].second]-1,MP(par[x][y].first,par[x][y].second)));
   		deg[par[x][y].first][par[x][y].second]--;
   		val++;
   }
   REP(i,k)	maze[v[i].first][v[i].second] = 'X' ;
   REP(i,n)	cout << maze[i] << endl;
   return 0;
}
