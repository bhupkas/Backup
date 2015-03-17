#include"iostream"
using namespace std;
typedef long long int ll;
int main()
	{
	ll temp,y,n,k,i,j;
	cin>>y>>k>>n;
	i=y/k;
	temp=k*(i+1)-y;
	if(temp+y>n)	{cout<<"-1"<<"\n";	return 0;}
	while(temp+y<=n)
		{
		cout<<temp<<" ";
		temp+=k;
		}
	cout<<"\n";
	return 0;
	}
