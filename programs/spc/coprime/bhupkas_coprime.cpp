#include"iostream"
#include"algorithm"
using namespace std;
int gcd(int n,int m)		
	{
	if(m==0)	return n;
	return gcd(m,n%m);
	}
int main()
	{
	int t,n,ans=0,i;
	cin>>t;
	while(t--)
		{
		cin>>n;
		for(i=n/2;i>=0;i--)
			{
			if(gcd(n,i)==1)	{cout<<i<<endl;	break;}
			}
		if(i==0 && n!=1)	{cout<<"-1"<<endl;}
		}
	return 0;
	}
