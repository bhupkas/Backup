/* bhupkas */

#include "iostream"
#include "stdio.h"
#include "vector"
#include "map"
#include "set"

using namespace std;

#define FOR(i,a,b)	for(i=a;i<b;i++)
#define PB	push_back
#define MP 	make_pair
#define PP  pair<int,int>
#define LL long long 

map< PP,LL > mymap;

void fun(LL x,LL y)
	{
		if(mymap[MP(x,y)]>4)
			{
				LL k=mymap[MP(x,y)]/4;
				mymap[MP(x,y)]%=4;
				mymap[MP(x+1,y)]+=k;
				mymap[MP(x,y+1)]+=k;
				mymap[MP(x-1,y)]+=k;
				mymap[MP(x,y-1)]+=k;
				fun(x+1,y);
				fun(x,y+1);
				fun(x-1,y);
				fun(x,y-1);
			}
	}

int main()
	{
		map<PP,LL>::iterator it;
		LL n,t,x,y;
		cin>>n>>t;
		mymap[MP(0,0)]=n;
		fun(0,0);
		while(t--)
			{
				cin>>x>>y;
				it=mymap.find(MP(x,y));
				if(it==mymap.end())	cout<<0<<endl;
				else	cout<<mymap[MP(x,y)]<<endl;;
			}
		return 0;
	}