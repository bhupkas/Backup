#include"iostream"
#include"stdio.h"
#include"vector"
#include"algorithm"
#include"set"
#include"map"
#include"math.h"
#include"string.h"
#include"string"
#include"stdlib.h"
using namespace std;
#define FOR(i,a,b)	for(i=a;i<b;i++)
typedef long long int LL;
int main()
	{
	LL n,n1,k;
	cin>>n>>k;
	n1=n-1;
	if((n1*(n1+1))/2 <= k)	{cout<<"no solution"<<endl;	return 0;}
	LL x=0LL,y1=(LL)1e9,y2=(LL)(-1*1e9),i;
	for(i=0;i<n;i++)
		{
			if(i&1)	{cout<<x<<" "<<y2<<endl;	x=x+1;	y2=y2+2000;}
			else	{cout<<x<<" "<<y1<<endl; 	x++;	y1=y1-2000;}
		}
	return 0;
	}
