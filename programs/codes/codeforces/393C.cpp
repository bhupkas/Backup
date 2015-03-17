/* bhupkas */

#include "bits/stdc++.h"

using namespace std;

typedef long long LL;

int main()
{
	LL n;
	string str;
	/*
	cin >> n ;
	vector <int > v(n);
	for(int i = 0 ; i < n ; i ++)	cin >> v[i];
	sort(v.begin(),v.end());
	*/
	cin >> n;
	if(n == 0)
	{
		cout << 1 << endl;
		return 0;
	}
	int a,b;
	a = n;
	LL val;
	double temp;
	LL cnt = 0;
	for(LL i = 1 ; i < n ; i++)
	{
		temp = sqrt(n*n - i*i);
		val = (int)temp;
		b = val;
		if(a == b)	cnt++;
		else		cnt += (LL)(a-b);		
		a = b;
	}
	b = 0;
	if(a == b)	cnt++;	
	else		cnt += (LL)(a-b);	
	/*
	for(LL i = 1 ; i <= n ; i++)
	{
		if(v[i] == v[i-1])	cnt++;
		else			cnt += (LL)(v[i-1] - v[i]);
	}
	*/
	cnt--;
	cout << 4*cnt + 4LL << endl;
	return 0;
}
