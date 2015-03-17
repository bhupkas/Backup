#include"stdio.h"
#include"map"
#include"utility"
#inlude"algorithm"
#include"vector"
double f(double d)
	{
		if(d<0)	return -1*d;
		return d;
	}
using namespace std;
int main()
	{
		int t,n,i,temp,x,y,t1,t2,j,max;
		pair<int ,int > p;
		vector < pair <int,int> > v;
		map< double,int> m;
		double d;
		scanf("%d",&t);
		while(t--)
			{
				max=1e8;
				scanf("%d",&n);
				for(i=0;i<n;i++)	
				{
					scanf("%d %d",&x,&y);
					p.first=x;
					p.second=y;
					v.push_back(p);
				}
				for(i=0;i<n;i++)
					{
						m.clear();
						for(j=i;j<n;j++)
							{
								if(j==i)	continue;
								if(v[j].second==v[i].second)
								if(v[j].first==v[i].first)
								d=f((v[j].second-v[i].second)/(v[j].first-v[i].first));
							}
					}	
			}
		return 0;
	}