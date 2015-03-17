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
#define SLL(n)		scanf("%lld",&n)

LL k,n,i,j,ans=0,co=0,cnt=0,te,m,curr;
vll comp;
vll depen[205];
bool visited[205];
vll order;

void pre()
	{

	}

int main()
	{
		ans=(LL)(1<<30);
		pre();
		cin>>n;
		LL i,j;
		FOR(i,0,n)
			{
				visited[i]=false;
				cin>>te;
				comp.PB(te-1);
			}
		FOR(i,0,n)
			{
				cin>>k;
				if(k==0)	curr=k;
				FOR(j,0,k)
					{
						cin>>te;
						depen[i].PB(te-1);
					}
			}
		LL room;
		FOR(room,0,3)
			{
				curr=room;
				FOR(i,0,n)	visited[i]=false;
				cnt=0;
				te=0;
				while(cnt<n)
					{
						vll now;
						FOR(i,0,n)
							{
								if(visited[i]==true || comp[i]!=curr)	continue;
								FOR(j,0,depen[i].size())
									{
										if(!visited[depen[i][j]])	break;
									}
								if(j==depen[i].size())	now.PB(i);
							}
						if(now.size()==0)	{curr=(curr+1)%3;	te++;}
						else
							{
								FOR(i,0,now.size())
									{
										visited[now[i]]=true;
										cnt++;
										te++;
									}
								now.clear();
							}
					}
				ans=min(ans,te);
			}
		cout<<ans<<endl;
		return 0;
	}