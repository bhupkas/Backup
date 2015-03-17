#include"iostream"
#include"stdio.h"
#include"algorithm"
using namespace std;
#define MOD 1000000007
typedef long long LL;
LL A[1001][1001];
int main()
	{
	LL t,n,i,j,ans=0;
	cin>>t;
	while(t--)
		{
		cin>>n;
		for(i=0;i<n;i++)
			{
			for(j=0;j<n;j++)
				cin>>A[i][j];
			}
		}
	return 0;
	}
