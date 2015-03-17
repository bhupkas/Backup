#include"stdio.h"
#include"iostream"
using namespace std;
int mo(int a)
	{
		if(a<0)	return -1*a;
		return a;
	}
int main()
	{
		int t,n,x[1505],y[1505],X,Y,i,j;
		cin>>t;
		int ans=0;
		while(t--)
			{
				ans=0;
				cin>>n;
				cin>>X>>Y;
				for(i=0;i<n;i++)
				{
					cin>>x[i]>>y[i];
						ans+=(mo(X-x[i])+mo(Y-y[i]));
				}
			cout<<2*ans<<endl;
			}
		return 0;
	}
