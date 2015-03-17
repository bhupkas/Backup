/* bhupkas */

#include "bits/stdc++.h"

using namespace std;

int A[1000005];

vector < int > p;

int mx;

int D[1000005];

int wonumber;

int po(int a,int b)
{
	if(b == 0)	return 1;
	int re = 1;
	for(int i = 0 ; i < b ; i++)	re = re * a;
	return re;
}

int drs(int num)
{
	int val;
	while(1)
	{
		val = 0;
		while(num)	val += num % 10 , num /= 10;
		if(val < 10)	return val;
		num = val;
	}
}

void pre()
{
	for(int i = 0 ; i < 1000005 ; i++)	A[i] = i , D[i] = 1000000000;
	for(int i = 2 ; i * i < 1000005 ; i++)
	{
		if(A[i] == i)
		{
			D[i] = drs(i);
			for(int j = i ; j <= 1000005 / i ; j++)	A[i*j] = i;
		}
	}
	for(int i = 2 ; i < 1000005 ; i++)	if(A[i] == i)	p.push_back(i);
}

map < int , int >  fun(int num)
{
	wonumber = num;
	map < int , int > mymap;
	while(num != 1)
	{
		mymap[A[num]]++;
		num /= A[num];
	}
	return mymap;
}

void recur(map < int , int > mymap , int curr , int num)
{
	if(num == mymap.size())
	{
		int tot;
		if(curr == wonumber || curr == 1)	tot = drs(wonumber);
		else					tot = D[curr] + D[wonumber/curr];
		mx = max(mx,tot);
	}
	else
	{	
		map < int , int > :: iterator it;
		it = mymap.begin();
		for(int i = 0 ; i < num ; i++)	it++;
		int val = curr;
		for(int i = 0 ; i <= (*it).second ; i++)	
		{
			recur(mymap,val,num+1);
			val = val * (*it).first;
		}
	}
}

int solve(map < int , int > mymap)
{
	mx = -1;
	map < int , int > :: iterator it;
	it = mymap.begin();
	int val = 1;
	for(int i = 0 ; i <= (*it).second ; i++)	
	{
		recur(mymap,val,1);
		val = val * (*it).first;
	}
	D[wonumber] = mx;
	return mx;
}

int main()
{	
	pre();
	int re = 0;
	//for(int i = 2 ; i <= 24 ; i++)	solve(fun(i));
	//cout << D[24] << endl;
	for(int i = 2 ; i < 1000000 ; i++)	re += solve(fun(i));
	cout << re << endl;
	return 0;
}
