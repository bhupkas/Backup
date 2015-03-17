#include"stdio.h"
#include"algorithm"
using namespace std;
struct node 
	{
			int  s;
		int e;
	};
bool (Node a,Node b)
	{
		return a.s<b.s;
	}
typedef struct node Node;
int main()
	{
		Node N[100005];
		int n;
		scanf("%lld",&n);
		int  i;
		for(i=0;i<n;i++)
		{
			scanf("%lld %lld",&N[i].s,&N[i].e);
		}
		bool B[10000005];
		int A[10000005];
		for(i=0;i<10000005;i++)	{B[i]=false;	A[i]=0;}
		int ans=0;
		for(i=n-1;i>=0;i--)
		{
			for(j=N[i].s;j<)
		}
		return 0;
	}