#include"stdio.h"
#include"iostream"
#include"algorithm"
using namespace std;
typedef long long int LL;
struct node
	{
		LL s;
		LL f;
	};
typedef struct node Node; 
bool f(Node n1,NOde n2)
	{
		return n1.f<n2.f;
	}
int (Node N[],LL m,int n,int low)
	{
		int mid,high=n-1;
		while(low<=high)
			{
				mid=(low+high)/2;
				if(mid==n-1 && N[mid].s<m)
					return mid;
				else if(N[mid]<m && N[mid+1].s>=m)
					return mid;
				else if (S[mid]<m)
					low=mid+1;
				else
					high=mid-1;
			}
	return -1;
	}
int main()
	{
		int t,i,n;
		cin>>t;
		Node N[1000005];
		int Co[1000005];
		while(t--)
			{
				int max=-1;
				cin>>n;
				for(i=0;i<n;i++)	Co[i]=0;
				Co[n-1]=1;
				for(i=0;i<n;i++)	cin>>N[i].s>>N[i].f;
				sort(N,N+n,f);
				for(i=0;i<n;i++)
				{

					if(count>max)
						max=count;
				}
			}
		return 0;
	}