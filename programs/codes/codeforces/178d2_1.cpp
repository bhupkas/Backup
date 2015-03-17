#include"iostream"
#include"stdio.h"
#include"algorithm"
#include"vector"
#include"set"
#include"map"
#include"string.h"
#include"string"
#include"math.h"
using namespace std;
typedef long long LL;
#define FOR(i,a,b)	for(i=a;i<b;i++)
typedef vector<int> 	VI;
void pre()
	{
	}
int main()
	{
	pre();
	int si1,si2,te1,te2,t,n,k,i,j,m;
	VI v;
	cin>>n;
	FOR(i,0,n)
		{
		cin>>te1;
		v.push_back(te1);	
		}
	cin>>m;
	FOR(i,0,m)
		{
		cin>>te1>>te2;
		te1--;
		si1=v[te1];
		v[te1]=0;
		if(te1!=0)
			v[te1-1]+=(te2-1);	
		if(te1!=n-1)
			v[te1+1]+=(si1-te2);
		}
	int ans=0;
	FOR(i,0,n)
		cout<<v[i]<<endl;
	string str;
	return 0;
	}
