#include"stdio.h"
#include"iostream"
#include"vector"
#include"algorithm"
#include"map"
#include"set"
#include"string.h"
#include"string"
#include"math.h"
using namespace std;
#define FOR(i,a,b)	for(i=a;i<b;i++)
#define S(n)	scanf("%d",&n);
typedef long long int LL;
LL val(LL a)
	{
		if(a==0)	return 0;
		if(a==1)	return 1;
		if(a&1)	return val(a/2) + 1;
		else 	return val(a/2);
	}
LL com(LL a)
	{
		if(a==0 || a==1)	return 0;
		return (a*(a-1))/2;
	}
int main()
	{
		LL n;
		LL A[100005];
		cin>>n;
		LL i;

		LL  P[100];
		for(i=0;i<100;i++)	P[i]=0;
		LL	temp;
		for(i=0;i<n;i++)
			{

			cin>>temp;
			A[i]=temp;
			}
		
	LL ans=0;
		for(i=0;i<n;i++)
		{
			P[val(A[i])]++;
			
		}
		for(i=0;i<100;i++)
		{	
			ans+=com(P[i]);
		}
		cout<<ans<<endl;
			return 0;
	}