#include<cstdio>
#include<algorithm>
using namespace std;
typedef  int ll;
struct node 
	{
	ll s;
	ll e;
	ll c;
	};
typedef struct node Node;
bool f(Node a,Node b)
	{
	return a.e<b.e;
	}
int main()
	{
	ll n,i,t,a,b,j,d,max;	
	Node N[10001];
	ll M[10001];
	scanf("%d",&t);		
	while(t--)
		{
		scanf("%d",&n);
		for(i=0;i<n;i++)
			{
			scanf("%d %d %d",&a,&b,&d);
			N[i].s=a;N[i].e=a+b;N[i].c=d;
			}
		if(n==0)	{printf("0\n");	continue;}
		for(i=0;i<n;i++)
			M[i]=0;
		sort(N,N+n,f);
		for(i=0;i<n;i++)
			{
			j=0;	
			max=0;
			while(N[j].e<=N[i].s)
				{
				if(M[j]>max)	max=M[j];
				j++;
				}
			M[i]=max+N[i].c;	
			}
		max=0;	
		for(i=0;i<n;i++)	
			if(M[i]>max)	max=M[i];
		printf("%d\n",max);			
		}
	return 0;
	}
