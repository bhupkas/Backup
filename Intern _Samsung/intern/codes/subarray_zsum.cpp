/* bhupkas */

#include "iostream"
#include "stdio.h"
#include "vector"

using namespace std;

#define FOR(i,a,b)		for(int i=a;i<b;i++)
#define offset			50000

int A[1000005];

int main()	{
	int n,te;
	vector<int> v;
	cin>> n;
	FOR(i,0,n)	{
		cin>>te;
		v.push_back(te);
	}
	vector<int> cumm;
	FOR(i,0,n)	cumm.push_back(v[i]);
	FOR(i,1,n)	{
		cumm[i] += cumm[i-1];
	}
	FOR(i,0,1000005)	A[i] = 0;
	A[offset] = 1;
	FOR(i,0,n)	{
		A[offset + cumm[i]]++;
	}
	int ans = 0;
	int ma = -1;
	FOR(i,0,n)	ma=max(cumm[i],ma);
	FOR(i,0,ma + offset + 5)	{
		if( A[i] >= 2)	{
			ans += (A[i] * (A[i]- 1))/2;
		}
	}	
	cout<<ans<<endl;
	return 0;
}