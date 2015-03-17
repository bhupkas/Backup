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

	const double PI = acos(-1.0); //M_PI;

	/////////////////////////////////////////////////////////////////
	const LL MOD = LL((LL)(1e9) + 7);

	const LL MAXN = 100005;

	LL fact[MAXN];
	LL A[100005];

	void pre()
	{
		fact[0] = 1;
		for (LL i = 1; i <= 100002; i++)
			fact[i] = (fact[i  - 1] * i) % MOD;
	}

	bool iflucky(LL num)
	{
		while(num)
		{
			if(num % 10 != 4 && num % 10 != 7)	return false;
			num /= 10;
		}
		return true;
	}

	LL dp[1050][1050];

	vector<LL> v;


	LL modpow (LL a, LL b, LL mod)
	{
	    LL res = 1;
	    while (b)
	    {
	        if (b & 1)
	            res = (res * a) % mod;
	        a = (a * a) %mod;
	        b >>= 1;
	    }

	    return res;
	}

	LL NCK (LL n, LL r)
	{
	    if (r > n)
	        return 0;

	    LL ans = fact[n];
	    LL res = (fact[r] * fact[n - r]) % MOD;

	    res = modpow (res, MOD - 2, MOD);
	    
	    ans = (ans * res) % MOD;

	    return ans;
	}

	int main()
	{
	        pre();
	        LL n,k;
	        cin>>n>>k;
	        REP(i,1050)	REP(j,1050)	dp[i][j] = 0;
	        REP(i,n)	cin>>A[i];
	        LL ans = 0;
	        map<LL,LL> mymap;
	        LL remain = 0;
	        REP(i,n)	if(iflucky(A[i]))	mymap[A[i]]++;	else	remain++;
	        
	        map<LL,LL> :: iterator it;
	        for(it = mymap.begin(); it != mymap.end(); it++)       	v.PB((*it).SS);
			LL si = SZ(v);  
	    	if(!v.empty())
	    	{
	    		dp[0][1] = v[0];
		        FOR(i,0,si)	dp[i][0] = 1;
		        FOR(i,1,si)
		        {
		        	FOR(j,1,i + 2)
		        	{
		        		assert (dp[i][j] == 0);
		        		dp[i][j] = ((dp[i-1][j]) + dp[i-1][j-1]*v[i]) % MOD;
		        	}
		        }

	    		FOR(i,0,si + 1)
		        {
		        		ans = (ans + (dp[si-1][i] * NCK(remain,k - i))%MOD)%MOD;
		        }	
	    	}
	    	else
	    	{
	    		ans = NCK(remain,k);
	    	}
	        
	        assert (ans >= 0);
	        //while(ans < 0)	ans += MOD;

	        cout<<ans<<endl;
	        return	0;
	}