/* bhupkas */

#include "stdio.h"
#include "iostream"
#include "vector"

using namespace std;

#define FOR(i,a,b)		for(int i = a;i < b;i++)

int main()	{
	int ans = 0,i,j,n,k,te;
	vector<int> v;
	cin>> n;
	FOR(i,0,n)	{
		cin>>te;
		v.push_back(te);
	}
	FOR(i,0,n)	{
		FOR(j,i+1,n)	{
			FOR(k,j+1,n)	{
				if(v[i] + v[j] + v[k] == 0)	ans++;
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}