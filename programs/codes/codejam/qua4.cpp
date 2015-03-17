#include"iostream"
#include"stdio.h"
#include"vector"
#include"algorithm"
#include"map"
#include"set"
#include"string.h"
#include"string"
#include"math.h"
#include"queue"
using namespace std;
#define FOR(i,a,b)	for(i=a;i<b;i++)
typedef long long LL;
typedef vector<int> VI;
typedef vector<LL>  VLL;
typedef pair<int,int> PI;
typedef pair<LL,LL> PLL;
int CNT[25];
int n;
vector<int> v[25];
int OPEN[25];
vector<int> v1;
deque<int> q;
bool check(int i,int tc)
	{
	v1.clear();
	q.clear();	
	int CNT1[25];
	int j,k,te,oo;
	bool VISITED[25];
	FOR(j,0,n)	VISITED[j]=false;
	FOR(j,0,n)	CNT1[j]=CNT[j];
	if(CNT1[OPEN[i]]==0)	return false;	
	q.push_back(i);
	VISITED[i]=true;
	CNT1[OPEN[i]]--;
	FOR(j,0,v[i].size())	CNT1[v[i][j]]++;
	FOR(j,0,n)		if(CNT1[j])	break;
	if(j==n)	return false;
	te=0;
	while(1)
		{
		if(te==n)
			{
			if(q.size()<=1)	return false;
			te=q.back();
			te=te+1;
			q.pop_back();
			continue;			
			}
		FOR(j,te,n)
			{
			if(!VISITED[j] && (CNT1[OPEN[j]]>0))	
				{
				te=0;
				q.push_back(j);
				VISITED[j]=true;
				if(q.size()==n)	
					{
					cout<<"Case #"<<tc<<": ";
					while(!q.empty())
						{cout<<q.front()+1<<" ";	q.pop_front();}
					cout<<endl;
					return true;
					}
				CNT1[OPEN[j]]--;
				FOR(k,0,v[j].size())	CNT1[v[j][k]]++;						
				break;
				}
			}
		if(j==n)
			{
			if(q.size()<=1)	return false;
			te=(q.back());
			q.pop_back();
			VISITED[te]=false;
			CNT1[OPEN[te]]++;
			FOR(k,0,v[te].size())	CNT1[v[te][k]]--;
			te++;
			}
		}
	}
int main()
	{
	int ts,t,k,i,j,te,ans=0,num;
	bool flag;
	cin>>t;
	vector<int> vvv;
	for(ts=1;ts<=t;ts++)
		{
		vvv.clear();
		cin>>k>>n;
		FOR(i,0,n)	{v[i].clear();	CNT[i]=0;}
		FOR(i,0,k)	{cin>>te;	te--;	CNT[te]++;}	
		FOR(i,0,n)
			{
			cin>>te;
			te--;
			OPEN[i]=te;
			cin>>num;
			FOR(j,0,num)
				{
				cin>>te;
				te--;
				v[i].push_back(te);
				}
			}
		if(n==1 && CNT[OPEN[0]])	
			{
			cout<<"Case #"<<ts<<": "<<"1"<<endl;
			continue;
			}
		else if(n==1 && CNT[OPEN[0]]<=0)	
			{
			cout<<"Case #"<<ts<<": "<<"IMPOSSIBLE"<<endl;
			continue;
			}
			check(19,1);
		for(i=0;i<vvv.size();i++)
			{
			//if(check(vvv[i],ts))	break;
			}
		if(i==vvv.size())	
			cout<<"Case #"<<ts<<": "<<"IMPOSSIBLE"<<endl;
		}
	return 0;
	}
