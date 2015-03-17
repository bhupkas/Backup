#include "bits/stdc++.h"

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector < int > v(n);
	int c1,c2;
	c1 = c2 = 0;
	for(int i = 0 ; i < n ; ++i)	
	{
		cin >> v[i];
		if(v[i] == 100)	c1++;
		else	c2++;
	}
	if(c1 & 1)	{	puts("NO");	return 0;}
	else
	{
		if(c2&1)
		{
			if(c1 != 0)	{	puts("YES");	return 0;}
			else		{puts("NO");	return 0;}
		}
		else	{puts("YES");	return 0;}
	}
	return 0;
}
