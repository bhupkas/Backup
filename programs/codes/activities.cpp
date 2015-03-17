#include<cstdio>
#include<algorithm>
using namespace std;
struct node
	{
	int s,e;
	};
typedef struct node Node;
bool f(Node a,Node b)
	{
	return a.e<b.e;
	}
int search(Node N[],int i,int n)
	{
	int lo=0,hi=n-1,mid;
	while(lo<hi-1)
	{
		mid=(lo+hi)/2;
		if (N[mid].e<=N[i].s)
			lo=mid;
		else
			hi=mid-1;
	}
	if (hi>=0 and N[hi].e<=N[i].s)
		return hi;
	if (N[lo].e<=N[i].s)
		return lo;
	return -1;
	}
int main()
	{
	int n,i,j,len;
	Node N[100001];
	int M[100001];
	while(1)
		{
		len=0;
		scanf("%d",&n);
		if(n==-1)	break;
		for(i=0;i<n;i++)
			{
			M[i]=0;
			scanf("%d %d",&N[i].s,&N[i].e);
			}
		sort(N,N+n,f);
		if(n==1)	{printf("00000001\n");	continue;}
		M[0]=1;
		for(i=1;i<n;i++)
			{
			M[i]+=M[i-1];
			M[i]%=100000000;
			j=search(N,i,n);
			if(j>=0)	{M[i]=M[i]+1+M[j];	M[i]%=100000000;}
			else		{M[i]+=1;		M[i]%=100000000;}
			}
		printf("%08d\n",M[n-1]);		
		}
	return 0;
	}
