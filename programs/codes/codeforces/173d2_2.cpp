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
struct node 
	{
	int a,g;
	};
typedef struct node Node;
void precompute()
	{
	}
int main()
	{
	precompute();
	int n,i,j;
	string str;
	cin>>n;
	int sum=0;
	Node N[n];
	FOR(i,0,n)	{cin>>N[i].a>>N[i].g;	sum+=N[i].a;}
	FOR(i,0,n+1)
		{
		if(1000*i-sum <= 500 && 1000*i-sum >=-500)	{break;} 
		}
	if(i==n+1)	{cout<<"-1"<<endl;	return 0;}
	FOR(j,0,i)
		{
		str.append("G");
		}
	FOR(j,i,n)
		str.append("A");
	cout<<str<<endl;
	return 0;
	}
