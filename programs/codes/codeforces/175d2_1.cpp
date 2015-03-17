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
	int te,i,j,k,n,m,t;
	cin>>n>>k;
	FOR(i,1,n-k)
		cout<<i<<" ";
	for(i=n;i>=n-k;i--)
		cout<<i<<" ";
	cout<<endl;
	string str;
	return 0;
	}
