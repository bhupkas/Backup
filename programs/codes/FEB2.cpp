#include"stdio.h"
#include"algorithm"
#include"set"
#include"math.h"
#include"map"
#include"string.h"
#include"string"
#include"vector"
#include"iostream"
using namespace std;
typedef long long int LL;
#define MOD 1000000007
#define FOR(i,a,b)	for(i=a;i<b;i++)
#define S(n)	scanf("%d",&n)
#define P(n)	printf("%d\n",n );
#define SLL(n)	scanf("%lld\n",&n);
#define PLL(n)	printf("%lld\n",n);
int main()
	{
		LL count,t,j,i,n,g,A[1000001];
		cin>>t;
		A[1]=1;
		A[2]=2;
		FOR(i,3,1000001)
			A[i]=(A[i-1]+A[i-2])%MOD;
		while(t--)
		{
			count=0;
			cin>>n>>g;
			FOR(i,0,32)
				{
					if(A[n]&(1<<i))		count++;
				}
			if(count==g)	cout<<"CORRECT"<<endl;
			else			cout<<"INCORRECT"<<endl	;
		}
		return 0;
	}