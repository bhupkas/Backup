#include"stdio.h"
#include"iostream"
#include"algorithm"
using namespace std;
typedef long long LL;
bool check(LL n)
	{
		LL co=0;
		while(n)
			{
				if(n&1)	co++;
				n>>=1;
			}
		if(co==4 || co==7 || co==47 || co==44 )	return true;
		return false;
	}
int main()
	{
		LL ans,t,a,b,i;
		cin>>t;
		while(t--)
		{
			cin>>a>>b;
			ans=0;
			for(i=a;i<=b;i++)
				{
					if(check(i))	ans++;
				}
			cout<<ans<<endl;
		}
		return 0;
	}