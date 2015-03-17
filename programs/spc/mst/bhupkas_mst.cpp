/* bhupkas code for mst_problem_statement of spc april 2k13 , cities are taken in 1-based order */
#include"iostream"
#include"stdio.h"
#include"algorithm"
#include"vector"
#include"utility"
using namespace std;
typedef long long LL;
typedef pair < pair <LL,LL>  , LL > P;
LL PARENT[100002][2];
#define FOR(i,a,b)	for(i=a;i<b;i++)
LL lo(LL a)
	{
	LL re=0;
	while(a!=1)
		{
		a>>=1;
		re++;
		}
	return re;
	}
LL findp(LL a)
	{
	if(PARENT[a][0]==a)	return a;
	LL re;
	re=findp(PARENT[a][0]);
	PARENT[a][0]=re;
	return re;
	}
bool issame(LL a,LL b)
	{
	if(findp(a)==findp(b))	return true;
	return false;
	}
void uni(LL a,LL b)
	{
	LL p1,p2;
	p1=findp(a);
	p2=findp(b);
	if(PARENT[p1][1]<PARENT[p2][1])	
		{
		PARENT[p1][0]=p2;
		PARENT[p2][1]+=PARENT[p1][1];
		PARENT[p1][1]=0;	
		}
	else
		{
		PARENT[p2][0]=p1;
		PARENT[p1][1]+=PARENT[p2][1];
		PARENT[p2][1]=0;
		}
	}
bool fun(P p1,P p2)
	{
	return p1.second<p2.second;
	}
int main()
	{
	LL ans=0,n,m,i,j,te1,te2,te3;
	int t;
	cin>>t;
	while(t--)
		{
			ans=0;
			vector<P> v;
			vector<P> mst;
			cin>>n>>m;
			for(i=0;i<n;i++)
				{
				PARENT[i][0]=i;
				PARENT[i][1]=1;
				}
			for(i=0;i<m;i++)
				{
				cin>>te1>>te2>>te3;
				te1--;te2--;
				v.push_back(make_pair(make_pair(te1,te2),te3));
				}
			vector<P>::iterator it;
			sort(v.begin(),v.end(),fun);
			for(i=0;i<m;i++)
				{
				if(findp(v[i].first.first)!=findp(v[i].first.second))	
					{
					uni(v[i].first.first,v[i].first.second);
					mst.push_back(v[i]);
					}
				}
			te1=mst.size();
			for(i=0;i<te1;i++)
				{
				ans+=(lo(mst[i].second));
				}
			cout<<ans<<endl;		
		}
	return 0;
	}
