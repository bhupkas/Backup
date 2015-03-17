/*	bhupkas */

#include"stdio.h"
#include"iostream"
#include"algorithm"
#include"vector"
#include"string.h"
#include"string"
#include"math.h"
#include"deque"
#include"map"
using namespace std;
typedef long long LL;
int F[200005];
bool f(LL a,LL b)
	{
			return a<b;
	}
int main()
	{	
		LL n,q,A[200005];
		cin>>n>>q;
		LL i;
		for(i=0;i<n;i++)
			cin>>A[i];
		for(i=0;i<n;i++)
			F[i]=0;
		LL a,b;
		for(i=0;i<q;i++)
			{cin>>a>>b;F[a-1]++;F[b]--;}
		for(i=1;i<n;i++)
			F[i]+=F[i-1];
		sort(F,F+n,f);
		sort(A,A+n,f);
		LL ans=0;
		for(i=0;i<n;i++)
		{
			ans+=A[i]*F[i];
		}
	cout<<ans<<endl;
	return 0;		
	}