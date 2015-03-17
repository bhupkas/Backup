#include"iostream"
#include"stdio.h"
#include"vector"
#include"algorithm"
using namespace std;
int A[10005];
bool B[10005];
vector<int> p;
void pr()
	{
	int i,j;
	for(i=0;i<10005;i++)	B[i]=true;
	B[0]=B[1]=false;
	for(i=2;i*i<10005;i++)
		{
		if(B[i])
			{
			for(j=i;j<=10005/i;j++)
				B[i*j]=false;
			}
		}
	for(i=0;i<10005;i++)	if(B[i])	p.push_back(i);
	}
void pre()
	{
	int i,j;
	for(i=0;i<10005;i++)	A[i]=0;
	for(i=0;i<p.size();i++)
		{
		for(j=0;j<p.size();j++)
			{
			if((p[i]+2*p[j])>10004)	{continue;}
			A[p[i]+2*p[j]]++;
			}
		}
	}
int main()
	{
	pr();
	pre();
	int i,t,j,n;
	cin>>t;
	while(t--)
		{
		cin>>n;
		cout<<A[n]<<endl;
		}
	return 0;
	}
