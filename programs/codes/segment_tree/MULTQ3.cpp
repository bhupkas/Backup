/* Team name: Omega
*  Problem name:
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
 
struct node     {
        int m[3];
        int num;
};

typedef struct node Node;       

int n,N;
Node segtree[4*MAXN+5];

void build(int idx,int a,int b)     {
        if(a == b)      {
                REP(i,3)        segtree[idx].m[i] = 0;
                segtree[idx].m[0] = 1;
                segtree[idx].num = 0;
                return;
        }
        int mid=(a+b)/2;
        build(2*idx,a,mid);
        build(2*idx+1,mid+1,b);
        REP(i,3)        segtree[idx].m[i] = segtree[2*idx].m[i] + segtree[2*idx+1].m[i];
        segtree[idx].num = 0;
}

void update(int lo,int hi,int idx,int ql,int qr)        {
        if(lo>qr || hi<ql)      return;
        int temp[3],foo;
        if(lo>=ql && hi<=qr)    {
                segtree[idx].num++;
                REP(i,3)        temp[i] = segtree[idx].m[(i+2)%3];
                REP(i,3)        segtree[idx].m[i]=temp[i];
                return;
        }
        if(segtree[idx].num!=0) {
                segtree[2*idx].num+=segtree[idx].num;
                segtree[2*idx+1].num+=segtree[idx].num;
                REP(i,3)        temp[i]=segtree[2*idx].m[(i-segtree[idx].num)%3];        
                REP(i,3)        segtree[2*idx].m[i]=temp[i];
                REP(i,3)        temp[i]=segtree[2*idx+1].m[(i-segtree[idx].num)%3];        
                REP(i,3)        segtree[2*idx+1].m[i]=temp[i];
                segtree[idx].num = 0;
        }
        int mid = (lo+hi)/2;
        update(lo,mid,2*idx,ql,qr);
        update(mid+1,hi,2*idx+1,ql,qr);
        REP(i,3)        segtree[idx].m[i] = segtree[2*idx].m[i] + segtree[2*idx+1].m[i];
        segtree[idx].num=0;
}

int query(int lo,int hi,int idx,int ql,int qr)  {
        if(lo>qr || hi<ql)      return 0; 
        int temp[3];
        if(lo>=ql && hi<=qr)    {
                return segtree[idx].m[0];
        }
        if(segtree[idx].num!=0) {
                segtree[2*idx].num+=segtree[idx].num;
                segtree[2*idx+1].num+=segtree[idx].num;
                REP(i,3)        temp[i]=segtree[2*idx].m[(i-segtree[idx].num)%3];        
                REP(i,3)        segtree[2*idx].m[i]=temp[i];
                REP(i,3)        temp[i]=segtree[2*idx+1].m[(i-segtree[idx].num)%3];        
                REP(i,3)        segtree[2*idx+1].m[i]=temp[i];
                segtree[idx].num = 0;
        }
        int mid = (lo+hi)/2;
        int re = query(lo,mid,2*idx,ql,qr) + query(mid+1,hi,2*idx+1,ql,qr); 
        REP(i,3)        segtree[idx].m[i] = segtree[2*idx].m[i] + segtree[2*idx+1].m[i];
        segtree[idx].num=0;
        return re;
}
int main()      {
        int n,q,a,b,type;
        cin>>n>>q;
        build(1,1,n);
        while(q--)      {
                cin>>type>>a>>b;
                if(type==0)             update(1,n,1,a+1,b+1);
                else    {
                        cout<<query(1,n,1,a+1,b+1)<<endl;
                }
        }
        return 0;
}