/* bhupkas */

#include "iostream"
#include "stdio.h"
#include "vector"
#include "algorithm"
#include "set"
#include "map"
#include "string.h"
#include "string"
#include "math.h"
#include "deque"

using namespace std;

typedef long long LL;

#define FOR(i,a,b)	for(i=a;i<b;i++)
#define PB	push_back
#define I 	insert
#define vi	vector<int>
#define vll	vector<LL>

void pre()
	{

	}
int n,cnt,pos;
deque<int> q[1003];
vi v (1003);
vi v1 (1003);
int val,x;
bool visited[1004];

void dfs(int i)
	{
		visited[i]=true;
		if(i==x)	{val=cnt;}
		if(v[i]!=-1)	
			{
				q[cnt].push_front(i);
				dfs(v[i]);				
			}
		else
			{
				q[cnt].push_front(i);
			}
	}

int main()
	{
		pre();
		int imp,i,te,j,k,m;
		string str;
		char S[100];	
		cin>>n>>x;
		x--;
		FOR(i,0,n)	{cin>>v[i];v[i]--;}
		FOR(i,0,n+1)	visited[i]=false;
		FOR(i,0,n)
			{
				if(!visited[i])	
					{
						dfs(i);
						cnt++;
					}
			}
		int oo=0;
		vi sizes;
		int foo=0;
		imp=q[val].front();
		map<int,deque<int> > mymap;
		FOR(i,0,cnt)		mymap[q[i].front()]=q[i];
		FOR(i,0,cnt)		if(mymap[q[i].front()].size() < q[i].size())	mymap[q[i].front()]=q[i];
		pos=1;
		deque<int> temp=mymap[imp];
		while(temp.front()!=x)		
			{
				temp.pop_front();
				pos++;
			}
		map<int,deque<int> >::iterator it;
		for(it=mymap.begin();it!=mymap.end();it++)
			{
				if((*it).first==imp)	continue;
				else	sizes.PB((*it).second.size());
			}	
		set<LL> ans;
		set<LL>::iterator ii;
		ans.I((LL)pos);
		LL bit;
		LL sum;
		vector<LL> temp11;
		map<LL,bool> mymap11;
		map<LL,bool>::iterator it11;
		for(i=0;i<sizes.size();i++)
					{
						temp11.clear();
						int si=(int)mymap11.size();
						for(j=0,it11=mymap11.begin();j<si;j++,it11++)
							temp11.push_back((*it11).first+sizes[i]);
						for(j=0,it11=mymap11.begin();j<si;j++,it11++)
							mymap11[temp11[j]]=true;
						mymap11[sizes[i]]=true;
					}
		for(it11=mymap11.begin();it11!=mymap11.end();it11++)
			ans.I((LL)(*it11).first+(LL)pos);
		/*FOR(bit,0,1<<sizes.size())
			{
				sum=0;
				FOR(j,0,sizes.size())
					{
						if(1<<j & bit)
							sum+=sizes[j];
					}
				ans.I((LL)pos+sum);
			}
		*/
		for(ii=ans.begin();ii!=ans.end();ii++)
			cout<<(*ii)<<endl;
		return 0;
	}