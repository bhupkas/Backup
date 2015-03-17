#include"iostream"
#include"stdio.h"
#include"vector"
#include"algorithm"
using namespace std;
typedef long long LL;
void dfs(LL i,vector<LL> v[],bool Visited[])
	{
		Visited[i]=true;
		vector<LL>::iterator it;
		for(it=v[i].begin();it!=v[i].end();it++)
			{
				if(!Visited[(*it)])
				{
					dfs((*it),v,Visited);
				}
			}
	}
bool f(LL a,LL b)
	{
		return a<b;
	}
int main()
	{
		LL i,t,n,m,start,temp1,temp2;
		cin>>t;
		vector<LL> v[100002];
		LL mass[100002];
		vector<LL> COM;
		vector<LL> UVM;
		bool Visited[100002];
		while(t--)
			{
				cin>>n>>m;
				for(i=0;i<n;i++)
					Visited[i]=false;
				for(i=0;i<m;i++)
					{
						cin>>temp1>>temp2;
						if(i==0)	{start=temp1;}
						v[temp1].push_back(temp2);
						v[temp2].push_back(temp1);
					}
				for(i=0;i<n;i++)
				{
					cin>>mass[i];
				}
				dfs(start,v,Visited);
				LL count=0;
				for(i=0;i<n;i++)
					if(Visited[i])	count++;
				cout<<count;
				LL ans=0;
				if(count < n-count)	
				{
					cout<<"-1"<<endl;
				}
				else
				{
					for(i=0;i<n;i++)
					{
						if(Visited[i])	COM.push_back(mass[i]);
						else			{ans+=mass[i];	UVM.push_back(mass[i]);}		
					}
					LL si=(LL)UVM.size();
					sort(COM.begin(),COM.end(),f);
					for(i=0;i<si;i++)
					{
						ans+=COM[i];
					}
					cout<<ans<<endl;
				}
			}
		return 0;
	}