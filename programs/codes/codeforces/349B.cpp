#include "bits/stdc++.h"

using namespace std;

#define INF		1000000007
#define LL		long long int
#define SI(n)		cin >> n;
#define SC(c)		scanf("%c",&c);
#define FOR(x,a,b)	for(LL x=a;x<b;x++)
#define REP(i,n)	for(LL i=0;i<n;i++)
#define MP		make_pair
#define PB		push_back
#define F		first
#define S		second



int main()
{
	LL v;
	cin>>v;
	vector<int> a(9);
	LL MIN=INF;
	LL ind=0;
	REP(i,9)
	{
		cin>>a[i];
		if(a[i]<=MIN)
		{
			MIN=a[i];
			ind=i+1;
		}
	}
	if(v<MIN)
	{
		cout << -1<<endl;
		return 0;
	}
	vector<int> ans;
	ans.clear();
	LL l=v/MIN;
	REP(i,l)
		ans.PB(ind);
	LL r=v%MIN;
	v%=MIN;
	if(r==0)
	{
		REP(i,l)
			cout << ans[i];
		cout << endl;
		return 0;
	}
	LL flag;
	REP(i,l)
	{
		flag=0;
		if(v<=0)
			break;
		for(LL j=8;j>=ind;j--)
		{
			if(a[j]-MIN<=v)
			{
				ans[i]=j+1;
				v-=(a[j]-MIN);
				flag=1;
				break;
			}
		}
		if(flag==0)
			break;
	}
	REP(i,l)
		cout << ans[i];
	cout << endl;
	return 0;
}