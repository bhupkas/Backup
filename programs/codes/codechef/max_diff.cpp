#include"stdio.h"
#include"iostream"
#include"vector"
#include"algorithm"
using namespace std;
bool f(int a,int b)
	{
	return a>b;
	}
int main()
	{
	int t,n,i,j,te,te1,k,ans=0;
	cin>>t;
	vector<int> v;
	while(t--)
		{
		v.clear();
		ans=0;
		cin>>n>>k;
		for(i=0;i<n;i++)	{cin>>te;v.push_back(te);}
		sort(v.begin(),v.end(),f	);
		k=max(k,n-k);
		te=0;
		for(i=0;i<k;i++)	ans+=v[i];
		for(i=k;i<n;i++)	ans-=v[i];
		cout<<ans<<endl;
		}
	return 0;
	}
