#include"stdio.h"
#include"iostream"
#include"vector"
#include"map"
#include"algorithm"
using namespace std;
int main()
	{
		int n,m,i,j;
		vector<int> F;
		vector<bool> prime;
		for(i=0;i<=10000000;i++)
			{
				prime.push_back(true);
				F.push_back(0);
			}
		prime[0]=false;
		prime[1]=false;
		for(i=2;i*i<=10000000;i++)
		{
			if(prime[i])
			{
				for(j=i;j<=10000000/i;j++)
					prime[i*j]=false;
			}
		}
		F[0]=0;
		F[1]=1;
		for(i=2;i<=10000000;i++)
		{
			if(F[i]==0)
			{
				for(j=i;j<=10000000;j+=i)
				{
					if(F[j]==0)		F[j]=i;
				}
			}
		}
		cin>>n>>m;
		map<int,int> nume;
		map<int,int> dene;
		int temp;
		vector<int> an;
		vector<int>	bn;
		for(i=0;i<n;i++)	{cin>>temp;	an.push_back(temp);}
		for(i=0;i<m;i++)	{cin>>temp;	bn.push_back(temp);}
		for(i=0;i<n;i++)
		{
			while(an[i]!=1)
			{
					nume[F[an[i]]]++;
					an[i]/=F[an[i]];
			}
		}
		for(i=0;i<m;i++)
		{
			while(bn[i]!=1)
			{
					dene[F[bn[i]]]++;
					bn[i]/=F[bn[i]];
			}
		}
		map<int,int>::iterator it1,it;
		for(it=nume.begin();it!=nume.end();it++)
		{
			temp=min(nume[(*it).first],dene[(*it).first]);
			nume[(*it).first]-=temp;
			dene[(*it).first]-=temp;
		}
		nume[1]=1;
		dene[1]=1;
		int count1=0,count2=0;
		map<int,int> nume1,dene1;
		temp=1;
		for(it=nume.begin();it!=nume.end();it++)
		{
			for(j=0;j<(*it).second;j++)
			{
				if(((long long)temp*((long long)(*it).first))>10000000)	{nume1[temp]++;	temp=(*it).first;}
				else temp=temp*((*it).first);
			}
		}
		nume1[temp]++;
		temp=1;
		for(it=dene.begin();it!=dene.end();it++)
		{
			for(j=0;j<(*it).second;j++)
			{
				if((long long)temp*((long long)(*it).first)>10000000)	{dene1[temp]++;	temp=(*it).first;}
				else	temp=temp*((*it).first);
			}
		}
		dene1[temp]++;	
		for(it=nume1.begin();it!=nume1.end();it++)
			{
				count1+=(*it).second;
			}
		for(it=dene1.begin();it!=dene1.end();it++)
			{
				count2+=(*it).second;
			}
		if(count1==0)
		{nume1[1]=1;	count1=1;}
		if(count2==0)
		{dene1[1]=1;	count2=1;}
		cout<<count1<<" "<<count2<<endl;
		for(it=nume1.begin();it!=nume1.end();it++)
		{
			for(j=0;j<(*it).second;j++)
				cout<<(*it).first<<" ";
		}
		cout<<endl;
		for(it=dene1.begin();it!=dene1.end();it++)
		{
			for(j=0;j<(*it).second;j++)
				cout<<(*it).first<<" ";
		}
		cout<<endl;
		return 0;
	}