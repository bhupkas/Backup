#include"iostream"
#include"stdio.h"
#include"string.h"
using namespace std;
#define MAX_SIZE 1000000
#define FOR(i,a,b)	for(i=a;i<b;i++)
int N;
int segtree[4*MAX_SIZE+1];
int arr[MAX_SIZE]; 
bool prime[1000002];
void pre()
	{
		int i,j;
		FOR(i,0,1000002)	prime[i]=true;
		prime[0]=prime[1]=false;
		for(i=2;i*i<1000002;i++)
			{
				if(prime[i])
				{
					for(j=i;j<=1000002/i;j++)
						prime[i*j]=false;
				}
			}
	}
void build(int pos)
	{
		if(pos>=N-1)	return;
		build(2*pos+1);
		build(2*pos+2);
		segtree[pos]=segtree[2*pos+1]+segtree[2*pos+2];
	}
int query(int l,int r,int cl,int cr,int pos)
	{
		int le_value,ri_value,mid=(cl+cr)/2;
		if(l>cr || r<cl)	return 0;
		if(cl>=l && cr<=r)	return segtree[pos];
		le_value=query(l,r,cl,mid,2*pos+1);
		ri_value=query(l,r,mid+1,cr,2*pos+2);
		return le_value+ri_value;
	}
void update(int cl,int cr,int idx,int pos,int num)
	{
		int mid=(cl+cr)/2;
		if(cl==idx && cr==idx)	
		{
			segtree[pos]=(int)prime[num];
			arr[idx-N+1]=num;
			return;
		}
		if(idx>mid)	update(mid+1,cr,idx,2*pos+2,num);
		else		update(cl,mid,idx,2*pos+1,num);
		segtree[pos]=segtree[2*pos+1]+segtree[2*pos+2];
	}
int main()
	{
		pre();
		char S[100];
		int t,q1,te1,te2,n,q,i,j;
		cin>>t;
		cin>>n>>q;
		te1=1;
		while(te1<n)
			te1<<=1;
		N=te1;
		FOR(i,0,n)
				cin>>arr[i];
		FOR(i,n,2*N-1)	arr[i]=0;
		FOR(i,N-1,2*N-1)	
			{
				if(prime[arr[i-N+1]])	segtree[i]=1;
				else				segtree[i]=0;
			}
		build(0);
		while(q--)
			{
				getchar();
				scanf("%s",S);
				cin>>te1>>te2;
				if(S[0]=='u')	{update(N-1,2*N-2,te1+N-1,0,te2);}
				else			cout<<query(te1+N-1,te2+N-1,N-1,2*N-2,0)<<endl;
			}
		return 0;
	}