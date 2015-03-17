/* bhupkas */

/* Finding the upper_bound for a given element x in an array, hence finding the nearest element */

#include "stdio.h"
#include "iostream"
#include "algorithm"
#include "vector"

using namespace std;

#define FOR(i,a,b)		for(i=a;i<b;i++)
#define vi				vector<int>
#define PB				push_back

vi v;
int x;

int upper_bound_idx(int low, int high,int x)
	{
		int mid;
		while(low<=high)
			{
				mid=(low+high)/2;
				cout<<mid<<endl;
				if(mid==0)	return 0;
				if(v[mid]>x && v[mid-1]<=x)	return mid;
				if(v[mid]>x)	high=mid-1;
				else		low=mid+1;
			}
	}

int main()
	{
		int idx,te,i,j,n;
		cin>>n;
		FOR(i,0,n)
			{
				cin>>te;
				v.PB(te);
			}
		sort(v.begin(),v.end());
		cin>>x;
		idx=upper_bound_idx(0,n-1,x);
		cout<<v[idx]<<endl;
		return 0;
	}