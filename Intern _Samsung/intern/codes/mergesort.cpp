/* bhupkas */

#include "iostream"
#include "stdio.h"
#include "vector"
#include "algorithm"

using namespace std;

#define MAX 100000
#define FOR(i,a,b)		for(i=a;i<b;i++)

int B[MAX+5];

void merge(int A[],int l,int m,int r)
	{
		int k,i,j;
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

void merge_sort(int A[],int l,int r)
	{
		if(l<r)
			{
				int mid=(l+r)/2;
				merge_sort(A,l,mid);
				merge_sort(A,mid+1,r);
				merge(A,l,mid,r);
			}
	}

int main()
	{
		int n,i,j,te;
		cin>>n;
		int A[MAX+5];
		FOR(i,0,n)	cin>>A[i];
		merge_sort(A,0,n-1);
		FOR(i,0,n)	cout<<A[i]<<" ";
		cout<<endl;
		return 0;
	}