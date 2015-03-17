/* bhupkas */

#include "bits/stdc++.h"

using namespace std;

vector < pair < int , int > > v;
int n;

typedef long long LL;

#define INF (LL)(1e17)

bool cmpx(pair < int , int > a , pair < int , int > b)
{
	if(a.first == b.first)	return a.second < b.second;
	return a.first < b.first;
}

bool cmpy(pair < int , int > a , pair < int , int > b)
{
	if(a.second == b.second)	return a.first < b.first;
	return a.second < b.second;
}

LL dist(pair < int , int > a , pair < int , int > b)
{
	LL re = 0.0;
	re = (LL)(a.first - b.first) * (LL)(a.first - b.first) + (LL)(a.second - b.second) * (LL)(a.second - b.second);
	return re;
}

pair < LL , vector < pair < int , int > > > closestpair(vector < int , int > v)
{
	if(v.size() == 1)	return make_pair(INF,v);
	else if(v.size() == 2)
	{
		if(v[0].second > v[1].second)	swap(v[0],v[1]);
		return make_pair(dist(v[0],v[1]),v);
	}
	else
	{
		int mid = (v.size()) / 2;
		pair < int , int > p = v[mid];
		vector < pair < int , int > > l , r;
		for(int i = 0 ; i < mid ; i++)	l.push_back(v[i]);
		for(int i = mid ; i < v.size() ; i++)	r.push_back(v[i]);
		pair < LL , vector < pair < int , int > > > rel , rer;
		rel = closestpair(l);
		rer = closestpair(r);
		LL curr = min(rel.first , rer.first);
		int i,j,k;
		i=l;
		j=mid+1;
		k=l;
		while(i<=mid && j<=r)	{
			if(A[i]<A[j])	B[k++] = A[i++];
			else			B[k++] = A[j++];
		}
		while(i<=mid)	B[k++]=A[i++];
		while(j<=r)		B[k++]=A[j++];
		for(i=l;i<=r;i++)	A[i]=B[i];
		}
} 

int main()
{
	cin >> n;
	int x , y;
	for(int i = 0 ; i < n ; i++)
	{
		cin >> x >> y;
		v.push_back(make_pair(x,y));
	}
	sort(v.begin() , v.end() , cmpx);
	return 0;
}