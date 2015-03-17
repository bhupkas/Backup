/* Team name: Omega
*  Problem name: CF 342A
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
int C[4];

int main() 
{
        //INPUT ("input.txt");
        //OUTPUT ("output.txt");
       
        int ans=1,cnt=0,n,m,T;
        string str;
        VI v;
        cin>>n;
        int A[10];
        REP(i,10)       A[i]=0;
        REP(i,n)
        {
                cin>>m;
                A[m]++;
        }
        bool flag = true;
        if(A[7]>0 || A[5]>0)
        {
                cout<<-1<<endl;
                return 0;
        }
        if(A[3]>0)
        {
                A[1]-=A[3];
                A[6]-=A[3];
                C[2]=A[3];
                A[3] = 0;
        }
        if(A[4]>0)
        {
                C[0]+=A[4];
                A[1]-=A[4];
                A[2]-=A[4];
                A[4]=0;
        }
        if(A[6]>0)
        {
                C[1]=A[6];
                A[1]-=A[6];
                A[2]-=A[6];
                A[6]-=A[6];
        }
        if(!(A[3]==0 && A[1]==0 && A[2]==0 && A[4]==0 && A[6]==0))      
        {
                cout<<-1<<endl;
                return 0;
        }
        if(C[0])        REP(i,C[0])     cout<<"1 2 4"<<endl;
        if(C[1])        REP(i,C[1])     cout<<"1 2 6"<<endl;
        if(C[2])        REP(i,C[2])     cout<<"1 3 6"<<endl;

        return 0;
}