#include"iostream"
#include"stdio.h"
#include"algorithm"
#include"vector"
#include"map"
#include"set"
#include"string.h"
#include"string"
#include"math.h"
using namespace std;
typedef long long LL;
#define FOR(i,a,b)	for(i=a;i<b;i++)
void pre()
	{
	}
int main()
	{
	pre();
	int s,te,i,j,k,n,m,t;
	vector<int> v;
	cin>>n>>s>>t;
	s--;t--;
	FOR(i,0,n)
		{
		cin>>te;
		te--;
		v.push_back(te);
		}
	bool A[n];
	FOR(i,0,n)	A[i]=false;
	A[s]=true;
	if(s==t)	{cout<<"0"<<endl;	return 0;}
	int co=0;
	while(1)
		{
		s=v[s];
		if(A[s])	{cout<<"-1"<<endl;		return 0;}
		A[s]=true;
		co++;
		if(s==t)	{cout<<co<<endl;	return 0;}
		}
	string str;
	return 0;
	}
