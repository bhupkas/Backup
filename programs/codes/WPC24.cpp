#include"stdio.h"
#include"iostream"
using namespace std;
int main()
{
	int n, i;
	long long int  dp[31],T[31];
	for(i=0;i<31;i++)
		T[i] = dp[i] = 0;
	dp[0] = 1;
	dp[1] = 1;
	T[1] = 1;
	for(i=2;i<31;i++)
	{
		dp[i] = dp[i-1] + 2*T[i-1];
		if(i&1)
			T[i] = dp[i-1] + T[i-2];
		else	T[i]=0;
	}
	cin>>n;
	while(n!=-1)
	{
		if(n&1)	cout<<0<<endl;
		else	cout<<dp[n]<<endl;
		cin>>n;
	}
	return 0;
}