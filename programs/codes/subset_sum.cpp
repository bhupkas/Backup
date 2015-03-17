#include"stdio.h"
#include"iostream"
#include"map"
#include"vector"
using namespace std;
int main()
	{
		int t,n,B[105];
		int ans=0,i,j,temp,k;
		cin>>t;
		map<int,bool> m;
		vector<int> v;
		map<int,bool>::iterator it;
		while(t--)
		{
			ans=0;
			m.clear();
			cin>>n;
			for(i=0;i<n;i++)	scanf("%d",&B[i]);
			for(i=0;i<n;i++)
				{
					v.clear();
					for(it=m.begin();it!=m.end();it++)
						v.push_back(B[i]+(*it).first);
					j=(int)v.size();
					for(k=0;k<j;k++)	
						m[v[k]]=true;
				m[B[i]]=true;
				}
			for(it=m.begin();it!=m.end();it++)
			{
				ans+=(*it).first;
			}
			cout<<ans<<endl;
		}
		return 0;
	}