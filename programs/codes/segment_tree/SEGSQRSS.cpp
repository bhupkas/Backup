/* Team name: Omega
*  Problem name: spoj SEGSQRSS
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
#define INF     (LL)(1<<30)
 
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
 
struct node
{
        LL square_sum;
        LL sum;
        LL set_value;
        LL add_value;
};
typedef struct node Node;
Node segtree[4*MAXN+5];
LL A[MAXN+5];

void build(int idx,int lo,int hi)
{
        if(lo == hi)
        {
                segtree[idx].square_sum = A[lo]*A[lo];
                segtree[idx].sum = A[lo];
                segtree[idx].set_value = INF; 
                segtree[idx].add_value = 0;
                return;
        }
        int mid = (lo+hi)/2;
        build(2*idx,lo,mid);
        build(2*idx+1,mid+1,hi);
        segtree[idx].square_sum = segtree[2*idx].square_sum + segtree[2*idx+1].square_sum;
        segtree[idx].sum = segtree[2*idx].sum + segtree[2*idx+1].sum;
        segtree[idx].set_value = INF;
        segtree[idx].add_value = 0;
}

void update_add(int idx,int lo,int hi,int ql,int qr,int val)
{
        if(lo > qr || hi < ql)  return;
        if(lo >= ql && hi <= qr)
        {
                if(segtree[idx].set_value != INF)
                {
                        int num = segtree[idx].set_value;
                        segtree[idx].square_sum = (hi - lo +1)*num*num;
                        segtree[idx].sum = (hi - lo + 1)*num;
                }
                segtree[idx].add_value += val;
                segtree
        }
        
}

void update_set(int idx,int lo,int hi,int ql,int qr,int val)
{
    
}

int main() {
        //INPUT ("input.txt");
        //OUTPUT ("output.txt");
       
        int T,n,q,x,y,type;
        scanf ("%d",&T);
        while (T--) 
        {
               cin>>n>>q;
               FOR(i,1,n+1)     cin>>A[i];
               build(1,1,n);
               while(q--)
               {
                        cin>>type>>x>>y;

               }
        }      
 
        return 0;
}