#include "stdio.h"

int A[1000];
int B[1000];

void merge(int A[],int l,int mid,int r)	{
	int i,j,k;
	i=l;
	j=mid+1;
	k=l;
	while(i<=mid && j<=r)	{
		if(A[i]<A[j])	B[k++] = A[i++];
		else			B[k++] = A[j++];
	}
	while(i<=mid)	B[k++]=A[i++];
	while(j<=r)		B[k++]=A[j++];
	for(i=l;i<=r;i++)	A[i]=B[i];
}

void mergesort(int A[],int l,int r)	{
	if(l<r)	{
		int mid = (l+r)/2;
		mergesort(A,l,mid);
		mergesort(A,mid+1,r);
		merge(A,l,mid,r);
	}
}

int main()	{
	int n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)	scanf("%d",&A[i]);
	mergesort(A,0,n-1);
	for(i=0;i<n;i++)	printf("%d ",A[i]);
	printf("\n");
	return 0;
}