#include"stdio.h"
#include"string.h"
#include"string"
#include"vector"
#include"map"
#include"utility"
using namespace std;
struct arr
	{
		char S[21];
	};
typedef struct arr Arr;
int main()
	{
		char CHEF[21],COUNTRY[21],MIN1[21];
		int max,t,n,m,i;
		vector<Arr> same;
		vector<Arr>::iterator vit;
		Arr A1,A2,A3,A4;
		map<Arr,Arr> mymap;
		map<Arr,int> chef;
		map<Arr,int> country;
		map<Arr,int>::iterator it;
		pair<Arr,Arr> p;
		scanf("%d %d",&n,&m);
		getchar();
		
		//for(i=0;i<n;i++)
			{
				scanf("%s %s",CHEF,COUNTRY);
				strcpy(A1.S,CHEF);
				strcpy(A2.S,COUNTRY);
				strcpy(p.first.S,CHEF);
				strcpy(p.second.S,COUNTRY);
				mymap.insert (pair<Arr,Arr>(A1,A2));
				//mymap.insert(p);
				//chef[A1]=0;
				//country[A2]=0;
			}
		/*
		for(i=0;i<m;i++)
			{
				scanf("%s",CHEF);
				strcpy(A3.S,CHEF);
				strcpy(A4.S,mymap[A3].S);
				chef[A3]++;
				country[A4]++;
			}
		max=-1;
		for(it=chef.begin();it!=chef.end();it++)
				if((*it).second>max)	max=(*it).second;
		for(it=chef.begin();it!=chef.end();it++)
			{
				if((*it).second==max)	same.push_back((*it).first);
			}
		strcpy(MIN,same[0].S);
		for(vit=same.begin();vit!=same.end();vit++)
			{
				if(strcmp((*vit).S,MIN)<0)	strcpy(MIN,(*vit).S);	
			}
		*/
		return 0;
	}