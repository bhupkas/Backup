/* bhupkas */

#include "bits/stdc++.h"

using namespace std;

int main()
{
	int n;
	string l;
	string k;
	int count = 0, x = 0, y = 0;
	cin >> l;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin>>k;
		for(int j = 0, x = y = 0; j <= l.size(); j++)
		{
			if(l[j] == k[0])	x++;
			else if(l[j] == k[1])	y++;
			else
			{
				count += min(x,y);
				x = y = 0;
			}
		}
	}
	cout<<count<<endl;
	return 0;

}
