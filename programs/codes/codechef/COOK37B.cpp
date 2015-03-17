/* bhupkas */

#include "iostream"
#include "stdio.h"
#include "string.h"
#include "string"
#include "algorithm"
#include "math.h"
#include "vector"
#include "set"
#include "map"
#include "deque"

using namespace std;

#define FOR(i,a,b)	for(i=a;i<b;i++)
#define LL			long long 
#define PB			push_back
#define PP			pair<int,int>
#define PPL			pair<LL,LL>
#define vi			vector<int>
#define vll			vector<LL>
#define I 			insert
#define so(v)		sort(v.begin(),v.end())
#define MOD			(LL)(1e9+7)
#define INF			(LL)(1e9+7)
#define MP 			make_pair

bool P[100005];
vi p;

int A[100005];
int M[100005];
vi v[100005];
void pre()
	{
		int i,j;
		FOR(i,0,100005)	P[i]=true;
		P[0]=P[1]=false;
		for(i=2;i*i<100005;i++)
			{
				if(P[i])
					{
						for(j=i;j<=100005/i;j++)
							P[i*j]=false;
					}
			}
		FOR(i,2,100005)	p.PB(i);
		FOR(i,0,p.size())
			{
				for(j=1;j<=100005/p[i];j++)
					{
						M[p[i]*j]=p[i];
					}
			}
	}

set<int> foo;
vector<PP> a;

void rec(int id,int prod)
{
	int i;
	if(id==a.size())
		foo.insert(prod);
	else
	{
		rec(id+1,prod);
		FOR(i,0,a[id].second)
		{
			prod*=a[id].first;
			rec(id+1,prod);
		}
	}
}

int main()
	{
		pre();
		int i,j,di,q,si,n,l,r,k,te,m,t,re=1,cnt=0,temp,oo;
		cin>>n>>q;
		FOR(i,0,n)	cin>>A[i];
		FOR(i,0,n)
			{
				foo.clear();
				a.clear();
				for(j=0;p[j]*p[j]<=A[i];j++)
					{
						if(A[i]%p[j]==0)
							{
								cnt=0;
								while(A[i]%p[j]==0)
									{
										cnt++;
										A[i]/=p[j];
									}
								a.PB(MP(p[j],cnt));
							}
					}
				if(A[i]!=1)		a.PB(MP(A[i],1));
				rec(0,1);
				set<int>::iterator it;
				for(it=foo.begin();it!=foo.end();it++)
					v[(*it)].PB(i);
			}
		vector<int>::iterator low,up;
		while(q--)
			{
				cin>>l>>r>>k;
				l--;
				r--;
				up=upper_bound(v[k].begin(),v[k].end(),r);
				low=lower_bound(v[k].begin(),v[k].end(),l);
				cout<<(up-v[k].begin())-(low-v[k].begin())<<endl;
			}
		return 0;
	}