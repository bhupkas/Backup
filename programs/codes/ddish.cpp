#include<cstdio>
#include<vector>
#include<cstring>
typedef long long int ll;
using namespace std;
#define BUF 4096 // block size on my disk is 4KBs
char ibuf[BUF];
int ipt = BUF;
int read() {
while (ipt < BUF && ibuf[ipt] < '0') ipt++;
if (ipt == BUF) {
    fread(ibuf, 1, BUF, stdin);
    ipt = 0;
    while (ipt < BUF && ibuf[ipt] < '0') ipt++;
}
int n = 0;
while (ipt < BUF && ibuf[ipt] >= '0') n = (n*10)+(ibuf[ipt++]-'0');
if (ipt == BUF) {
    fread(ibuf, 1, BUF, stdin);
    ipt = 0;
    while (ipt < BUF && ibuf[ipt] >= '0') n = (n*10)+(ibuf[ipt++]-'0');
}
return n;
}
ll upto_digit[21];
ll atdigit[21];
bool ch(char A[])
	{
	ll l,i;
	l=strlen(A);
	bool check[10];
	for(i=0;i<10;i++)	check[i]=false;
	for(i=0;i<l;i++)
		{
		if(check[A[i]-'0'])	return false;
		check[A[i]-'0']=true;	
		}
	return true;
	}
void precompute()
	{
	ll i,temp;
	upto_digit[0]=0;
	upto_digit[1]=10;
	temp=9;
	for(i=2;i<21;i++)
		{	
		temp*=(10-i+1);
		atdigit[i]=(temp)/9;
		upto_digit[i]=upto_digit[i-1]+temp;
		}
	atdigit[0]=0;
	atdigit[1]=10;
	}
ll ans(char A[])
	{
	ll temp=1,i,l1,count=0,j,a1=0;	
	l1=strlen(A);
	if(l1==1)	a1=A[0]-'0';
	else if(l1==2)	{
			a1=10+(A[0]-'0'-1)*9;
			if((A[1]-'0')>(A[0]-'0'))		a1+=A[1]-'0'-1;
			else					a1+=A[1]-'0';
			}
	else if(l1>10)	a1=upto_digit[10];
	else
		{	
		bool check[10];
		for(i=0;i<10;i++)	check[i]=false;	
		for(i=0;i<l1-2;i++)
			temp*=(8-i);
		a1+=upto_digit[l1-1];
		a1+=(atdigit[l1])*(A[0]-'0'-1);
		check[A[0]-'0']=true;
		for(i=1;i<l1;i++)
			{
			count=0;
			for(j=0;j<i;j++)
				if((A[j]-'0')<(A[i]-'0'))	count++;
			if((A[i]-'0')>(A[i-1]-'0'))		a1+=(A[i]-'0'-count)*temp;
			else					a1+=(A[i]-'0'-count)*temp;
			if(i!=l1-1)	temp/=(9-i);
			if(check[A[i]-'0'])	break;
			check[A[i]-'0']=true;
			}
		}
	return a1;
	}
int main()
	{
	ll t,i,j;
	char A[21],B[21];
	precompute();
	scanf("%lld",&t);
	getchar();
	while(t--)
		{
		scanf("%s %s",A,B);
		if((strlen(A)>10)&&(strlen(B)>10))	{printf("0\n");	continue;}
		if(ch(B))	printf("%lld\n",ans(B)-ans(A)+1);
		else		printf("%lld\n",ans(B)-ans(A));
		}	
	return 0;
	}
