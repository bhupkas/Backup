/* bhupkas */

#include "iostream"
#include "stdio.h"
#include "vector"
#include "algorithm"
#include "set"
#include "map"
#include "string.h"
#include "string"
#include "math.h"
#include "deque"

using namespace std;

typedef long long LL;

#define FOR(i,a,b)	for(i=a;i<b;i++)
#define PB	push_back
#define I 	insert
#define vi	vector<int>
#define vll	vector<LL>

int main()
	{
		LL i,n,te,j;
		vll v,pref;
		set<LL> ans,temp;
		set<LL>::iterator it;
		scanf("%lld",&n);
		FOR(i,0,n)
			{
				scanf("%lld",&te);
				v.PB(te);
			}
		pref.PB(v[0]);
		FOR(i,1,n)
			pref.PB(v[i]+pref[i-1]);
		ans.PB(v[0]);
		FOR(i,1,n)
			{
				for(it=ans.begin();it!=ans.end();it++)
					{
							
					}
			}

		return 0;	
	}