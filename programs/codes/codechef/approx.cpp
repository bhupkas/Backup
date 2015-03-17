/* bhupkas approximation MARCH'13 ,implementation */
#include"stdio.h"
#include"iostream"
#include"vector"
#include"algorithm"
using namespace std;
int main()
	{
		int t,k,i,n=46870,m=33102,si;
		cin>>t;
		vector<int> v;
		while(t--)
			{
				n=46870;m=33102;
				v.clear();
				cin>>k;
				if(k==0)	{cout<<"3"<<endl;	continue;}
				for(i=0;i<k;i++)
					{
						v.push_back(n/m);
						n=(n%m)*10;
					}
				cout<<"3.";
				si=v.size();
				for(i=0;i<si;i++)
					cout<<v[i];
				cout<<endl;
			}	
		return 0;
	}
