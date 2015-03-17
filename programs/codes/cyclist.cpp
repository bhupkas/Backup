#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long int ll;
typedef double dd;
struct content
	{
	ll partner;
	dd weight;
	};
typedef struct content Content;
bool visited[100000];
vector <dd > w;
vector < Content > V[100000];
ll n,len;
void dfs(ll vertex,dd com)
	{
	visited[vertex]=true;
	if(vertex==n-1)	return;
	vector < Content >::iterator it;
	for(it=V[vertex].begin();it!=V[vertex].end();it++)
		{
		if((!visited[(*it).partner])&&(((*it).weight)>=com))
			dfs((*it).partner,com);
		}
	}
bool function(dd com)
	{		
	ll i;
	for(i=0;i<100000;i++)
		visited[i]=false;
	dfs(0,com);
	if(visited[n-1])	return true;	
	}
dd bsearch()
	{
	ll mid,low=0,high=(ll)w.size(),ans;
	high--;
	while(high>low)
		{
		mid=(low+high)/2;
		if(function(w.at(mid)))	{ans=mid;	low=mid+1;}
		else				high=mid-1;
		}
	return w.at(ans);
	}
bool f(dd a,dd b)
	{
	return (a<b);
	}
int main()
	{	
	Content Con,Con1;
	ll s1,s2,t,i;
	dd s3;
	scanf("%lld",&t);
	while(t--)
		{
		for(i=0;i<100000;i++)
			V[i].clear();
		w.clear();

		scanf("%lld",&n);
		while(1)
			{			
			scanf("%lld %lld %lf",&s1,&s2,&s3);
			if(s1==-1)	break;
			s1--;s2--;
			w.push_back(s3);
			Con.partner=s2;
			Con.weight=s3;
			V[s1].push_back(Con);
			Con1.partner=s1;
			Con1.weight=s3;	
			V[s2].push_back(Con1);
			}
		sort(w.begin(),w.end());
if((ll)w.size()==1)	{printf("%lf\n",w.at(0));	continue;}		
	vector<dd>::iterator k;
//	for(k=w.begin();k!=w.end();k++)
//		printf("%d\n",(int)function((*k)));
		printf("%lf\n",bsearch());		
		}
	return 0;
	}
