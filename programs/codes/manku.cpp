#include"stdio.h"
#include"iostream"
using namespace std;
typedef long long LL;
LL A[50],B[50];
void pre()
	{
		int i=2;
		LL N=5;
		A[1]=B[1]=N;
		while(N*5<1e18)
		{
			N=N*5;
			B[i]=N;
			A[i]=A[i-1]+N;
			i++;
		}
	}
int main()
	{
		pre();
		LL t,n,i;
		cin>>t;
		while(t--)
			{

			}
	}