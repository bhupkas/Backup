#include"iostream"
#include"stdio.h"
#include"vector"
#include"algorithm"
#include"map"
#include"set"
using namespace std;
typedef long long LL;
map< LL, vector < LL > > my;
map< LL, vector < LL > >::iterator it;
int main()
	{
	LL t,n,i,j,te1,te2,si,si1,ans;
	cin>>t;
	vector<LL> v;
	while(t--)
		{
		v.clear();
		my.clear();
		ans=0;
		cin>>n;
		for(i=0;i<n;i++)
			{
			cin>>te1>>te2;
			my[te1].push_back(te2);
			}
		si=my.size();
		for(it=my.begin();it!=my.end();it++)	sort(((*it).second).begin(),((*it).second).end());
		i=1;
		for(it=my.begin();it!=my.end();it++)	v.push_back((*it).second[0]);
		sort(v.begin(),v.end());
		for(i=0;i<si;i++)	ans=ans+v[i]*(i+1);
		for(it=my.begin();it!=my.end();it++)
			{
			si1=(*it).second.size();
			for(j=1;j<si1;j++)	ans=ans+(*it).second[j]*(si);
			}
		cout<<ans<<endl;
		}
	return 0;
	}
