#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
int m(int n)
	{
	if(n<0)	{n=-1*n;}
	return n;
	}
int main()
	{
	int hi,ci,temp,t,n,i,ans,csum,hop;
	vector<int> h,c;
	scanf("%d",&t);
	while(t--)
		{
		csum=0;
		ans=0;
		scanf("%d",&n);
		for(i=0;i<n;i++)
			{
			scanf("%d",&hi);
			h.push_back(hi);
			}
		for(i=0;i<n;i++)
			{
			scanf("%d",&ci);
			c.push_back(ci);
			}	
		hop=h.at(0);
		csum=c.at(0);
			for(i=1;i<n;i++)
				{
					if(c.at(i)<csum)	ans+=(m(hop-h.at(i)))*c.at(i);
					else		{ans+=(m(hop-h.at(i)))*csum;	hop=h.at(i);}
				
				csum+=c.at(i);
				}
		printf("%d\n",ans);
		h.clear();c.clear();
		}
	return 0;
	}
