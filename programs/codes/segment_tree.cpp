/* bhupkas SEGMENT TREE */

#include"iostream"
#include"stdio.h"
#include"algorithm"
using namespace std;
int N;
void update(int i,int A[])
	{
		if(i==0)	return;
		if(i&1)	
				A[i/2]=min(A[i],A[i+1]);
		else
				A[i/2 -1]=min(A[i],A[i-1]);
			update(i/2,A);
	}
void build(int i,int j,int A[])
	{
		if(j==i)	return;
		int k;
		for(k=i;k<=j;k+=2)
				A[k/2]=min(A[k],A[k+1]);				
		build(i/2,j/2 - 1,A);
	}
int query(int mi,int i,int j,int A[])
	{
		if((i-1)/2 == (j-1)/2)	return mi;	
		if(i&1)
			{
				mi=min(mi,A[i+1]);
				if(j&1)		return query(min(mi,A[j]),i/2,j/2,A);
				else		return query(min(mi,A[j-1]),i/2,j/2 -1,A);	
			}	
		else
			{
				mi=min(mi,A[i]);
				if(j&1)			return query(min(mi,A[j]),i/2 -1 ,j/2,A);
				else			return query(min(mi,A[j-1]),i/2 -1,j/2 -1,A);
			}
	}
int main()	
	{
		int n;
		cin>>n;
		int i;
		i=0;
		while(1<<i <n)	i++;
		N=1<<i;
		int A[2*N-1];
		for(i=0;i<n;i++)	cin>>A[N-1+i];
		for(i=n+N-1;i<2*N-1;i++)
			A[i]=1e8;
		build(N-1,2*N-2,A);
		int up,temp,temp1;
		int j;
		for(i=N-1;i<2*N-1;i++)
			cout<<A[i]<<" ";
		cout<<endl;
		cin>>up;
		while(up--)
			{
				cin>>temp>>temp1;
				cout<<query(min(A[temp+N-1],A[temp1+N-1]),temp+N-1,temp1+N-1,A)<<endl;
			}
		return 0;
	}