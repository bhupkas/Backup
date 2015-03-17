#include"stdio.h"
#include"iostream"
#include"vector"
#include"algorithm"
#include"utility"
using namespace std;
bool f(pair<int,int> a,pair<int,int> b)
	{
	return a.second<b.second;
	}
int main()
	{
	int t,n,s,te,te1,i,j;
	vector<int> v[201];
	vector< pair<int,int> > v1;
	cin>>n>>s;
	for(i=0;i<s;i++)
		{
		cin>>te;
		for(j=0;j<te;j++)
			{
			cin>>te1;
			v[te1].push_back(i);
			}
		}
	for(i=0;i<n;i++)
		v1.push_back(make_pair(i,v[i].size()));
	sort(v1.begin(),v1.end(),f);
	cout<<v1[0].second<<endl;
	for(i=0;i<v1[0].second;i++)
		cout<<v[v1[0].first][i]<<endl;
	return 0;
	}
