/* bhupkas */

#include "bits/stdc++.h"

using namespace std;

bool visi[105][105];

int n;

bool foo;

vector < string > v;

void fun(int i,int j)
{
	if(i > n - 3 || j > n - 2 || j == 0)	
	{	
		foo = false;
		return;
	}
	visi[i][j] = true;
	if(v[i+1][j] == '.' || v[i+2][j] == '.' || v[i+1][j-1] == '.' || v[i+1][j+1] == '.')	
	{
		foo = false;
		return;
	}	
	if(visi[i+1][j] || visi[i+2][j] || visi[i+1][j-1] || visi[i+1][j+1])	
	{	
		foo = false;
		return;
	}
	visi[i+1][j] = true;
	visi[i+2][j] = true;
	visi[i+1][j-1] = visi[i+1][j+1] = true;
}

int main()
{
	cin >> n;
	v.resize(n);
	for(int i = 0 ; i < n ; i++)	cin >> v[i];
	memset(visi,false,sizeof(visi));
	foo = true;
	for(int i = 0 ; i < n ;  i++)
	{
		for(int j = 0 ; j < n ; j++)
		{
			if(!visi[i][j] && v[i][j] == '#')	
			{
				fun(i,j);
			}
		}
	}
	for(int i = 0 ; i < n ; i++)	for(int j = 0 ; j < n ; j++)	if(!visi[i][j] && v[i][j] == '#')	foo = false;
	if(foo)	cout << "YES" << endl;
	else	cout << "NO" << endl;	
	return 0;
}