/* Team name: Omega
*  Problem name: LEEXAMS Sept'13 Long
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
 
int n;

bool check(VI v)
{
        bool B[20];
        FILL(B,false);
        REP(i,v.size()) 
        {
                if(B[v[i]] == false)    B[v[i]] = true;
                else                    return false;
        }
        return true;
}

int main() 
{
        //INPUT ("input.txt");
        //OUTPUT ("output.txt");
       
        int T;
        scanf ("%d",&T);
        while (T--) 
        {       
                cin>>n;
                VI p(n),a(n),b(n);
                double ans = 0.0;
                REP(i,n)        cin>>p[i]>>a[i]>>b[i];
                if(n > 16)
                {
                        printf("0.000000\n");
                        continue;
                }         
                REP(i, 1<<n)
                {
                        VI v;
                        double probable_ans = 1.0;
                        REP(j,n)
                        {
                                if(1<<j & i)    v.PB(b[j]),probable_ans *= ((double)(100 - p[j])*(0.01));
                                else            v.PB(a[j]),probable_ans *= ((double)(p[j])*(0.01));
                        }       
                        if(check(v))    ans += probable_ans;
                }
                printf("%0.12lf\n",ans);
        }      
        return 0;
}