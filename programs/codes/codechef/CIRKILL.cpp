/* bhupkas */

#include "iostream"
#include "vector"
#include "algorithm"
#include "math.h"
#include "stdio.h"

using namespace std;

#define FOR(i,a,b)	for(i=a;i<b;i++)
#define PI		pair<int,int>
#define PB 		push_back
#define MP		make_pair
#define LL              long long 
#define PDD		pair<double,double>
#define eps		(double)(1e-9)

vector<PDD> v;

double distance(double x1,double y1,double x2,double y2)
	{
		double re;
		re= (x1-x2)*(x1-x2) +(y1-y2)*(y1-y2);
		return sqrt(re);
	}

bool coll(LL i,LL j,LL k)
	{
		
		double f1,f2,x1,x2,x3,y1,y2,y3;
		x1=v[i].first;
		x2=v[j].first;
		x3=v[k].first;
		y1=v[i].second;
		y2=v[j].second;
		y3=v[k].second;
		f1=(y1-y2)*(x2-x3);
		f2=(x1-x2)*(y2-y3);
		if(f1==f2)	return true;
		return false;
	}

bool check(LL i,LL j,LL k,LL l)
	{
		double cx,cy;
		double x1,x2,x3,y1,y2,y3;
		x1=v[i].first;
		y1=v[i].second;
		x2=v[j].first;
		y2=v[j].second;
		x3=v[k].first;
		y3=v[k].second;
		double divi=x1*(y2-y3)-y1*(x2-x3)+x2*y3-x3*y2;
		divi=2*divi;
		cx=(x1*x1+y1*y1)*(y2-y3);
		cx=cx+(x2*x2+y2*y2)*(y3-y1);
		cx=cx+(x3*x3+y3*y3)*(y1-y2);
		cx=cx/divi;
		cy=(x1*x1+y1*y1)*(x3-x2);
		cy=cy+(x2*x2+y2*y2)*(x1-x3);
		cy=cy+(x3*x3+y3*y3)*(x2-x1);
		cy=cy/divi;
		double rad=(cx-x1)*(cx-x1)+(cy-y1)*(cy-y1);
		rad=sqrt(rad);
		if(distance(v[l].first,v[l].second,cx,cy)<=rad+eps)	return true;
		return false;
	}

int main()
	{
		double x,y;
		LL ans,all,i,j,k,l,n,t;
		cin>>t;
		while(t--)
			{
				v.clear();
				all=0;
				ans=0;
				cin>>n;
				FOR(i,0,n)
					{
						cin>>x>>y;
						v.PB(MP(x,y));
					}
				FOR(i,0,n)
					{
						FOR(j,i+1,n)
							{
								FOR(k,j+1,n)
									{
										FOR(l,0,n)
											{
												if(l==i || l==j || l==k)	continue;
												all++;
												if(coll(i,j,k))	continue;
												if(check(i,j,k,l))	ans++;
													
											}
									}
							}
					}
				printf("%0.9lf\n",(double)ans/(double)all);
			}				
		return 0;
	}
