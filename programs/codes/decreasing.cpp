#include<cstdio>
using namespace std;
typedef long long int ll;
ll A[65][10];
ll S[65];
void init()
	{
	ll j,i;	
	S[0]=0;
	for(i=0;i<10;i++)
		{
		A[0][i]=0;
		A[1][i]=1;
		}
	for(i=2;i<65;i++)
		{
		A[i][0]=1;	
		for(j=1;j<10;j++)
			{			
			A[i][j]=A[i-1][j]+A[i][j-1];
			}
		S[i-1]=A[i][9];
		}
	for(i=0;i<10;i++)	
		S[64]+=A[64][i];
	}
int main()
	{
	init();
	ll te,i,t,n;
	scanf("%lld",&t);
	for(i=1;i<=t;i++)
		{
		scanf("%lld %lld",&te,&n);
		printf("%lld %lld\n",te,S[n]);
		}
	return 0;
	}
