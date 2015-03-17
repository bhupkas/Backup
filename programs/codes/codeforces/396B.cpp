/* bhupkas */

#include "bits/stdc++.h"

using namespace std;

typedef long long LL;

bool isprime(LL num)
{	
	for(LL i = 2 ; i*i <= num ; i++)
		if(num % i == 0)	return false;
	return true;
}

LL fun1(LL num)
{
	for(LL i = num ; i >= 2 ; i--)	if(isprime(i))	return i;
}

LL fun2(LL num)
{
	for(LL i = num + 1 ; ; i++)	if(isprime(i))	return i;
}

int main()
{
	LL t;
	LL n;
	cin >> t;
	LL prev,next;
	LL gc;
	LL num,den;
	while(t--)
	{
		cin >> n;
		prev = fun1(n);
		next = fun2(n);
		num = prev*next - 2* prev - (2*next - 2 - 2*n);
		den = 2*prev*next;
		gc = __gcd(num,den);
		num /= gc;
		den /= gc;
		cout << num << "/" << den << endl;
	}
	/*
	cin >> n;
	vector < int > v(n);
	for(int i = 0 ; i < n ; i++)	cin >> v[i];
	sort(v.begin(),v.end());
	*/
	return 0;
}
