/* bhupkas */

#include "iostream"
#include "assert.h"

using namespace std;

#define FOR(i,a,b)		for(i=a;i<b;i++)

int main()
	{
		int t,w,b,ans,i,j;
		cin>>t;
		assert(t<=10000);
		while(t--)
			{
				cin>>w>>b;
				assert(w<=100000000 && w>=0 && b>=0 && b<=100000000 && (b+w)>0);
				if(b&1)	cout<<1<<endl;
				else	cout<<0<<endl;
			}
		return 0; 
	}