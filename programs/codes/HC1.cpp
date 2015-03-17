#include"stdio.h"
#include"iostream"
#include"vector"
#include"algorithm"
using namespace std;
#define MOD  1000000007
typedef long long int LL;
bool f(LL a,LL b)
	{
		return a<b;
	}
int main()
	{
		LL t;
		LL A[10004];
		LL ans,i,n,k;
		cin>>t;
		LL comb=1;
		LL F[10005];
		LL m=MOD;
		F[1] = 1;
		for(i = 2; i <= 10005; i++) {	
		F[i] = (-(m/i) * F[m % i]) % m + m;}
		for(int l=1;l<=t;l++)
		{	
			ans=0;
			comb=1;
			cin>>n>>k;
			for(i=0;i<n;i++)
				cin>>A[i];
			sort(A,A+n,f);
			ans+=(A[k-1]*comb)%MOD;
			ans%=MOD;
			for(i=k;i<n;i++)
			{
				comb=(((comb*i)%MOD)*F[i-k+1]%MOD)%MOD;
				ans+=(A[i]*comb)%MOD;
				ans%=MOD;
			}
		cout<<"Case #"<<l<<": "<<(ans+MOD)%MOD<<endl;
		}
		return 0;
	}