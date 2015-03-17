/* bhupkas code for mst_problem_statement of spc april 2k13 , cities are taken in 1-based order */
#include"iostream"
#include"stdio.h"
#include"algorithm"
#include"vector"
#include"utility"
using namespace std;
typedef long long LL;
typedef pair < pair <LL,LL>  , LL > P;
LL PARENT[6670][2];
#define FOR(i,a,b)	for(i=a;i<b;i++)
#define MOD 747474747


struct node
	{
	LL X[5];
	};
typedef struct node Node;
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
LL dis(Node N1,Node N2,LL d)
	{
	LL i,ans=0;
	FOR(i,0,d)
		{
		ans = (ans + ((N1.X[i]-N2.X[i])*((N1.X[i]-N2.X[i]))));
		}
	return ans;
	}
bool fun(P p1,P p2)
	{
	return p1.second>p2.second;
	}
int main()
	{
	LL t,d,ans=0,n,m,i,j,te1,te2,te3;
	scanf("%lld",&t);
	vector<Node> v;
	vector<P> v1;
	vector<P> mst;
	Node N;
	while(t--)
		{
		ans=1;
		mst.clear();
		v.clear();
		v1.clear();
		scanf("%lld",&n);scanf("%lld",&d);
		for(i=0;i<n;i++)
			{
			PARENT[i][0]=i;
			PARENT[i][1]=1;
			}
		for(i=0;i<n;i++)
			{
			FOR(j,0,d)
				scanf("%lld",&N.X[j]);		
			FOR(j,d,5)
				N.X[j]=0;
			v.push_back(N);
			}
		FOR(i,0,n)
			{
			FOR(j,i+1,n)
				{
				v1.push_back(make_pair(make_pair(i,j),dis(v[i],v[j],d)));
				}
			}	
		/*
		FOR(i,0,v1.size())
			cout<<v1[i].first.first<<" "<<v1[i].first.second<<" "<<v1[i].second<<endl;
		cout<<endl;
		FOR(i,0,n)
			{
			FOR(j,0,5)
				cout<<v[i].X[j]<<" ";
			cout<<endl;
			}
		*/
		sort(v1.begin(),v1.end(),fun);
		for(i=0;i<v1.size();i++)
			{
			if(findp(v1[i].first.first)!=findp(v1[i].first.second))	
				{
				uni(v1[i].first.first,v1[i].first.second);
				mst.push_back(v1[i]);
				}
			}
		te1=mst.size();
		for(i=0;i<te1;i++)
			{
			//cout<<mst[i].first.first<<" "<<mst[i].first.second<<" "<<mst[i].second<<endl;
			ans*=((mst[i].second));
			ans %= MOD;	

			}
		printf("%lld\n",ans);
		}
	return 0;
	}
