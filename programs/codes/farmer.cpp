#include<cstdio>
#include<cstring>
#include<deque>
using namespace std;
typedef long long int ll;
int main()
	{	
	ll m,n,f,i,max,h[4002],j,l[4002],r[4002],ar[4002];
	char S[4002];
	deque<ll> q;	
	while(1)
		{
		q.clear();
		for(i=0;i<4002;i++)	{l[i]=r[i]=ar[i]=h[i]=0;}
		scanf("%lld",&m);
		scanf("%lld",&n);
		if(m==0&&n==0)	break;
		scanf("%lld",&f);	
		getchar();	
		max=0;
		for(i=0;i<m;i++)
			{
			gets(S);
			for(j=0;j<n;j++)
				{
				if(S[j]=='C')	h[j]=0;
				else		h[j]++;
				}
			q.push_front(0);
			for(j=1;j<n;j++)
				{
				if(h[j]>=h[q.front()])
					q.push_front(j);
				else
					{
					while(!q.empty())
						{
						if(h[j]<h[q.front()])
							{
							r[q.front()]=j-q.front()-1;
							q.pop_front();
							}
						else	break;
						}
					q.push_front(j);
					}
				}
			while(!q.empty())
				{
				r[q.front()]=n-1-q.front();
				q.pop_front();
				}
			q.push_front(n-1);
			for(j=n-2;j>=0;j--)
				{
				if(h[j]>=h[q.front()])
					q.push_front(j);
				else
					{
					while(!q.empty())
						{
						if(h[j]<h[q.front()])
							{
							l[q.front()]=q.front()-1-j;
							ar[q.front()]=(l[q.front()]+r[q.front()]+1)*h[q.front()];
							if(ar[q.front()]>max)	max=ar[q.front()];
							q.pop_front();
							}
						else	break;
						}
					q.push_front(j);
					}
				}
			while(!q.empty())
				{
				l[q.front()]=q.front();
				ar[q.front()]=(l[q.front()]+r[q.front()]+1)*h[q.front()];
				if(ar[q.front()]>max)	max=ar[q.front()];
				q.pop_front();
				}
			//for(j=0;j<n;j++)
			//	ar[j]=(l[j]+r[j]+1)*h[j];
			//for(j=0;j<n;j++)
			//	if(ar[j]>max)	max=ar[j];
		}
		printf("%lld\n",max*f);		
		}
	return 0;	
	}
