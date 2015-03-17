#include"iostream"
#include"stdio.h"
#include"vector"
#include"map"
#include"set"
#include"string.h"
#include"string"
#include"math.h"
using namespace std;
typedef long long LL;
#define FOR(i,a,b)	for(i=a;i<b;i++)
void precompute()
	{
	}
int main()
	{
	precompute();
	int n,i,j=0;
	cin>>n;
	string str[n];
	FOR(i,0,n)
		{
		getchar();
		cin>>str[i];
		if(str[i][0]=='+')	{++j;}
		else if(str[i][0]=='-')	{--j;}
		else if(str[i][2]=='+')	{j++;}
		else if(str[i][2]=='-')	{j--;}
		}
	cout<<j<<endl;	
	return 0;
	}
