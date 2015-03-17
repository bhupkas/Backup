/* bhupkas */

#include "bits/stdc++.h"

using namespace std;

typedef long long LL;

map < LL , bool > mymap;
map < LL , bool > :: iterator it;

int main()
{
	int t;
	cin >> t;
	LL num;
	int n;
	vector < LL > v;
	while(t--)
	{	
		mymap.clear();
		cin >> n;
		v.clear();
		for(int i = 0 ; i < n ; i++)
		{	
			cin >> num;
			v.push_back(num);
			mymap[num] = true;
		}
		int re = 0;
		for(int i = 0 ; i < n ; i++)
		{
			if(mymap[v[i]] == false)	continue;
			if(v[i]&1)	
			{
				it = mymap.find((v[i] - 1)/2);
				if(it != mymap.end() && mymap[(v[i] - 1)/2] == true)	
				{
					re++;
					mymap[v[i]] = false;
					mymap[(v[i] - 1)/2] = false;
				}
			}
			else
			{
				it = mymap.find((v[i])/2);
				if(it != mymap.end() && mymap[(v[i])/2] == true)	
				{
					re++;
					mymap[v[i]] = false;
					mymap[(v[i])/2] = false;
				}
			}	
		}
		cout << re << endl;
	}
}
