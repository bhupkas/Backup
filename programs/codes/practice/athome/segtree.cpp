/* bhupkas segtree for sum in range top-down approach */
/* 0-based index */
/*
0 num1 num2 		0 is query output,output the sum in the range num1-num2 
1 num1 num2 		1 is the value update operation seg[N-1+num1]=num2;
*/

#include"stdio.h"
#include"iostream"
#include"vector"
using namespace std;
#define MAX_SIZE 100000
#define FOR(i,a,b)	for(i=a;i<b;i++)
typedef long long LL;
int seg[4*MAX_SIZE+1];
int N;																			//N is nearest power of 2 from n; n is the number of integers

/* Building the segment tree */

void build(int pos)
	{
		if(pos>=N-1)	return;
		build(2*pos+1);
		build(2*pos+2);
		seg[pos]=seg[2*pos+1]+seg[2*pos+2];
		return;
	}

/*  Query 
	l-r range of query 
	cl-cr range of idx (span of idx)
*/

int query(int l,int r,int cl,int cr,int idx)
	{
		int mid,le_val=0,ri_val=0,i,j;
		mid=(cl+cr)/2;
		if(r<cl || l>cr)	return 0;											//Out of range		
		if(l<=cl && r>=cr)	return seg[idx];									//Completely in the range
		le_val=query(l,r,cl,mid,2*idx+1);										
		ri_val=query(l,r,mid+1,cr,2*idx+2);
		return le_val+ri_val;
	}

/*
	Update the value 
	idx is the index to be updates
	pos is the current position of the recursion
*/

void update(int cl,int cr,int idx,int pos,int num)
	{
		int le_value=0,ri_value=0,mid=(cl+cr)/2;
		if(cl==idx && cr==idx)	{seg[pos]=num;	return;}
		if(idx>=mid+1)	update(mid+1,cr,idx,2*pos+2,num);						//Right child
		else			update(cl,mid,idx,2*pos+1,num);							//Left child
		seg[pos]=seg[2*pos+1]+seg[2*pos+2];
		return;	
	}

int main()
	{
		int q1,te2,te1,le,ri,n,q,i;
		cin>>n>>q;
		te1=1;
		while(te1<n)		te1<<=1;
		N=te1;
		FOR(i,0,N-1)	seg[i]=-1;
		FOR(i,N-1,N-1+n)	
				cin>>seg[i];
		while(i!=2*N-1)
			{seg[i]=0;	i++;}
		build(0);
		while(q--)
			{
				cin>>q1>>te1>>te2;
				if(q1==0)	cout<<query(te1+N-1,te2+N-1,N-1,2*N-2,0)<<endl;
				else		update(N-1,2*N-2,te1+N-1,0,te2);
			}
		return 0;
	}