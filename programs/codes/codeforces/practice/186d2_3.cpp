/* bhupkas */

#include"iostream"
#include"stdio.h"
#include"vector"
#include"algorithm"

using namespace std;

typedef long long LL;
typedef unsigned long long ULL;

#define MOD	(LL)(1e9+7)

LL M[2][2]={6,-8,1,0};
LL A[2][2]={6,-8,1,0};

void mul()
	{
		LL a,b,c,d;
		a=A[0][0]%MOD;
		b=A[0][1]%MOD;
		c=A[1][0]%MOD;
		d=A[1][1]%MOD;
		A[0][0]= ((a*M[0][0])%MOD + (b*M[1][0])%MOD)%MOD;
		A[0][1]= ((a*M[0][1])%MOD + (b*M[1][1])%MOD)%MOD;
		A[1][0]= ((c*M[0][0])%MOD + (d*M[1][0])%MOD)%MOD;
		A[1][1]= ((c*M[0][1])%MOD + (d*M[1][1])%MOD)%MOD;
		while(A[0][0]<0)	A[0][0]+=MOD;
		while(A[0][1]<0)	A[0][1]+=MOD;
		while(A[1][0]<0)	A[1][0]+=MOD;
		while(A[1][1]<0)	A[1][1]+=MOD;
 	}

void mul1()
	{
		LL a,b,c,d;
		a=A[0][0]%MOD;
		b=A[0][1]%MOD;
		c=A[1][0]%MOD;
		d=A[1][1]%MOD;
		A[0][0]= ((a*a)%MOD + (b*c)%MOD)%MOD;
		A[0][1]= ((a*b)%MOD + (b*d)%MOD)%MOD;
		A[1][0]= ((c*a)%MOD + (d*c)%MOD)%MOD;
		A[1][1]= ((c*b)%MOD + (d*d)%MOD)%MOD;
		while(A[0][0]<0)	A[0][0]+=MOD;
		while(A[0][1]<0)	A[0][1]+=MOD;
		while(A[1][0]<0)	A[1][0]+=MOD;
		while(A[1][1]<0)	A[1][1]+=MOD;
	}

void mult(LL n)
	{
		if(n==1)	{return;}
		mult(n/2);
		mul1();
		if(n&1)		mul();
		n/=2;
		return;
	}

int main()
	{
		LL n;
		cin>>n;
		if(n==0)	{cout<<"1"<<endl;	return 0;}
		if(n==1)	{cout<<"3"<<endl;	return 0;}	
		if(n==2)	{cout<<"10"<<endl;	return 0;}
		n-=1;
		mult(n);
		cout<<A[0][0]<<" "<<A[0][1]<<endl<<A[1][0]<<" "<<A[1][1]<<endl;
		LL ans=0;
		ans= ((A[0][0]*3)%MOD + A[0][1])%MOD;
		while(ans<0)	ans+=MOD;
		cout<<ans<<endl; 
		return 0;
	}