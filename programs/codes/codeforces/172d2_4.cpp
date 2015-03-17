#include"iostream"
#include"stdio.h"
#include"vector"
#include"algorithm"
#include"set"
#include"map"
#include"math.h"
#include"string.h"
#include"string"
using namespace std;
#define FOR(i,a,b)	for(i=a;i<b;i++)
typedef long long int LL;
int main()
	{
	LL n,i,te;
	vector<LL> v;
	cin>>n;
	FOR(i,0,n)	{cin>>te;	v.push_back(te);}
	LL M[100005],SM[100005],M1[100005],SM1[100005];
	set<LL> my;
	set<LL>::iterator it;
	my.insert(v[0]);
	M[0]=v[0];
	SM[0]=v[0];
	M1[n-1]=v[n-1];
	SM1[n-1]=v[n-1];
	FOR(i,1,n)
		{
		my.insert(v[i]);
		it=my.end();
		it--;
		M[i]=(*it);
		it--;
		SM[i]=(*it);
		}
	my.clear();
	for(i=n-2;i>=0;i--)
		{
		my.insert(v[i]);
		it=my.end();
		it--;
		M1[i]=(*it);
		it--;
		SM1[i]=(*it);
		}
	FOR(i,1,n-1)
		{
		
		}
	return 0;
	}
