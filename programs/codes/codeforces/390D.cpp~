/* bhupkas */

#include "bits/stdc++.h"

using namespace std;

int main()
{
	int n,m,k;
	cin >> n >> m >> k;
	int mi = 100000000;
	int kmin = 100000000;
	int val;
	int r,c;
	for(int i = 0 ; i <= n ; i++)
	{	
		for(int j = 0 ; j <= m ; j++)
		{	
			if(k - i*j < j && i != n)	
			{
				if(i+j < mi)	
				{
					r = i;
					c = j;
					mi = i + j;
					val = 1;
				}
			}
			if(k - i*j < i && j != m)	
			{
				if(i+j < mi)	
				{
					r = i;
					c = j;
					mi = i + j;
					val = 2;
				}
			}
		}
	}
	long long re = 0;
	for(int i = 0 ; i < r ; i++)
		re += (c*(c+1))/2 + i*c;		
	if(val == 1)
	{
		re += r*(k - r*c ) + ((k - r*c) * (k - r*c + 1))/2;
		cout << re << endl;
		for(int i = k - r *c ; i > 0 ; i--)
		{	
			for(int j = 1 ; j <= r + 1 ; j++)	cout << "(" << j << ",1) ";
			for(int j = 2 ; j <= i; j++)	cout << "(" << r+1 << "," << j <<") "; 
			cout << endl;
		}
		for(int i = r ; i >= 1 ; i--)
		{
			for(int j = c ; j >= 1 ; j--)
			{
				for(int k = 1 ; k <= i ; k++)	cout << "(" << k << ",1) ";
				for(int k = 2 ; k <= j  ; k++)	cout << "(" << i << "," << k << ") ";
				cout << endl; 
			}
		}
	}
	else
	{
		re += c*(k - r*c ) + ((k - r*c) * (k - r*c + 1))/2;	
		cout << re << endl;
		for(int i = k - r *c ; i > 0 ; i--)
		{	
			for(int j = 1 ; j <= c + 1 ; j++)	cout << "(1," << j << ") ";
			for(int j = 2 ; j <= i ; j++)	cout << "(" << c+1 << "," << j <<") "; 
			cout << endl;
		}
		for(int i = r ; i >= 1 ; i--)
		{
			for(int j = c ; j >= 1 ; j--)
			{
				for(int k = 1 ; k <= i ; k++)	cout << "(" << k << ",1 ";
				for(int k = 2 ; k <= j  ; k++)	cout << "(" << i << "," << k << ") ";
				cout << endl; 
			}
		}
	}
	return 0;
}
