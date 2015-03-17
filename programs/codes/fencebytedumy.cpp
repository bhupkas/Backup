#include"stdio.h"
#include"vector"
#include"algorithm"
#include"utility"
#include"map"
using namespace std;
#define inf 1e8
struct point 
	{
		int x;
		int y;
	};
typedef struct point Point;
vector< Point > v;
int oo;
double sl(Point a,Point b)
	{
		if(a.x==b.x)	return (double)inf;
		return ((double)(b.y-a.y)/(double)(b.x-a.x));
	}
bool fu(Point a,Point b)
	{
		double d1,d2;
		if(a.x==v[oo].x)	d1=(double)inf;
		else	d1=(double)(a.y-v[oo].y)/(double)(a.x-v[oo].x);
		if(b.x==v[oo].x)	d2=(double)inf;
		d2=(double)(b.y-v[oo].y)/(double)(b.x-v[oo].x);
		if(d1==inf&&d2==inf)	return a.y>b.y;
		if(d1==d2)				return a.x<b.x;
		return d1<d2;
	}
int main()
	{
		int x,y,k,min1,min2,n,i,t1,t2,t3;
		double d1,d2;
		scanf("%d",&n);
		pair<int,int> p;
		map < pair <int,int>, bool > m;
		map < pair <int,int>, bool >::iterator it;
		for(i=0;i<n;i++)	
			{
				scanf("%d %d %d",&t1,&t2,&t3);
				p.first=t1;p.second=t2;
				m[p]=true;
			}
		
		Point p1;
		for(it=m.begin();it!=m.end();it++)
			{
				p1.x=(*it).first.first;
				p1.y=(*it).first.second;
				v.push_back(p1);
			}
		min1=10000;
		t1=(int)v.size();
		for(i=0;i<(int)v.size();i++)
			if(v[i].x<min1)	min1=v[i].x;
		min2=10000;
		for(i=0;i<t1;i++)
		{
			if(v[i].x==min1&&v[i].y<min2)	{min2=v[i].y;	oo=i;}
		}
		sort(v.begin(),v.end(),fu);
		for(i=0;i<(int)v.size()-1;i++)
			{	if(i==oo)	continue;
				if(sl(v[i],v[oo])!=sl(v[i+1],v[oo]))	break;
			}
		if(i==(int)v.size()-1)
			{
				printf("%d\n",t1+1);
				for(i=0;i<t1;i++)
					printf("%d %d\n",v[i].x,v[i].y);
				if(sl(v[0],v[1])!=(double)inf)	printf("%d %d\n",v[oo].x,v[oo].y +1);
				else							printf("%d %d\n",v[oo].x-1,v[oo].y );
				return 0;
			}	
		printf("%d\n",t1);
		for(i=0;i<t1;i++)
			printf("%d %d\n",v[i].x,v[i].y);
		return 0;
	}