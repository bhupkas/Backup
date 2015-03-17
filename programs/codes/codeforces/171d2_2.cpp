/* bhupkas */
#include"iostream"
#include"stdio.h"
#include"vector"
#include"map"
#include"math.h"
#include"string.h"
#include"string"
#include"algorithm"
using namespace std;
#define FOR(i,a,b)	for(i=a;i<b;i++)
int main()
	{
	int n,i,j,t,te1,te2;
	cin>>n>>t;
	int s=0;
	vector<int> v;
	FOR(i,0,n)	{cin>>te1;	s+=te1;v.push_back(te1);}
	if(s<=t)	{cout<<n<<endl;	return 0;}
	int co=0;
	j=0;
	s=0;
	while(s<=t)
		{
		s+=v[j];
		j=(j+1)%n;
		co++;
		}
	j--; 
	co--;
	s-=v[j];
	int mx=co;
	FOR(i,1,n)
		{
		co--;
		s-=v[i-1];
		while(s<=t)
			{
			s+=v[j];
			j=(j+1)%n;
			co++;
			}
		j--;
		co--;
		s-=v[j];
		mx=max(co,mx);
		}
	cout<<mx<<endl;
	return 0;
	}
