/* Team name: Omega
*  Problem name: CAOS2 Sept'13 Long 
*/
#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
 
using namespace std;
 
typedef long long LL;
typedef long double LD;
typedef vector <int> VI;
typedef vector <double> VD;
typedef vector<string> VS;
typedef vector <VI> VVI;
typedef pair <int,int> PII;
typedef pair <LL,LL> PLL;
typedef vector <PII > VPII;
typedef pair <double, double> PDD;
typedef vector <PDD> VPDD;
 
const double EPS = 1e-9;
const int MOD = int(1e9) + 7;
const double PI = acos(-1.0); //M_PI;
 
#define SZ(a) int((a).size())
#define PB push_back
#define ALL(c) (c).begin(),(c).end()
#define LLA(A) A.rbegin(), A.rend()
#define CPY(A, B) memcpy(A, B, sizeof(A))
#define BSC(A, x) (lower_bound(ALL(A), x) - A.begin())
#define ERS(A, P) A.erase(A.begin() + P)
#define PRESENT(c,x) ((c).find(x) != (c).end())
#define NOT_PRESENT(c,x) (find(all(c),x) != (c).end())
#define MP make_pair
#define REP(i,n) for(int _n=n, i=0;i<_n;++i)
#define FOR(i,a,b) for(int i=(a),_b=(b);i<_b;++i)
#define FOREACH(it,c) for(typeof((c).begin()) it=(c).begin();it!=(c).end();++it)
#define FI first
#define SE second
#define INPUT(a) freopen (a, "r", stdin)
#define OUTPUT(a) freopen (a, "w", stdout)
#define MAXN 100000
#define DWN(i, b, a) for (int i=int(b-1);i>=int(a);--i)
#define FILL(a, v) memset(a, v, sizeof(a));
 
#define DEBUG(x) cout<<#x<<" :"<<x<<endl;
 
 
template <class T>
void  printV (vector<T> a) {
        REP (i, SZ(a)) cout<<a[i]<<" ";
        cout<<endl;
}
 
template <class T>
void  printA (T a[],int n) {
        REP (i, n) cout<<a[i]<<" ";
        cout<<endl;
}
 
template <class T>
void  printVV (vector<vector<T> > a) {
        REP (i, SZ(a)) {
                REP(j,SZ(a[0])) cout<<a[i][j]<<" ";
                cout<<endl;
        }
}
 
template <class T>
void  printAA (T a[],int n) {
        REP (i, n) {
                REP (j,n) cout<<a[i]<<" ";
                cout<<endl;
        }
}
 
///////////////////////////////////////////////////////////////////////////////////

VI p;
bool P[1005];
int upto[1005];

void pre()
{
        int i,j;
        REP(i,1005)     P[i] = true;
        P[0] = P[1] = false;
        for(int i=2 ; i*i < 1005; i++)
        {
                if(P[i])
                {
                        for(int j = i ;j <= 1005/i; j++)
                                P[i*j] = false;
                }
        }
        REP(i,1005)     if(P[i])        p.PB(i);
        upto[0] = 0;
        upto[1] = 0;
        FOR(i,2,1005)   
        {
                if(P[i])        upto[i] = upto[i-1] + 1;
                else            upto[i] = upto[i-1];
        }
}

int n,m;

int L[505][505],R[505][505],T[505][505],B[505][505];

bool check(int x,int y)
{
        if(x>=0 && x<n && y>=0 && y<m)  return true;
        return false;
}

void compute(vector<string> Board)
{       
        REP(i,n)        L[i][0] = 0;
        REP(i,n)
        {
                FOR(j,1,m)
                {
                        if(Board[i][j-1] == '#')        L[i][j] = 0;
                        else                            L[i][j] = L[i][j-1] + 1;
                }
        }
        REP(i,n)        R[i][m-1] = 0;
        REP(i,n)
        {
                for(int j = m-2;j >= 0; j--)
                {
                        if(Board[i][j+1] == '#')        R[i][j] = 0;
                        else                            R[i][j] = R[i][j+1] + 1; 
                }
        }
        REP(i,m)        T[0][i] = 0;
        FOR(i,1,n)
        {
                REP(j,m)
                {
                        if(Board[i-1][j] == '#')        T[i][j] = 0;
                        else                            T[i][j] = T[i-1][j] + 1;
                }
        }
        REP(i,m)        B[n-1][i] = 0;
        for(int i = n-2; i>=0; i--)
        {
                REP(j,m)
                {
                        if(Board[i+1][j] == '#')        B[i][j] = 0;
                        else                            B[i][j] = B[i+1][j] + 1;
                }
        }
}

int main() 
{
        //INPUT ("input.txt");
        //OUTPUT ("output.txt");
        pre();       
        int testcases;
        scanf ("%d",&testcases);
        while (testcases--) 
        {
                int ans = 0;
                cin>>n>>m;
                vector<string> Board(n);
                REP(i,n)        cin>>Board[i];
                FILL(L,0);
                FILL(R,0);
                FILL(T,0);
                FILL(B,0);
                compute(Board);
                int l,r,t,b,mi;
                REP(i,n)
                {
                        REP(j,m)
                        {
                                if(Board[i][j] == '#')  continue;
                                l = L[i][j];
                                r = R[i][j];
                                t = T[i][j];
                                b = B[i][j];
                                mi = min(l, min(r, min(t, b)));
                                ans += upto[mi];
                        }
                }
                cout<<ans<<endl;
        }      
 
        return 0;
}