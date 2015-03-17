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
void pre()
	{
	}
int main()
	{
	pre();
	int n,i,j,k,m,ans=0,te1,te2;
	vector<int> v,v1;
	string str;
	cin>>n>>k;
	FOR(i,0,n)
		{
		cin>>te1>>te2;
		ans+=(te2-te1+1);
		}
	te1=ans%k;
	if(te1==0)	cout<<"0"<<endl;
	else
		{
		te1=k-te1;
		cout<<te1<<endl;
		}
	return 0;
	}
