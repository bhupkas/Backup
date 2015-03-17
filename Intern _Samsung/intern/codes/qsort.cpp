/* bhupkas */

#include "iostream"
#include "stdio.h"
#include "algorithm"
#include "vector"

using namespace std;

#define FOR(i,a,b)		for(i=a;i<b;i++)
#define PB				push_back

int n;

int partition(int A[],int left,int right)
	{
		int i,te,pivot = A[(left+right)/2];
	    while(left<right)
		    {
		        while (A[left] <= pivot) left++;
		        while (A[right] > pivot) right--;
		        if (left < right && A[left] != A[right])	swap(A[left],A[right]);
		        else		       							return right;
		    }
	    return right;
	}

void quick(int A[],int l,int r)
	{
		int pivot,i;
		if(l<r)
			{
				pivot=partition(A,l,r);
				quick(A,l,pivot-1);
				quick(A,pivot+1,r);
			}
	}

int main()
	{
		int i,j;
		cin>>n;
		int A[100];
		FOR(i,0,n)	cin>>A[i];
		quick(A,0,n-1);
		FOR(i,0,n)		cout<<A[i]<<" ";
		cout<<endl;
		return 0;
	}