#include"stdio.h"
#include"vector"
#include"algorithm"
using namespace std;
bool f(int a,int b)
	{
		return a>b;
	}
int main()
	{
		int sum,fr,ans=0,n,m,k,i,j;
		vector<int> v;
		scanf("%d %d %d",&n,&m,&k);
		for(i=0;i<n;i++)	{scanf("%d",&j);	v.push_back(j);}
		sort(v.begin(),v.end(),f);
		fr=n;
		if(n<=k)
		{
			ans=0;
			sum=0;
			for(i=0;i<n;i++)	sum+=v[i];
			if((sum+k-n)<m)	{printf("-1\n");	return 0;}
			fr=k;
			i=0;
			while(fr<m)
			{
				ans++;
				fr+=v[i]-1;
				i++;
			}
			printf("%d\n",ans);
		}
		else
		{
			sum=0;
			ans=0;
			fr=k;
			for(i=0;i<n;i++)
			{
				if(fr>=m)	break;
				ans++;
				fr+=v[i]-1;
			}
			if(i==n)	{printf("-1\n");	return 0;}
			printf("%d\n",ans);	
		}
		return 0;
	}