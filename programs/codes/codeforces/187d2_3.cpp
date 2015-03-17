/* bhupkas */

#include "stdio.h"
#include "iostream"
#include "map"
#include "vector"
#include "set"
#include "algorithm"
#include "string.h"
#include "math.h"
#include "string"

using namespace std;

typedef long long LL;
typedef vector<int> vi;

#define MOD 1e9+7
#define PB(n) 	push_back(n)
#define FOR(i,a,b)	for(i=a;i<b;i++)
#define MP 			make_pair

void pre()
	{

	}

int main()
	{
		pre();
		LL te,k,n,i,j;
		char S[100];
		vector<LL> v;
		cin>>n>>k;
		cin>>te;
		v.PB(te);
		FOR(i,1,n)
			{
				cin>>te;
				v.PB(te);
			}
		LL cnt=0;
		LL sumsum=0;
		FOR(i,1,n)	
			{
				if(sumsum-(n-i-1)*(i-cnt)*v[i] < k)
					{
						cout<<i+1<<endl;
						cnt++;
					}
				else
					{
						sumsum=sumsum+v[i]*(i-cnt);
					}
			}
		return 0;
	}