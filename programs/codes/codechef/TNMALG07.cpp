#include"iostream"
#include"stdio.h"
#include"map"
#include"string.h"
#include"string"
using namespace std;
typedef long long LL;
int main()
	{
	string str;
	LL si,t,x,i,j;
	cin>>t;
	while(t--)
		{
		str.clear();
		cin>>x;
		if(x==1)	{cout<<"1"<<endl;	continue;}
		if(!(x&1))	{cout<<"0"<<endl;	continue;}	
		while(x>>1)
			{
			if(x&1 && !((x>>1)&1))	{str.append("1");}
			if(x&1 && ((x>>1)&1))	{str.append("2");}
			if(!(x&1) && ((x>>1)&1))	{str.append("2");}
			if(!(x&1) && !((x>>1)&1))	{str.append("1");}
			x>>=1;
			}
		si=str.size();
		for(i=si-1;i>=0;i--)	cout<<str[i];
		cout<<endl;
		}
	return 0;
	}
