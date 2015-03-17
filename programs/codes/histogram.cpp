#include<cstdio>
#include<deque>
using namespace std;
typedef long long int ll;
int main()
	{
	ll max,i,n,Ar[100001],L[100001],R[100001],A[100001];
	deque<ll> q;
	while(1)
		{
		scanf("%lld",&n);
		if(n==0)	return 0;
		else
			{
			q.clear();
			for(i=0;i<n;i++)
				scanf("%lld",&A[i]);
			q.push_front(0);
			for(i=1;i<n;i++)
				{
				if(A[i]>=A[q.front()])
					q.push_front(i);
				else
					{
					while(!q.empty())
						{
						if(A[i]<A[q.front()])
							{
							R[q.front()]=i-q.front()-1;
							q.pop_front();
							}
						else	break;
						}
					q.push_front(i);
					}
				}
			while(!q.empty())
				{
				R[q.front()]=n-1-q.front();
				q.pop_front();
				}
			q.push_front(n-1);
			for(i=n-2;i>=0;i--)
				{
				if(A[i]>=A[q.front()])
					q.push_front(i);
				else
					{
					while(!q.empty())
						{
						if(A[i]<A[q.front()])
							{
							L[q.front()]=q.front()-1-i;
							q.pop_front();
							}
						else	break;
						}
					q.push_front(i);
					}
				}
			while(!q.empty())
				{
				L[q.front()]=q.front();
				q.pop_front();
				}
			for(i=0;i<n;i++)
				Ar[i]=(L[i]+R[i]+1)*A[i];
			max=Ar[0];
			for(i=0;i<n;i++)
				if(Ar[i]>max)	max=Ar[i];
			printf("%lld\n",max);		
			}
		}
	return 0;
	}
