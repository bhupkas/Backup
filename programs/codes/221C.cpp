#include"iostream"
#include"stdio.h"
#include"vector"
#include"algorithm"
using namespace std;
bool f(int a,int b)
	{
		return a<b;
	}
int main()
	{
		int n;
		vector<int> v;
		vector<int> v1;
		int temp,i;
		cin>>n;
		for(i=0;i<n;i++)
			{
				cin>>temp;
				v.push_back(temp);
				v1.push_back(temp);
			}
		sort(v.begin(),v.end(),f);
		int count=0;
		for(i=0;i<n;i++)
		{
			if(v[i]!=v1[i])	count++;
		}
		if(count==0||count==1||count==2)
			cout<<"YES"<<endl;
		else	cout<<"NO"<<endl;
		return 0;
	}