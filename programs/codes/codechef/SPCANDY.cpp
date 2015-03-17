/* bhupkas */

#include "iostream"
#include "stdio.h"

using namespace std;

#define FOR(i,a,b)		for(i=a;i<b;i++)
#define LL				long long 

int main()
	{
		LL t,n,k;
		cin>>t;
		while(t--)
			{
				cin>>n>>k;
				if(n==0 && k==0)	cout<<0<<" "<<0<<endl;	
				else if(k==0)		cout<<0<<" "<<n<<endl;
				else if(n==0)		cout<<0<<" "<<0<<endl;	
				else cout<<n/k<<" "<<n%k<<endl;
			}
		return 0;
	}