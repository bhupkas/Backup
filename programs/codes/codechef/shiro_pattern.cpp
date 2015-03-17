/* bhupkas */

#include "iostream"
#include "stdio.h"
#include "algorithm"

using namespace std;

#define FOR(i,a,b)		for(i=a;i<b;i++)

int n,A[10];
double P[10];
double dp[10][10];

double fun(int idx1,int idx2)
	{
		int mask=0,ans,j,i,total=0;
		double re=0.0,temp;
		FOR(i,idx1,idx2+1)	total+=A[i];
		FOR(i,0,1<<(idx2-idx1+1))
			{
				temp=1;
				ans=0;
				FOR(j,0,idx2-idx1+1)
					{
						if(1<<j & i)
							{
								ans+=A[idx1+j];
							}
					}
				if(2*ans>=total)
					{
						FOR(j,0,idx2-idx1+1)
							{
								if(1<<j & i)	temp=temp*P[idx1+j];
								else			temp=temp*(1-P[idx1+j]);									
							}
						re=re+temp;
					}
			}
		return re;
	}

int main()
	{
		int i,j,dp[10];
		cin>>n;
		FOR(i,0,n)	cin>>A[i];
		FOR(i,0,n)	cin>>P[i];
		FOR(i,0,n)
			{
				FOR(j,0,i)	printf(" ");
				FOR(j,i,n)
					printf("%lf ",fun(i,j));
				cout<<endl;
			}
		return 0;
	}