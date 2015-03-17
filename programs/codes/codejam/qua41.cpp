/* bitmap in GCJ ___bhupkas___ */
#include"iostream"
#include"stdio.h"
#include"vector"
#include"algorithm"
#include"set"
using namespace std;
typedef long long LL;
#define FOR(i,a,b)	for(i=a;i<b;i++)
multiset<LL> keyset;
multiset<LL>::iterator it_set;
vector<LL>::iterator it_vector;
LL OPEN[25];
vector<LL> v[25];
typedef pair < bool, vector<LL> > P;
LL n;
P fun(LL bmap,vector<LL> path)
	{
	LL i,j;
	if(bmap== (1<<n)-1)	{return make_pair(true,path);}
	multiset<LL> myset;
	for(it_set=keyset.begin();it_set!=keyset.end();it_set++)
		myset.insert((*it_set));	
	FOR(i,0,n)
		{
		if(bmap & (1<<i))
			{
			FOR(j,0,v[i].size())
				{myset.insert(v[i][j]);}
			}
		}
	FOR(i,0,n)
		{
		if(bmap & (1<<i))
			{
			myset.erase(myset.find(OPEN[i]));
			}
		}
	FOR(i,0,n)
		{
		if(!(bmap & (1<<i)) && myset.find(OPEN[i]) != myset.end())	break;	 
		}
	if(i==n)	{return make_pair(false,path);}
	P p11;
	
	for(i=0;i<n;i++)
		{
		if(!(bmap & (1<<i)) && myset.find(OPEN[i]) != myset.end())
			{

			path.push_back(i);
			p11=fun((bmap+(1<<i)),path);
			if(p11.first)	return p11;
			path.pop_back();
	
			}
		}
	
	return make_pair(false,path);
	}	
int main()
	{
	LL tc,i,j,k,oo,te,num;
	cin>>tc;
	vector<LL> order;
	P p1;
	for(oo=1;oo<=tc;oo++)
		{
		order.clear();
		keyset.clear();
		cin>>k>>n;
		FOR(i,0,k)	{cin>>te;	te--;	keyset.insert(te);}
		FOR(i,0,n)	v[i].clear();
		FOR(i,0,n)
			{
			cin>>OPEN[i];
			OPEN[i]--;
			cin>>num;
			FOR(j,0,num)
				{
				cin>>te;
				te--;
				v[i].push_back(te);
				}
			}	
		p1=fun(0,order);
		cout<<"Case #"<<oo<<": ";
		if(p1.first)
			{
			FOR(i,0,n)	cout<<p1.second[i]+1<<" ";
			cout<<endl;
			}
		else
			cout<<"IMPOSSIBLE"<<endl;
		}
	return 0;
	}
