#include"vector"
#include"iostream"
#include"stdio.h"
using namespace std;
typedef long long LL;
int main()
	{
		vector<LL> v1;
		int i,j,t,n;
		vector<int> F;
		vector<bool> prime;
		for(i=0;i<=10000000;i++)
			{
				v1.push_back(0);
				prime.push_back(true);
				F.push_back(0);
			}
		prime[0]=false;
		prime[1]=false;
		for(i=2;i*i<=10000000;i++)
		{
			if(prime[i])
			{
				for(j=i;j<=10000000/i;j++)
					prime[i*j]=false;
			}
		}
		F[0]=0;
		F[1]=1;
		for(i=2;i<=10000000;i++)
		{
			if(F[i]==0)
			{
				for(j=i;j<=10000000;j+=i)
				{
					if(F[j]==0)		F[j]=i;
				}
			}
		}
		for(i=2;i<=1e7;i++)
		{
			v1[i]=v1[i-1]+F[i];
		}
		cin>>t;
		while(t--)
		{
			cin>>n;
			cout<<v1[n]<<endl;
		}
		return 0;
	}