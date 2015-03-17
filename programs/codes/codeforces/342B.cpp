/* Team name: Omega
*  Problem name: CF 342B
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

int main() {
        //INPUT ("input.txt");
        //OUTPUT ("output.txt");
       
        int T,m,s,f;

        cin>>n>>m>>s>>f;
        VI t(m);
        VI l(m);
        VI r(m);
        REP(i,m)       scanf("%d %d %d",&t[i],&l[i],&r[i]);
        string ans;
        int curr=s,step=1;
        int re = f-s;
        int val;
        if(re==0)       
        {
                cout<<endl;
                return 0;
        }
        char ch;
        if(re>0)        val=1,ch='R';
        else            val=-1,ch='L';
        re = abs(re);
        int cnt = 0;
        while(1)
        {
                if(step == t[cnt])      
                {
                        cnt++;
                        int val1 = curr + val;
                        if(val1 < 1 || val1 >n) ans.PB('X');
                        else if((curr<=r[cnt-1] && curr>=l[cnt-1])||(val1<=r[cnt-1] && val1>=l[cnt-1]))      ans.PB('X');
                        else    ans.PB(ch),re--,curr+=val;
                }
                else
                {
                        ans.PB(ch);
                        re--;
                        curr+=val;
                }
                if(re == 0)     
                {
                        cout<<ans<<endl;
                        break;
                }
                step++;
        }
        return 0;
}