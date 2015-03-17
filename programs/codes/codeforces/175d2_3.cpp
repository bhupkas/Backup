#include"iostream"
#include"stdio.h"
#include"algorithm"
#include"vector"
#include"map"
#include"set"
#include"string.h"
#include"string"
#include"math.h"
using namespace std;
typedef long long LL;
#define FOR(i,a,b)	for(i=a;i<b;i++)
void pre()
	{
	}
LL mm(LL a)
	{
	if(a<0)	return -1*a;
	return a;
	}
#define MAX 300005

LL B[MAX+5];

void merge(LL A[],LL l,LL m,LL r)
	{
		LL k,i,j;
		i=l;
		j=m+1;
		k=l;
		while(i<=m && j<=r)	
			{
				if(A[i]<A[j])	B[k++]=A[i++];
				else			B[k++]=A[j++];
			}
		while(i<=m)	B[k++]=A[i++];
		while(j<=r)	B[k++]=A[j++];
		FOR(i,l,r+1)
			A[i]=B[i];
	}

void merge_sort(LL A[],LL l,LL r)
	{
		if(l<r)
			{
				LL mid=(l+r)/2;
				merge_sort(A,l,mid);
				merge_sort(A,mid+1,r);
				merge(A,l,mid,r);
			}
	}


int main()
	{
	pre();
	LL co1=-1,co2=-1,co4=0,co5=0,co3=0,te,i,j,k,n,m,t;
	cin>>n;
	LL A[MAX+4];
	FOR(i,0,n)	
		{
			cin>>A[i];
		}
	merge_sort(A,0,n-1);
	FOR(i,0,n)
		{
		co3+=mm(A[i]-(i+1));
		}
	cout<<co3<<endl;
	return 0;
	}
