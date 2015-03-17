/* bhupkas */

#include "stdio.h"
#include "math.h"
#include "algorithm"
#include "string.h"
#include "iostream"
#include "map"
#include "vector"
#include "string.h"

using namespace std;

#define vi		vector<int>
#define	PB		push_back
#define FOR(i,a,b)	for(i=a;i<b;i++)
#define LL 		long long 
#define vll		vector<LL>

vll ans;
vi store[100005];
bool VISI[100005];
LL PRI[100005],tmp,cnt;


void depth(int vertex)
{
	int i;
	cnt++;
	VISI[vertex]=true;
	if(PRI[vertex]>=0)	tmp=min(tmp,PRI[vertex]);
	FOR(i,0,store[vertex].size())
		{
			if(!VISI[store[vertex][i]])	depth(store[vertex][i]);
		}
}

int main()
{
	int i,j,vvv,eee,x,y;
	LL n,rr;
	cin>>vvv>>eee;
	FOR(i,0,100005)	
		VISI[i]=false;
	FOR(i,0,eee)
		{
			cin>>x>>y;
			x--;
			y--;
			store[x].PB(y);
			store[y].PB(x);
		}
	FOR(i,0,vvv)
		cin>>PRI[i];
	FOR(i,0,vvv)
		{
			if(VISI[i])	continue;
			else
				{
					cnt=0;
					tmp=(LL)(1e18);
					depth(i);
					if(tmp==(LL)(1e18))
						{
							if(cnt==vvv)	cout<<0<<endl;
							else		cout<<-1<<endl;
							return 0;
						}
					else	ans.PB(tmp);
				}
		}
	sort(ans.begin(), ans.end());
	n=ans.size();
	rr=ans[0]*(n-1);
	FOR(i,1,n)	rr+=ans[i];
	cout<<rr<<endl;
	return 0;
}
