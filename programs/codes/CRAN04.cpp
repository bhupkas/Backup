#include"stdio.h"
#include"iostream"
#include"vector"
#include"algorithm"
#include"string.h"
using namespace std;
int main()
	{
		int t,n,k;
		int A[1000005];
		cin>>t;
		int i,j,ans;
		int temp,len,count;
		char C[1000005];
		while(t--)	
			{
				ans=0;
				cin>>n>>k;
				for(i=0;i<n;i++)
					A[i]=0;
				getchar();
				scanf("%s",C);
				if(C[0]=='1')	A[0]=1;
				for(i=1;i<n;i++)
				{
					if(C[i]=='1')	A[i]=A[i-1]+1;
					else			A[i]=A[i-1];
				}
				i=0;j=0;
				count=C[0]-'0';
				while(j<n)
				{
					if(count)
				}
			}
		return 0;
	}