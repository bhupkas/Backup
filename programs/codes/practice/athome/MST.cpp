/* bhupkas MST */
#include"iostream"
#include"stdio.h"
#include"vector"
#include"map"
#include"utility"
#include"algorithm"
using namespace std;
#define MAX_SIZE	100000
#define FOR(i,a,b)	for(i=a;i<b;i++)
#define pp pair<int, int> 
#define vpp	vector<pp> 
#define vpppp vector<pp,int>
int PARENT[MAX_SIZE];
int SIZE[MAX_SIZE];
bool fun(pair< pair<int,int> , int > a,pair< pair<int,int> , int > b)
	{
		return a.second<b.second;
	}
int par(int a)
	{
		if(PARENT[a]==a)	return a;
		int p1;
		p1=par(PARENT[a]);
		PARENT[a]=p1;
		return p1;
	}
bool issame(int a,int b)
	{
		if(par(a)==par(b))	return true;
		return false;
	}
void uni(int a,int b)
	{
		int p1,p2;
		p1=par(a);
		p2=par(b);
		if(SIZE[p1]<SIZE[p2])
			{
				PARENT[p1]=p2;
				SIZE[p2]+=SIZE[p1];
				SIZE[p1]=0;
			}
		else
			{
				PARENT[p2]=p1;
				SIZE[p1]+=SIZE[p2];
				SIZE[p2]=0;	
			}
	}
int main()
	{
		int i,j,n,m,te1,te2,te3;
		vpp v[MAX_SIZE];
		cin>>n>>m;
		vpppp mst;
		int ans=0;
		FOR(i,0,m)
			{
				cin>>te1>>te2>>te3;
				v[te1].push_back(make_pair(te2,te3));
				v[te2].push_back(make_pair(te1,te3));
				vpppp.push_back(make_pair(make_pair(te1,te2),te3));
			}
		FOR(i,0,n)	{PARENT[i]=i;	SIZE[i]=1;}
		sort(vpppp.begin(),vpppp.end(),fun);
		FOR(i,0,m)
			{
				if(!(issame(vpppp[i].first.first,vpppp[i].first.second)))
				{
					uni(vpppp[i].first.first,vpppp[i].first.second)
					ans+=vpppp[i].second;
				}
			}
		cout<<ans<<endl;
		return 0;
	}