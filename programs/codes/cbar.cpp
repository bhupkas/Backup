#include<cstdio>
#include<cstring>
typedef long long int ll;
using namespace std;
#define mod 1000000007
ll A[6][65];
void precompute()
	{
	ll B[100][100];
	ll i,temp;	
	temp=2;
	for(i=0;i<65;i++)
		{
		A[0][0]=temp;
		temp=(temp<<1)%mod;
		}
	temp=4;
	B[0][0]=1;
	B[0][1]=2;
	B[1][0]2;
	B[1][1]=2;
	A[1][0]=temp;	
	A[1][1]=14;
	A[1][2]=
	for(i=1;i<65;i++)	
		{
		
		}
	}
int main()
	{
	ll a,b;
	scanf("%lld %lld",&a,&b);
	precompute();
	return 0;
	}
