/* bhupkas */

#include "iostream"
#include "stdio.h"
#include "algorithm"
#include "map"
#include "string.h"
#include "string"

using namespace std;

#define FOR(i,a,b)			for(i=a;i<b;i++)

double A[105][10005];

int num[105];
int p[105];
int n;
int T[105];

double fun(int i,int val)
	{
		if(val<=0)		return 1.0;
		if(val>T[i])	return 0.0;
		//cout<<A[i][val]<<endl;
		if(A[i][val]!=-1.0)	return A[i][val];
		if(i==0)
			{
				if(val<=num[0])	return (double)p[0]/100.0;
				else			return 0.0;
			}
		A[i][val]=fun(i-1,val)*(double)(100-p[i])/(100.0) + fun(i-1,val-num[i])*(double)(p[i])/100.0;
		return A[i][val];
	}

int main()
	{
		int t,i,j,total;
		double ans;
		cin>>t;
		while(t--)	
			{
				total=0;
				cin>>n;
				FOR(i,0,n)	cin>>num[i];
				FOR(i,0,n)	cin>>p[i];
				FOR(i,0,n)	total+=num[i];
				FOR(i,0,n)
					FOR(j,0,total+1)
						A[i][j]=-1.0;
				T[0]=num[0];
				FOR(i,1,n)	T[i]=T[i-1]+num[i];
				ans=fun(n-1,(total+1)/2);
				printf("%0.12lf\n",ans);
			}
		return 0;
	}