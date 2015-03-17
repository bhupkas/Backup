/* bhupkas */

#include "iostream"
#include "stdio.h"
#include "vector"
#include "algorithm"

using namespace std;

int main()
	{
		int i,n;
		cin>>n;
		vector<int> v(n);
		for(i=0;i<n;i++)	cin>>v[i];
		sort(v.begin(),v.end());
		for(i=0;i<n;i++)
			cout<<5*v[i]+i<<" "<<5*v[i]+i<<endl;
		return 0;
	}