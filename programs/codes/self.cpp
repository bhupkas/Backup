#include"stdio.h"
#include"vector"
using namespace std;
int main()
	{
		vector<int> v;
		v.push_back(0);
		v.push_back(1);
		v.push_back(2);
		int i,r=2,t,n,next=3,point=2;
		while(r<=1000000)
		{
			for(i=0;i<v[point];i++)
			{
				v.push_back(next);
				r++;
			}
			next++;
			point++;
		}
		scanf("%d",&t);
		for(i=1;i<=t;i++)
		{
			scanf("%d",&n);
			printf("Case #%d: %d\n",i,v[n]);
		}
		return 0;
	}