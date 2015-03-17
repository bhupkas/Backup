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
	string str;
	cin>>str;
	if(str[0]-'0'<=('z'-'0') && str[0]-'0' >=('a'-'0'))	str[0]=str[0]-'a'+'A';
	cout<<str<<endl;
	return 0;
	}
