#include"stdio.h"
#include"iostream"
#include"vector"
using namespace std;
int main()
	{
		long long int i,temp,n,x;
		vector < long long int > v;
		vector<long long int> v1;
		vector<long long int > minim;
		cin>>n>>x;
		for(i=0;i<n;i++)
			{
				cin>>temp;
				v.push_back(temp);	
			}
		long long int j,min=1e10;
		x--;
		for(j=0;j<n;j++)
			{
				if(v[j]<min)	{min=v[j];	i=j;}
			}
		for(j=0;j<n;j++)
			{
				if(v[j]==min)	minim.push_back(j);	
			}
		bool flag=true;
		long long int k;
		for(k=0;k<n;k++)	v1.push_back(v[k]);
		for(k=0;k<(long long )minim.size();k++)
		{
			for(j=0;j<n;j++)	v[j]=v1[j];
			i=k;
			if(x<i)	
				{
					for(j=i+1;j<n;j++)
						{
							v[j]-=min+1;
							v[i]+=min+1;
						}
					for(j=0;j<=x;j++)
						{
							v[j]-=min+1;
							v[i]+=min+1;	
						}
					for(j=x;j<i;j++)
						{
							v[j]-=min;
							v[i]+=min;	
						}
					for(j=0;j<n;j++)
					{
						if(v[j]<0)	{flag=false;}
					}
					if(flag==false)	continue;
					else break;
				}
			if(x>i)	
				{
					for(j=x+1;j<n;j++)
						{
							v[j]-=min;
							v[i]+=min;
						}
					for(j=0;j<i;j++)
						{
							v[j]-=min;
							v[i]+=min;	
						}
					for(j=i+1;j<=x;j++)
						{
							v[j]-=min+1;
							v[i]+=min+1;	
						}
				for(j=0;j<n;j++)
					{
						if(v[j]<0)	{flag=false;}
					}
					if(flag==false)	continue;
					else break;
				}
			if(i==x)
				{
					for(j=0;j<i;j++)	
					{
						v[j]-=min;
						v[i]+=min;
					}
					for(j=i+1;j<n;j++)
					{
						v[j]-=min;
						v[i]+=min;
					}
				for(j=0;j<n;j++)
					{
						if(v[j]<0)	{flag=false;}
					}
					if(flag==false)	continue;
					else break;
				}
		}
		for(i=0;i<n;i++)
			cout<<v[i]<<" "	;
		cout<<"\n";	
		return 0;
	}