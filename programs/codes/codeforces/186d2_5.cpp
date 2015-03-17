#include"iostream"
#include"stdio.h"
#include"vector"
#include"algorithm"
#include"set"
#include"map"
#include"math.h"
#include"string.h"
#include"string"
#include"stdlib.h"
using namespace std;
#define FOR(i,a,b)	for(i=a;i<b;i++)
typedef long long int LL;
int main()
	{
		LL n,m,t1,t2,i,j;
		vector<LL> v1,v2;
		FOR(i,0,n)
			{
				cin>>t1;
				v1.push_back(t1);
			}
		FOR(i,0,n)
			{
				cin>>t1;
				v2.push_back(t1);
			}
		set <LL> myset;
		FOR(i,0,n)
			{
				myset.insert(v1[i]);
			}
		return 0;
	}