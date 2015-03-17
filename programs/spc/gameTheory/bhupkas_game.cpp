#include"iostream"
#include"stdio.h"
#include"vector"
#include"algorithm"
using namespace std;
bool B[100002];
int main(){
	int n,m,i,te,j,t;
	vector<int>v;
	cin>>t;
	//t=1;
	while(t--)
		{
		v.clear();
		cin>>n>>m;
		for(i=0;i<m;++i) 
			{
			cin>>te;
			v.push_back(te);
			}
		B[0] = true;
		for(i=1;i<=n;i++)
		{
			B[i] = false;
			for(j = 0;j<m;j++)
			    if(i>=v[j] && !B[i-v[j]])
				B[i] = true;
		}
		if(B[n]) cout<<"1"<<endl;
		else cout<<"2"<<endl;
		}
    return 0;
}
