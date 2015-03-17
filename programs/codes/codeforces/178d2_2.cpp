#include"iostream"
#include"stdio.h"
#include"algorithm"
#include"vector"
#include"set"
#include"map"
#include"string.h"
#include"string"
#include"math.h"
using namespace std;
typedef long long LL;
#define FOR(i,a,b)	for(i=a;i<b;i++)
typedef vector<int> 	VI;
void pre()
	{
	}
bool com(int a,int b)
	{
	return a>b;
	}
bool A[400]={false};
int main()
	{
	pre();
	int t,n,k,i,j,m;
	vector<int> v1,v2;
	cin>>n;
	int te1,te2;
	FOR(i,0,n)
		{
		cin>>te1>>te2;
		if(te1==1)	v1.push_back(te2);
		else		v2.push_back(te2);
		}
	sort(v1.begin(),v1.end(),com);
	sort(v2.begin(),v2.end(),com);
	int sum=0,thick=0;
	for(i=0;i<=v1.size();i++)
		{
		for(j=0;j<=v2.size();j++)
			{
			thick=(i)+2*(j);
			sum=0;
			for(k=i;k<v1.size();k++)
					sum+=v1[k];
			for(k=j;k<v2.size();k++)
				sum+=v2[k];
			if(sum<=thick)	A[thick]=true;
			}
		}
	FOR(i,0,400)
		if(A[i])	{cout<<i<<endl;	return 0;}
	string str;
	return 0;
	}
