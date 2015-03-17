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
int main()
	{
	pre();
	int n,i,j,k,t,te;
	string str;
	//vector<int> v;
	cin>>n;
	cin>>str;
	bool A[n],I[n],F[n];
	int ans=0,co1=0,co2=0,co3=0;
	FOR(i,0,n)	A[i]=I[i]=F[i]=false;
	FOR(i,0,n)
		{
		if(str.at(i)=='F')	{co1++;	F[i]=true;}
		if(str.at(i)=='I')	{co2++;	I[i]=true;}
		if(str.at(i)=='A')	{co3++;	A[i]=true;}
		}	
	FOR(i,0,n)	
		{
		if(str.at(i)=='F')	continue;
		else
			{
			if(str.at(i)=='A')
				{
				if(co2)	continue;
				else	ans++;
				}
			else	if(co2==1)	ans++;
			}
		}
	cout<<ans<<endl;
	return 0;
	}
