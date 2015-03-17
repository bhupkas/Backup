#include"stdio.h"
using namespace std;
int main()
	{
		int ans,n,F[101],flag,t,i,j,N[10001],max,T[101];
		scanf("%d",&t);
		while(t--)
			{
				flag=0;
				max=-1;
				for(i=0;i<101;i++)	T[i]=F[i]=0;
				scanf("%d",&n);
				for(i=0;i<n;i++)
					{
						scanf("%d",&N[i]);
						F[N[i]]++;
					}
				for(i=0;i<n;i++)
					{
						if(F[N[i]]%N[i]==0)	{flag=1;	T[N[i]]=F[N[i]];}
					}
				if(flag==0)	{printf("-1\n");	continue;}
				for(i=0;i<n;i++)
					{
						if(T[N[i]]>max)	max=T[N[i]];
					}
				ans=100000000;
				for(i=0;i<n;i++)
					{
						if(T[N[i]]==max)	
						{
							if(N[i]<ans)	ans=N[i];
						}
					}
				printf("%d\n",ans);
			}
		return 0;
	}