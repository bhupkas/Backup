/* bhupkas SEGMENT TREE */

#include"iostream"
#include"stdio.h"
#include"algorithm"
using namespace std;
typedef long long LL;
LL N;
void update(LL i,LL j,LL A[])
	{
		if((i-1)/2==(j-1)/2)	return;
		if(i&1)
		{
			A[i+1]++;
			if(j&1)
			{
				update(i/2,j/2,A);
			}
			else
			{
				A[j-1]++;
				update(i/2,j/2 -1,A);
			}
		}
		else
		{
			if(j&1)
			{
				update(i/2-1,j/2,A);
			}
			else
			{
				A[j-1]++;
				update(i/2 -1,j/2 -1,A);
			}
		}
	}
/*void build(int i,int j,int A[])
	{
		if(j==i)	return;
		int k;
		for(k=i;k<=j;k+=2)
				A[k/2]=min(A[k],A[k+1]);				
		build(i/2,j/2 - 1,A);
	}
*/
LL query(LL i,LL A[])
	{
		if(i==0)	return A[0];
		return A[i]+query((i-1)/2,A);
	}
int main()	
	{
		LL N,n,q,i;
		cin>>n>>q;
		while(1<<i <n)	i++;
		N=1<<i;
		LL A[2*N-1];
		LL C[n];
		for(i=0;i<n;i++)	cin>>C[i];
		sort(C,C+n);
		for(i=0;i<2*N-1;i++)	A[i]=0;
		LL start,end;
		while(q--)
			{
				cin>>start>>end;
				start--;
				end--;
				start=N-1+start;
				end=end+N-1;
				if(start==end)	{A[start]++;	continue;}
				A[start]++;
				A[end]++;
				update(start,end,A);
			}
		LL B[n];
		for(i=0;i<n;i++)
			B[i]=query(i+N-1,A);
		sort(B,B+n);
		LL ans=0;
		for(i=0;i<n;i++)
			ans+=B[i]*C[i];
		cout<<ans<<endl;
		//for(i=0;i<n;i++)
		//	cout<<B[i];
		//for(i=0;i<2*N-1;i++)
		//	cout<<A[i]<<" ";
		//cout<<endl;
		return 0;
	}