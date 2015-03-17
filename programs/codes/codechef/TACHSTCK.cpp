/* bhupkas */

#include "stdio.h"
#include "iostream"
#include "vector"
#include "algorithm"

using namespace std;

#define FOR(i,a,b)	for(i=a;i<b;i++)

int main()
	{	
		int ans=0,n,d,i,j;
		cin>>n>>d;
		vector<int> v (n);
		FOR(i,0,n)	cin>>v[i];
		sort(v.begin(),v.end());
		FOR(i,1,n)
			{
				if(v[i]-v[i-1]<=d)	{ans++;	i++;}
			}
		cout<<ans<<endl;
		return 0;
	}
