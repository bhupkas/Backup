#include"iostream"
#include"stdio.h"
#include"vector"
#include"algorithm"
#include"string.h"
#include"string"
using namespace std;
typedef long long LL;
vector<LL> p;
void pre()
	{
	bool A[1000003];
	LL i,j;
	for(i=0;i<1000000;i++)	A[i]=true;
	A[0]=A[1]=false;
	for(i=2;i*i<1000000;i++)
		{
		if(A[i])
			{
			for(j=i;j<=1000000/i;j++)
				A[i*j]=false;
			}
		}
	for(i=2;i<1000000;i++)	if(A[i])	p.push_back(i);
	}
bool check(
int main()
	{
	LL t,n,i,j;
	scanf("%lld",&t);
	while(t--)	
		{
		scanf("%lld",&n);
		
		}
	return 0;
	}
