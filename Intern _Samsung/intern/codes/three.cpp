/* bhupkas */

#include "iostream"
#include "vector"
#include "stdio.h"
#include "algorithm"

using namespace std;

#define FOR(i,a,b)		for(int i=a;i<b;i++)

int main()	{
	int a,b,c,i,j,k,n,l,te,ans = 0;
	vector<int> v;
	cin>>n;
	FOR(i,0,n)	{
		cin>>te;
		v.push_back(te);
	}
	sort(v.begin(),v.end());
	FOR(i,0,n-2)	{
		a = v[i];
		k = i+1;
		l = n-1;
		while(k<l)	{
			b=v[k];
			c=v[l];
			if(a+b+c == 0)	{
				ans++;
				}
			if(a+b+c >0)	l--;
			else			k++;
		}
	}
	cout<<ans<<endl;
	return 0;
}