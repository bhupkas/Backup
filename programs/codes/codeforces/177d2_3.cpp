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
	int n,i,j,k,m,ans=0,te;
	vector<int> v,v1;
	string str,str1;
	cin>>n>>k;
	if(n<k)	{cout<<"-1"<<endl;	return 0;}
	if(k==1 && n!=1)	{cout<<"-1"<<endl;	return 0;}
	if((n&1 && k&1) || (!(n&1) && !(k&1)))
		{
		FOR(i,0,k)
			{
			str.push_back('a'+ k-i-1);
			}
		FOR(i,0,(n-k)/2)	{str.push_back('b');	str.push_back('a');}
		}
	else
		{
		FOR(i,0,k-2)	str.push_back('a'+k-i-1);
		str.push_back('a');
		FOR(i,0,(n-k)/2 +1)	{str.push_back('b');	str.push_back('a');}
		}
	std::reverse(str.begin(), str.end());
	cout<<str<<endl;
	return 0;
	}
