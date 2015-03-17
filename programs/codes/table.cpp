#include"stdio.h"
#include"algorithm"
#include"iostream"
#include"vector"
using namespace std;
bool f(int a,int b)
	{
		return a>b;
	}
int main()
	{
		int n,k,s;
		cin>>n>>k>>s;
		int i;
		vector<int> v;
		int temp;
		for(i=0;i<n;i++)
			{
				cin>>temp;
				v.push_back(temp);
			}
		sort(v.begin(),v.end(),f);
		int re=0;
		i=0;
		while(re<s*k)
			{
				re+=v[i];
				i++;
			}
		cout<<i<<endl;
		return 0;
	}