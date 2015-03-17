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


LL MAXP = 10000007;

bool P[10000010];
vector<LL> p;

void pre()
{
	REP(i,MAXP)	P[i] = true;
	P[0] = P[1] =  false;
	for(LL i = 2;i * i < MAXP;i++)
	{
		if(P[i])
		{
			for(LL j = i;j <= MAXP/i ;j++)
				P[i*j] = false;
		}
	}
	FOR(i,2,MAXP)	if(P[i])	p.PB(i);
}

bool isprime(LL num)
{
	if(num < MAXP)	return P[num];
	for(LL i = 0; p[i] * p[i] <= num; i++)	
	{
		if(num % p[i] == 0)	return false;
	}	
	return true;
}

int main()
{
        pre();
        LL q,a,b;
        LL count = 0;
        cin>>q;
        map<LL,LL> mymap;
        map<LL,LL>::iterator it,it1;
        if(q == 1 || isprime(q))
        {
        	cout<<1<<endl<<0<<endl;
        	return 0;
        }
        for(LL i = 0;p[i] * p[i] <= q;i++)
        {
        	if(q % p[i] == 0)	
        	{
        		while(q % p[i] == 0)	q = q/p[i],count++;
        		mymap[p[i]] = count;
        	}
        }
        if(q != 1)	count++,mymap[q] = 1;
        if(count == 1)
        {
        	cout<<1<<endl<<0<<endl;
        	return 0;
        }
        else if(count == 2)
        {
        	cout<<2<<endl;
        	return 0;
        }
        else
        {
        	it = mymap.begin();
        	if((*it).SS > 1)	cout<<1<<endl<<(*it).FF*(*it).FF<<endl;
        	else				
        	{
        		LL temp = 1;
        		temp = (*it).FF;
        		it++;
        		temp = temp * (*it).FF;
        		cout<<1<<endl<<temp<<endl;
        	}
        }
        return 0;
}