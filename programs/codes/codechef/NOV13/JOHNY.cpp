/* bhupkas */

#include "bits/stdc++.h"

using namespace std;

bool cmp(pair < int , int > p1 , pair < int , int > p2)
{
	return p1.first < p2.first;
}

int main()
{
	int t,n,k;
	cin >> t;
	vector < pair < int , int > > v;
	while(t--)
	{
		v.clear();
		int te;
		cin >> n ;
		for(int i = 0 ; i < n ; i++)	cin >> te , v.push_back(make_pair(te , i));
		cin >> k;
		sort(v.begin(),v.end(),cmp);
		k--;
		for(int i = 0 ; i < n ; i++)
		{
			if(v[i].second == k)
			{
				cout << i + 1 << endl;
				break;
			}
		}
	}
	return 0;
}