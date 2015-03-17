#include<iostream>
#include<vector>
#include<cstdio>
using namespace std;
int main()
	{
		long t,n,i,sum,ans,count,temp;	
		vector<long> v;
		scanf("%ld",&t);
		while(t--)
			{
			sum=0;
			scanf("%ld",&n);
			for(i=0;i<n;i++)
				{
				scanf("%ld",&temp);
				v.push_back(temp);
				sum+=temp;
				}
			ans=sum/n;
			count=0;
			for(i=0;i<n;i++)
				{
				count+=v.at(i)-ans;
				if(count<0)
					{
					while(count<0)
						{
							count+=(i+1);
							ans--;
						}
					}	
				}
			printf("%ld\n",ans);
			v.clear();
			}
	return 0;
	}
			
