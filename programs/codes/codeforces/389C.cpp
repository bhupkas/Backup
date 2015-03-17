/* bhupkas */

#include "bits/stdc++.h"

using namespace std;

bool visi[105];

int n;
vector < int > v;

int rem;

void fun(int i)
{
	visi[i] = true;
	i++;
	int co = 0;
	while(i < n)
	{
		if(visi[i])	
		{
			i++;
			continue;
		}	
		if(v[i] > co)
		{
			visi[i] = true;
			co++;
			i++;
			continue;
		}
		i++;
	}
}

int main()
{
	memset(visi,false,sizeof(visi));
	cin >> n;	
	v.resize(n);
	for(int i = 0 ; i < n ; i++)	cin >> v[i];
	sort(v.begin(),v.end());
	int cnt = 0;
	for(int i = 0 ;	i < n ; i++)
	{
		if(!visi[i])
		{	
			fun(i);
			cnt++;
		}	
	}
	cout << cnt << endl;
	return 0;
}
