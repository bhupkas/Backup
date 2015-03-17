#include"stdio.h"
#include"vector"
using namespace std;
typedef long long int LL;
#define FOR(i,a,b) 		for(i=a;i<b;i++)
int main()
	{
		bool P[1000010],flag;
		vector<LL> v;
		LL t,i,j,n,n1,count;
		FOR(i,0,1000010)	P[i]=true;
		P[0]=P[1]=false;
		for(i=2;i*i<1000010;i++)
			{
				if(P[i])
				{
					for(j=i;j<=1000010/i;j++)
					{
						P[i*j]=false;
					}
				}
			}
		FOR(i,2,1000010)
			if(P[i])	v.push_back(i);
		scanf("%lld",&t);
		while(t--)
				{
					flag=true;
					scanf("%lld",&n);
					n1=n;
					for(i=0;v[i]*v[i] < n1;i++)
					{
						if(n%v[i]==0)
						{
							count=0;
							while(n%v[i]==0)	{n/=v[i];	count++;}
							if(v[i]%4==3 && (count&1))	{flag=false;	break;}	
						}
					}
					if(n%4==3)	{flag=false;	}
					if(flag)	printf("Yes\n");
					else		printf("No\n");
				}
		return 0;
	}