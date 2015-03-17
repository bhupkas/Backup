#include "stdio.h"

#define S(n)		scanf("%d",&n)
int A[100];
int B[100];
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
	int m,sm;
	int n;
	S(n);
	int i;
	for(i=0;i<n;i++)	S(A[i]);
	mergesort(A,0,n-1);
	for(i=0;i<n;i++)	printf("%d ",A[i]);
	printf("\n");
	if(A[0]>A[1])	m=A[0],sm=A[1];
	else			m=A[1],sm=A[0];
	for(i=2;i<n;i++)	{
		if(A[i]>=m)	{
			sm=m;
			m=A[i];
		}
		else if(A[i]>=sm)	{
			sm=A[i];
		}
	}
	printf("%d %d\n",sm,m);
	return 0;
}