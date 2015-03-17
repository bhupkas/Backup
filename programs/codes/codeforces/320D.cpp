/* bhupkas */

#include "iostream"
#include "stdio.h"
#include "vector"
#include "map"
#include "set"
#include "algorithm"
#include "string.h"
#include "string"
#include "math.h"

using namespace std;

void pre()
	{

	}

#define PB 	push_back
#define I   insert
#define LL	long long 
#define so(v)	sort(v.begin(),v.end())
#define FOR(i,a,b)	for(i=a;i<b;i++)
#define MOD (LL)(1e9 + 7) 
#define PP pair<LL,LL>
#define MP make_pair

int main()
	{
		set<PP> myset,temp;
		set<PP>::iterator it,it1;
		pre();
		LL i,j,k,n,ans=0;
		LL B[100050],A[100050];
		scanf("%lld",&n);
		FOR(i,0,n)
			{scanf("%lld",&A[i]);	myset.I(MP(i,A[i]));}
		if(n==1)	{cout<<0<<endl;	return 0;}
		while(1)
			{
				it=myset.begin();
				it++;
				it1=it;
				it1--;
				temp.I(MP((*it1).first,(*it1).second));
				for(;it!=myset.end();it++)
					{
						it1=it;
						it1--;
						if((*it).second > ((*it1).second))	temp.I(MP((*it).first,(*it).second));	
					}
				if(temp.size()==myset.size())	{cout<<ans<<endl;	return 0;}
				ans++;
				myset.clear();
				for(it=temp.begin();it!=temp.end();it++)
					myset.I(MP((*it).first,(*it).second));
				temp.clear();
			}
		return 0;
	}