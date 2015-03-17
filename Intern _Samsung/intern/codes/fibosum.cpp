/* bhupkas */

/* Calculating the fibonaci number by matrix exponentiation */

#include "iostream"
#include "stdio.h"
#include "algorithm"

using namespace std;

#define FOR(i,a,b)			for(i=a;i<b;i++)
#define LL					long long
#define MOD					1000000007LL

void copy(LL A[2][2],LL B[2][2])
	{
		A[0][0]=B[0][0];
		A[0][1]=B[0][1];
		A[1][0]=B[1][0];
		A[1][1]=B[1][1];
	}

LL F[64][2][2];

void mult(LL A[2][2],LL B[2][2],LL C[2][2])
	{
		C[0][0]=((A[0][0]*B[0][0])%MOD + (A[0][1]*B[1][0])%MOD )%MOD;
		C[0][1]=((A[0][0]*B[0][1])%MOD + (A[0][1]*B[1][1])%MOD )%MOD;
		C[1][0]=((A[1][0]*B[0][0])%MOD + (A[1][1]*B[1][0])%MOD )%MOD;
		C[1][1]=((A[1][0]*B[0][1])%MOD + (A[1][1]*B[1][1])%MOD )%MOD;
	}

void pre()
	{
		LL i,j;
		F[0][0][0]=1;
		F[0][0][1]=1;
		F[0][1][0]=1;
		F[0][1][1]=0;
		FOR(i,1,64)
			mult(F[i-1],F[i-1],F[i]);
	}

LL fib(LL num)
	{
		LL A[2][2]={1,0,1,0};
		LL I[2][2]={1,0,1,0};
		LL B[2][2]={1,1,1,0};
		LL i=0;
		while(num)
			{
				if(num&1)	mult(A,F[i],I),copy(A,I);
				i++;
				num>>=1;
				//mult(B,B,I);
				//copy(B,I);
			}
		return A[0][0]%MOD;
	}

int main()
	{
		pre();
		LL i,t,n,m,re1,re2,re;
		cin>>t;
		while(t--)
			{
				cin>>n>>m;
				re1=fib(n)%MOD;
				re2=fib(m+1)%MOD;
				re1%=MOD;
				re2%=MOD;
				re=re2-re1;
				while(re<0)	re+=MOD;
				cout<<re<<endl;
			}
		return 0;
	}