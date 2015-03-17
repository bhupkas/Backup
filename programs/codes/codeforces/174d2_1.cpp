#include"stdio.h"
#include"iostream"
#include"map"
#include"algorithm"
#include"set"
#include"vector"
#include"string"
#include"string.h"
#include"math.h"
using namespace std;
#define FOR(i,a,b)	for(i=a;i<b;i++)
typedef long long LL;
void pre()
	{
	}
bool check(int x,int p)
	{
	int num,i,j;
	num=x;
	FOR(i,1,p-1)
		{
		if(num==1)	return false;
		num=(num*x)%p;
		}
	if(num%p==1)	return true;
	return false;
	}
int main()
	{
	pre();
	int p,n,i,j,ans=0,k,t,te;
	string str;
	//vector<int> v;
	cin>>p;	
	FOR(i,1,p)
		{
		if(check(i,p))	ans++;
		}
	cout<<ans<<endl;
	return 0;
	}
