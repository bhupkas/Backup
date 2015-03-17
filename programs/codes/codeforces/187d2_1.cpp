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
map<int,vi> mymap;

int main()
	{
		pre();
		int n,i,j,te;
		char S[100];
		vi a,b;
		cin>>n;
		set<int> ss[101];
		FOR(i,0,n)
			{
				cin>>te>>j;
				a.PB(te);
				ss[i].insert(j);
			}
		int co=0;
		set<int>::iterator it;
		FOR(i,0,n)
			{
				FOR(j,0,n)
					{
						if(i==j)	continue;
						it=ss[j].find(a[i]);
						if(it!=ss[j].end())	break;
					}
				if(j==n)	co++;	
			}
		cout<<co<<endl;
		return 0;
	}