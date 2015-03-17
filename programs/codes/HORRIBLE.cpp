#include"algorithm"
#include"iostream"
#include"stdio.h"
using namespace std;
typedef long long LL;
LL N;
struct node
	{
		LL num;
		LL dec;
	};
typedef struct node Node; 
void build(LL i,LL j,LL d,Node A[])
	{
		if(i==j)	return;
		LL k;
		for(k=i;k<=j;k+=2)			A[k/2].dec=d;
		build(i/2,j/2 -1,2 + d*2 ,A);
	}
void update(LL i,LL j,LL v,Node A[])
	{
		if((i-1)/2 == (j-1)/2)	return;
		if(i&1)		A[i+1].num+=v;
		if(!(j&1))	A[j-1].num+=v;
		update((i-1)/2,(j-1)/2,v,A);	
	}
LL query(LL i,LL j,LL ans,Node A[])
	{
		cout<<i<<" "<<j<<" "<<ans<<endl;
		if(i==j && i==0)		return ans+A[0].num;
		if(i==j)				return query((i-1)/2,(j-1)/2,ans+A[i].num,A);
		ans+=A[i].num+A[j].num;
		if(i&1)						return query((i-1)/2,(j-1)/2,ans+(A[i+1].num)*A[i+1].dec,A);
		if(!(j&1))					return query((i-1)/2,(j-1)/2,ans+(A[j-1].num)*A[j-1].dec,A);
	}
int main()
	{
		LL ans,t,n,i,q;
		LL de,temp1,temp2,v;
		cin>>t;
		while(t--)
			{
				i=0;
				cin>>n;
				while(1<<i <n)	i++;
				N=1<<i;
				Node A[2*N-1];
				for(i=0;i<2*N-1;i++)	A[i].num=0;
				for(i=N-1;i<2*N-1;i++)	A[i].dec=1;
				build(N-1,2*N-2,2,A);
				cin>>q;
				while(q--)
					{
						cin>>de;
						if(de)
						{
						}
						else
						{
						}
					for(i=0;i<2*N-1;i++)	cout<<A[i].num<<" ";
					cout<<endl;
					}
			}
		return 0;
	}