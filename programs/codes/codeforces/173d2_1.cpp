#include"iostream"
#include"stdio.h"
#include"vector"
#include"map"
#include"set"
#include"string.h"
#include"string"
#include"math.h"
#include"algorithm"
using namespace std;
typedef long long LL;
#define FOR(i,a,b)	for(i=a;i<b;i++)
void precompute()
	{
	}
int main()
	{
	precompute();
	int n,i,j;
	string str1,str2,str3;
	cin>>str1;
	getchar();
	cin>>str2;
	str3=str1;
	if(str1.size() != str2.size())	{cout<<"NO"<<endl;	return 0;}
	if(str1==str2)	{cout<<"YES"<<endl;	return 0;}
	if(str1.size()==1)	{cout<<"NO"<<endl;	return 0;}
	int len=str1.size();
	FOR(i,0,len)	{if(str1[i]!='0')	break;}
	if(i==len)	{cout<<"NO"<<endl;	return 0;}
	FOR(i,0,len)	{if(str2[i]!='0')	break;}
	if(i==len	)	{cout<<"NO"<<endl;	return 0;}
	cout<<"YES"<<endl;
	return 0;
	}
