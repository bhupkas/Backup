#include"iostream"
#include"stdio.h"
#include"string.h"
#include"string"
#include"math.h"
#include"vector"
#include"algorithm"
#include"map"
#include"set"
#include"deque"
using namespace std;
#define FOR(i,a,b)	for(i=a;i<b;i++)
typedef long long LL;
#define MOD (LL)(1e9 + 7)
void pre()
	{
	}
LL fact(LL a)
	{
	if(a<0)	return 0;
	if(a==0 || a==1)	return 1;
	return (a*fact(a-1))%MOD;
	}
LL pow(LL a,LL b)
	{
	if(a==0)	return 0;
	if(b==0)	return 1;
	LL re=pow(a,b/2)%MOD;
	re = (re*re)%MOD;
	if(b&1)
		{
		return (a*re)%MOD;
		}
	else
		{
		return re%MOD;
		}
	}
int main()
	{
	pre();
	LL n,i,j,k,m,ans=0,te1,te2;
	cin>>n>>k;
	string str;
	return 0;
	}
