/* bhupkas */

#include "iostream"
#include "stdio.h"
#include "algorithm"
#include "assert.h"

using namespace std;

#define FOR(i,a,b)			for(i=a;i<b;i++)

int main()
	{
		int t,i,j,n,re,A[105];
		bool B[105];
		cin>>t;
		assert(t<=100 && t>=1);
		while(t--)
			{
				re=0;
				cin>>n;
				assert(n>=1 && n<=100);
				FOR(i,0,n)
					{
						cin>>A[i];
						assert(A[i]>=1 && A[i]<=1000000);
					}
				FOR(i,0,n)		B[i]=false;
				sort(A,A+n);
				FOR(i,0,n)
					{
						if(!B[i])	
							{	
								FOR(j,0,n)
									{
										if(!B[j] && (A[i]==2*A[j] || A[j]==2*A[i]))	{B[i]=B[j]=true,re++;	break;}
									}
							}
					}
				cout<<re<<endl;
			}
		return 0;
	}