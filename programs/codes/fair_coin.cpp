#include<iostream>
#include<cstdio>
using namespace std;
#define BUF 4096 // block size on my disk is 4KBs
char ibuf[BUF];
long long int ipt = BUF;
long long int read() {
while (ipt < BUF && ibuf[ipt] < '0') ipt++;
if (ipt == BUF) {
    fread(ibuf, 1, BUF, stdin);
    ipt = 0;
    while (ipt < BUF && ibuf[ipt] < '0') ipt++;
}
long long int n = 0;
while (ipt < BUF && ibuf[ipt] >= '0') n = (n*10)+(ibuf[ipt++]-'0');
if (ipt == BUF) {
    fread(ibuf, 1, BUF, stdin);
    ipt = 0;
    while (ipt < BUF && ibuf[ipt] >= '0') n = (n*10)+(ibuf[ipt++]-'0');
}
return n;
}
#define d 1000000007
long long int A[2][2],T[2][2];
void multiply_own()
	{
	T[0][0]=A[0][0]%d;T[0][1]=A[0][1]%d;T[1][0]=A[1][0]%d;T[1][1]=A[1][1]%d;
	A[0][0]=((T[0][0]*T[0][0])%d+(T[0][1]*T[1][0])%d)%d;
	A[0][1]=(T[0][1]*((T[0][0]+T[1][1])%d))%d;
	A[1][0]=(T[1][0]*((T[0][0]+T[1][1])%d))%d;
	A[1][1]=((T[1][0]*T[0][1])%d+(T[1][1]*T[1][1])%d)%d;
	}
void multiply_single()
	{
	T[0][0]=A[0][0]%d;T[0][1]=A[0][1]%d;T[1][0]=A[1][0]%d;T[1][1]=A[1][1]%d;
	A[0][0]=((2*T[0][0])%d+T[0][1]%d)%d;
	A[0][1]=(2*T[0][0])%d;
	A[1][0]=((2*T[1][0])%d+T[1][1]%d)%d;
	A[1][1]=(2*T[1][0])%d;
	}
void power(long long int  n)
	{
	if(n==1)
		return;
	if(n%2==0)	
		{
		power(n/2);
		multiply_own();
		}
	else
		{
		power(n/2);
		multiply_own();
		multiply_single();
		}
	}
int main()
	{
	long long int t,n;
	A[0][0]=2;A[0][1]=2;A[1][0]=1;A[1][1]=0;
	t=read();
	while(t--)
		{
		n=read();
		if(n==1)	{printf("1\n");	continue;}
		if(n==2)	{printf("3\n");	continue;}
		power(n-2);
		printf("%lld\n",((3*A[0][0])%d+A[0][1]%d)%d);
		A[0][0]=2;A[0][1]=2;A[1][0]=1;A[1][1]=0;
		}
	return 0;
	}
