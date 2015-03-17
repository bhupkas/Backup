#include"stdio.h"
#include"iostream"
#include"algorithm"
#include"vector"
#include"set"
#include"map"
#include"math.h"
#include"string.h"
#include"string"
using namespace std;
#define FOR(i,a,b)	for(i=a;i<b;i++)
#define S(n)	scanf("%d",&n)
#define P(n)	printf("%d\n",n);	
int main()
	{
		int n,m,i,j,k,it1,it2,temp;
		S(n);
		int A[5005],B[5005];
		S(m);
		double d;
		FOR(i,0,n)
			{	
				S(A[i]);
				B[i]=A[i];
				scanf("%lf",&d);
			}
		int ans1=0,ans2=0;
		bool S[5005];
		i=0;
		//while(A[i+1]>=A[i])	
		//{
		//	if(i==n-2)	{P(0);	return 0;}
		//	i++;
		//}
		int count1=0,count2=0;
		temp=n;
		for(i=0;i<temp-1;i++)
			if(B[i+1]<B[i])
			{
				count1++;
				for(j=i;j<temp-1;j++)
					B[j]=B[j+1];
				i--;
				temp--;
			}
		temp=0;
		for(i=n-1;i>temp;i--)
			if(A[i-1]>A[i])
			{
				count2++;
				for(j=i;j>temp;j--)
					A[j]=A[j-1];
				i++;
				temp++;
			}
		/*FOR(i,0,n-1)
			{
				FOR(k,0,m)	S[k]=true;
				for(j=i+1;j<n;j++)
					{
						if((A[j]<A[i]) && S[A[j]]==true)	
							{
								ans1++;
								S[A[j]]=false;
							}
					}
				//cout<<ans1<<endl;
			}
		for(i=n-1;i>0;i--)
			{
				FOR(k,0,m)	S[k]=true;
				for(j=i-1;j>=0;j--)
				{
					if((A[j]>A[i]) && S[A[j]]==true)	
						{
							ans2++;
							S[A[j]]=false;
						}
				}
			cout<<ans2<<endl;
			}*/
		//cout<<ans1<<" "<<ans2<<endl;
		P(min(count1,count2));
		return 0;
	}