/* bhupkas */

#include "bits/stdc++.h"

using namespace std;

int main()
{
	int n;
	int num;
	cin >> n;
	vector < int > v(n);
	for(int i = 0 ; i < n ; i++)
	{
		cin >> v[i];
	}
	sort(v.begin(),v.end());
	if(n == 1)
	{
		cout << -1 << endl;
		return 0;
	}
	if(n == 2)
	{
		if((v[1] - v[0] == 0))
		{
			cout << 1 << endl;
			cout << v[0] << endl;
			return 0;
		}
		if((v[1] - v[0]) % 2 == 0)
		{
			cout << 3 << endl;
			cout << v[0] - (v[1] - v[0]) << " " << v[0] + (v[1] - v[0]) / 2 << " " << v[1] + (v[1] - v[0]) << endl;
			return 0;
		}
		else
		{
			cout << 2 << endl;
			cout << v[0] - (v[1] - v[0]) << " " << v[1] + (v[1] - v[0]) << endl;
			return 0;
		}
	}
	vector < int > diff;
	set < int > s;
	for(int i = 1 ; i < n ; i++)
	{
		diff.push_back(v[i] - v[i-1]);
		s.insert(v[i] - v[i-1]);
	}
	if(s.size() == 2)
	{
		set < int > :: iterator it,it1;
		it = s.begin();
		if((*it) == 0)
		{
			cout << 0 << endl;
			return 0;
		}
		it1 = it;
		it1++;
		int cnt1 , cnt2;
		cnt1 = cnt2 = 0;
		if((*it1) != 2*(*it))
		{
			cout << 0 << endl;
			return 0;
		}
		bool ok = true;
		for(int i = 0 ; i < n - 1 ; i++)
		{
			if(diff[i] == (*it))	cnt1++;
			else			cnt2++;
		}
		if(cnt2 != 1)
		{
			cout << 0 << endl;
			return 0;
		}
		int i;
		for(i = 1 ; i < n ; i++)
		{	
			if(v[i] - v[i-1] != (*it))	break;
		}
		cout << 1 << endl;
		cout << v[i-1] + (*it) << endl;
		return 0;	
	}
	if(s.size() == 1)
	{
		set < int > :: iterator it;
		it = s.begin();
		if((*it) == 0)
		{
			cout << 1 << endl;
			cout << v[0] << endl;
			return 0;
		}
		else
		{
			cout << 2 << endl;
			cout << v[0] - (v[1] - v[0]) << " " << v[n-1] + (v[1] - v[0]) << endl;
			return 0;
		}
	}
	cout << 0 << endl;
	return 0;
}
