/* bhupkas SEGMENT TREE */

#include"iostream"
#include"stdio.h"
#include"algorithm"
using namespace std;
int no(int i)
	{
		if(i==0)	return 1;
		return 0;
	}
void update(int i,int A[])
	{
		if(i==0)	return;
		if(i&1)	
				A[i/2]=min(A[i],A[i+1]);
		else
				A[i/2 -1]=min(A[i],A[i-1]);
			update(i/2,A);
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
		int n,N,i,q;
		cin>>n>>q;
		i=0;
		while(1<<i <n)	i++;
		N=1<<i;
		A[2*N-1];		
		for(i=0;i<N-1;i++)	A[i]=0;
		for(i=N-1;i<2*N-1;i++)	A[i]=1;
		int temp,a,b;
		while(q--)
		{
			cin>temp>>a>>b;
			if(temp==0)
			{
				a=N-1+a;
				b=N-1+b;
				if(a!=b)	A[a]=no(A[a]);
				else
				{
					A[a]=no(A[a]);
					A[b]=no(A[b]);
				}
				
			}
		}
	return 0;
	}