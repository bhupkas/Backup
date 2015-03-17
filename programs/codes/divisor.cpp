#include"stdio.h"
#include"iostream"
using namespace std;
int main()
	{
		int i,n,ans,t;
		cin>>t;
		while(t--)
			{
				ans=0;
				cin>>n;
				for(i=2;i*i<=n;i++)
				{
					if(n%i==0)	ans= ans + i +n/i;
				}
				ans+=1;
			cout<<ans<<endl;
			}
		return 0;
	}