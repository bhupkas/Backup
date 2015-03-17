#include"stdio.h"
#include"iostream"
using namespace std;
#define MOD 1000000007LL
typedef long long int LL;
LL F[1001];
void pre()
	{
		LL i,m=MOD;
		F[1] = 1;
		for(i = 2; i < 1001; i++) {
		F[i] = (-(m/i) * F[m % i]) % m + m;
		}
	}
long long combination(LL n,LL r)
{
	if((n-r)>r)
		r=n-r;
	long long numerator=1;
	for(LL i=r+1;i<=n;i++)
	{
		if(numerator%(i-r)==0)
			numerator=((numerator*F[i-r])%MOD*i)%MOD;
		else
			numerator=(((i*F[i-r]))%MOD*numerator)%MOD;
	}
	return numerator%MOD;
}

LL A[1001];
void pre1()
	{
		A[1]=1;
		LL po=1;
		LL i,ans;
		for(i=2;i<1001;i++)
			{
				po=(po*2)%MOD;
				if(i&1)
					{
						A[i]=po;
					}
				else
					{
						A[i]=((po-(combination(i,i/2)*F[2])%MOD)+MOD)%MOD;	
					}
			}
	}
int main()
	{
		pre();
		pre1();
		LL t,n,i,temp;
		cin>>t;
		while(t--)
		{
			cin>>n;
			//for(i=0;i<n;i++)	cin>>temp;
			cout<<A[n]<<endl;
		}
		return 0;
	}