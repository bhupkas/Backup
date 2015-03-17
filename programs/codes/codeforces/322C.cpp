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

#define inf (LL)(1e10)
using namespace std;

void pre()
	{

	}

#define PB 	push_back
#define I   insert
#define LL	long long 
#define so(v)	sort(v.begin(),v.end())
#define FOR(i,a,b)	for(i=a;i<b;i++)
#define MP  make_pair
#define PP pair<LL,LL> 

int main()
	{
		pre();
		LL a,b,n,i,j,ans=0,cnt=0,co=0,te;
		string str;
		cin>>a>>b;
		getchar();
		cin>>str;
		LL x,y;
		x=0;y=0;
		if(a==x && b==y)	{cout<<"Yes"<<endl;	return 0;}
		set<PP> ss;
		ss.I(MP(x,y));
		FOR(i,0,(LL)str.size())
			{
				if(str[i]=='U')
					y++;
				if(str[i]=='L')
					x--;
				if(str[i]=='R')
					x++;
				if(str[i]=='D')
					y--;
				if(a==x && b==y)	{cout<<"Yes"<<endl;	return 0;}
				ss.I(MP(x,y));
			}
		if(x==0 && y==0)	{cout<<"No"<<endl;	return 0;}
		LL hx,hy;
		if(x==0)	hx=inf;
		else	hx=abs(a/x);
		if(y==0)	hy=inf;
		else	hy=abs(b/y);
		LL tx=x,ty=y;
		LL moves=min(hx,hy);
		set<PP>::iterator it;
		for(i=-255;i<255;i++)
			{
				if(moves+i<=0)	continue;
				x=tx*(moves+i);
				y=ty*(moves+i);
				it=ss.find(MP(a-x,b-y));
				if(it!=ss.end())	{cout<<"Yes"<<endl; return 0;}
			}
		cout<<"No"<<endl;
		return 0;
	}