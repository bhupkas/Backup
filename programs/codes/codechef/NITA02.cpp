#include"stdio.h"
#include"iostream"
using namespace std;
int main()
	{
	int n,m,i,j,temp2=-1,temp,temp1;
	cin>>n>>m;
	for(i=0;i<n;i++)
		{
		cin>>temp;
		if(temp==temp2)	{cout<<"NO"<<endl;	return 0;}
		for(j=1;j<m;j++)
			{
			cin>>temp1;
			if(temp1!=temp)	{cout<<"NO"<<endl;	return 0;}
			}
		temp2=temp1;
		}
	cout<<"YES"<<endl;
	return 0;
	}
