#include"iostream"
#include"stdio.h"
#include"vector"
#include"math.h"
#include"algorithm"
using namespace std;
typedef long long int LL;
#define MOD 1<<32
int main()
	{
	LL t,n1,n2,i,j,C[200009],A[100002],B[100002];
	cin>>t;
	while(t--)
		{
		cin>>n1;
		for(i=0;i<=n1;i++)	cin>>A[i];
		cin>>n2;
		for(i=0;i<=n2;i++)	cin>>B[i];
		for(i=0;i<=n1+n2+2;i++)	C[i]=0;
		}
	return 0;
	}
