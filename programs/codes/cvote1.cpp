#include"stdio.h"
#include"string.h"
#include"map"
#include"string"
#include"vector"
#include"iostream"
#include"algorithm"
using namespace std;
int main()
	{
		string MIN,CHEF,COUNTRY,TEMP;
		map<string,string> mymap;
		vector<string> same;
		vector<string>::iterator vit;
		map<string,int> chef;
		map<string,int> country;
		map<string,int>::iterator it;
		int max,m,n,i,j;
		scanf("%d %d",&n,&m);
		getchar();
		for(i=0;i<n;i++)
			{
				cin>>CHEF;getchar();cin>>COUNTRY;getchar();
				mymap[CHEF]=COUNTRY;
				chef[CHEF]=0;
				country[COUNTRY]=0;
			}
		for(i=0;i<m;i++)
			{
				cin>>CHEF;getchar();
				chef[CHEF]++;
				country[mymap[CHEF]]++;
			}
		max=-1;
		for(it=country.begin();it!=country.end();it++)
			if((*it).second>max)	max=(*it).second;
		for(it=country.begin();it!=country.end();it++)
			if((*it).second==max)	same.push_back((*it).first);
		vit=same.begin();
		MIN=(*vit);
		for(vit=same.begin();vit!=same.end();vit++)
				if((*vit)<MIN)	{MIN=(*vit);}
		cout<<MIN<<endl;
		same.clear();
		max=-1;
		for(it=chef.begin();it!=chef.end();it++)
			if((*it).second>max)	max=(*it).second;
		for(it=chef.begin();it!=chef.end();it++)
			if((*it).second==max)	same.push_back((*it).first);
		vit=same.begin();
		MIN=(*vit);
		for(vit=same.begin();vit!=same.end();vit++)
				if((*vit)<MIN)	{MIN=(*vit);}
		cout<<MIN<<endl;
		return 0;	
	}