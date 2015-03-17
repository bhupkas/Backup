/* bhupkas */

using namespace std;

#include "bits/stdc++.h"

typedef long long LL;

map < LL , bool > m;
map < LL , bool > :: iterator it1,it2;

int main()
{
	int n,k;
	cin >> n >> k;
	vector < int > v(n);
	LL pp = n/2;
	if(k < pp)
	{
		cout << -1 << endl;
		return 0;
	}
	if(n == 1 && k != 0)
	{
		cout << -1 << endl;
		return 0;
	}
	if(k == 0 && n ==1)
	{
		cout << 1 << endl;
		return 0;
	}
	int now = k / pp;
	if(k % pp == 0)
	{
		for(int i = 0 ; i < pp; ++i)
		{
			v[2*i] = now * (2*i + 1);
			v[2*i+1] = now * (2*i + 2);
			m[now*(2*i+1)] = true;
			m[now*(2*i+2)] = true;
		}
		k = 0;	
	}
	else
	{
		for(int i = 0 ; i < pp - 1 ; ++i)
		{
			v[2*i] = now * (2*i + 1);
			v[2*i+1] = now * (2*i + 2);
			m[now*(2*i+1)] = true;
			m[now*(2*i+2)] = true;
		}
		k -= (now * (pp-1));
		int i = 1;
		while(1)
		{
			it1 = m.find(i*k);
			it2 = m.find((i+1)*k);
			if(it1 != m.end() || it2 != m.end())	
			{
				++i;
				continue;
			}
			else
			{
				v[2*pp-2] = i*k;
				v[2*pp-1] = (i+1)*k;		
				m[i*k] = true;
				m[(i+1)*k] = true;
				break;
			}
		}
	}
	
	if(n&1)	
	{
		int la = (int)(1e9);
		while(1)
		{
			it1 = m.find(la);
			if(it1 == m.end())
			{
				v[n-1] = la;
				break;
			}	
			else	la--;
		}
	}
	for(int i = 0 ; i < n ; ++i)	cout << v[i] << " ";
	cout << endl;
	return 0;
}
