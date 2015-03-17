#include"stdio.h"
#include"vector"
using namespace std;
int max(int a,int b)
	{
		if(a>b)	return	a;
		return b; 
	}
bool search(vector<int> h,int x)
	{
		int prev=0,i;
		int n=(int)(h.size());
		for(i=0;i<n;i++)
		{
			if(h[i]+x<=prev)	return false;
			prev=max(h[i]-x,prev+1);	
		}
		return true;
	}
int main()
	{
		int m,l,r,n,i,x,re;
		scanf("%d",&n);
		vector<int> h;
		for(i=0;i<n;i++)
		{
			scanf("%d",&x);
			h.push_back(x);
		}
		l=0;r=1000000000;
		while(l<=r)
			{
				m=(l+r)/2;
				if(search(h,m))
				{
					re=m;
					r=m-1;
				}
				else	l=m+1;
			}
		printf("%d\n",re );
		return 0;
	}