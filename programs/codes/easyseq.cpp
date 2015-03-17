#include"stdio.h"
using namespace std;
#define mod 1000000007
#define mod1 1000000006
typedef long long int LL;
LL po(LL a,LL b)
	{
		if(b==0)	return 1;
		if(b==1)	return (a%mod);
		LL re=1;
		while(b)
		{
			if(b&1)		re=re*a%mod;
			a=a*a%mod;	
			b/=2;
		}
		return re%mod;
	}
int main()
	{
		LL A[2][2],R[2][2],B[2][2],t,n,f0,f1,k,i;
printf("%lld %lld\n",po(2,36),po(2,45));
printf("%lld\n",(po(2,36)%mod*po(2,45)%mod)%mod);
/*
		scanf("%lld",&t);
t=0;
		while(t--)
			{
				scanf("%lld %lld %lld %lld",&f0,&f1,&n,&k);
				if(n==0)	{printf("%lld\n",f0%mod);	continue;}
				if(n==1)	{printf("%lld\n",f1%mod);	continue;}
				A[0][0]=1;A[0][1]=0;A[1][0]=0;A[1][1]=1;
				R[0][0]=1;R[0][1]=0;R[1][0]=0;R[1][1]=1;
				B[0][0]=k;B[0][1]=k;B[1][0]=1;B[1][1]=0;
				n--;
				while(n)
				{
					if(n&1)
					{
						A[0][0]=R[0][0];A[0][1]=R[0][1];A[1][0]=R[1][0];A[1][1]=R[1][1];
						R[0][0]=(A[0][0]*B[0][0]%mod1+A[0][1]*B[1][0]%mod1)%mod1;
						R[0][1]=(A[0][0]*B[0][1]%mod1+A[0][1]*B[1][1]%mod1)%mod1;
						R[1][0]=(A[1][0]*B[0][0]%mod1+A[1][1]*B[1][0]%mod1)%mod1;
						R[1][1]=(A[1][0]*B[0][1]%mod1+A[1][1]*B[1][1]%mod1)%mod1;
					}
					A[0][0]=B[0][0];A[0][1]=B[0][1];A[1][0]=B[1][0];A[1][1]=B[1][1];
					B[0][0]=(A[0][0]*A[0][0]%mod1+A[0][1]*A[1][0]%mod1)%mod1;
					B[0][1]=(A[0][0]*A[0][1]%mod1+A[0][1]*A[1][1]%mod1)%mod1;
					B[1][0]=(A[1][0]*A[0][0]%mod1+A[1][1]*A[1][0]%mod1)%mod1;
					B[1][1]=(A[1][0]*A[0][1]%mod1+A[1][1]*A[1][1]%mod1)%mod1;
					n/=2;
				}
printf("%lld\n",po(2,36));
				printf("%lld\n",(((po(f1,R[0][0])%mod*po(f0,R[0][1])%mod)+mod)%mod));
			}
*/
			return 0;
	}
