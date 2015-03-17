/* bhupkas */

#include "iostream"
#include "stdio.h"
#include "vector"

using namespace std;

int main()
	{
		int i,n;
		vector<int> v;
		cin>>n;
		if(n==1)	{cout<<1<<endl;	return 0;}	
		for(i=2;i<=n;i++)
			{
				if(n%i==0)	
					{
						while(n%i==0)
							{
								v.push_back(i);
								n/=i;
							}
					}
			}
		for(i=0;i<v.size();i++)
			cout<<v[i]<<" ";
		cout<<endl;
		return 0;
	}