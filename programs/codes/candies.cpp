#include"stdio.h"
int m(int a)
{
	if(a<0)	return -1*a;
	return a;
}
int main()
	{
		int A[301],i,temp,j,t,n,k,ans;
		bool S[301];
		scanf("%d",&t);
		ans=0;
		while(t--)
		{
			ans=0;
			scanf("%d %d",&n,&k);
			for(i=0;i<=n;i++)	S[i]=true;
			for(i=0;i<n;i++)
				scanf("%d",&A[i]); 
			for(i=0;i<n;i++)
				{
					if(S[i])
						{
							ans++;
							S[i]=false;
							temp=A[i];
							for(j=i+1;j<n;j++)
							{
								if(m(A[j]-temp)>=k)	{S[j]=false;	temp=A[j];}
							}
						}
				}
				printf("%d\n",ans);
		}
		return 0;
	}