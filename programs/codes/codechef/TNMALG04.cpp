#include"stdio.h"
#include"iostream"
#include"string.h"
#include"string"
using namespace std;
typedef long long LL;
LL A[40];
void pre()
	{
	LL i,j;
	A[1]=1;
	A[2]=1;
	A[3]=2;
	LL ans=0;
	for(i=4;i<35;i++)
		{
		ans=0;
		for(j=1;j<i;j++)
			{
			ans += A[j]*A[i-j];
			}
		A[i]=ans;
		}
	}
int main()
	{
	pre();
	string str;
	LL t,n;
	cin>>t;
	while(t--)
		{
		cin>>str;
		getchar();
		n=str.length();
		cout<<A[n]<<endl;
		}
	return 0;
	}
