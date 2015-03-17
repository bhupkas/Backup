/* bhupkas */

#include "iostream"
#include "stdio.h"
#include "vector"

using namespace std;

#define PB push_back
#define FOR(i,a,b)	for(i=a;i<b;i++)

bool P[100005];

void pre()
	{
		int i,j;
		FOR(i,0,100005)	P[i]=true;
		P[0]=P[1]=false;
		for(i=2;i*i<100005;i++)
			{
				if(P[i])
					{
						for(j=i;j<=100005/i;j++)
							P[i*j]=false;
					}
			}

	}

bool A[100005];

bool check(int n)
	{

		int i,j,num=n,te,le;
		vector<int> v,v1;
		while(num)
			{
				v.PB(num%10);
				num/=10;
			}
		le=v.size();
		for(i=0;i< 1<<le;i++)
			{
				v1.clear();
				for(j=0;j<le;j++)
					{
						if(1<<j & i)
							{
								v1.PB(v[j]);
							}
					}
				num=0;
				te=1;
				for(j=0;j<v1.size();j++)
					{
						num+=te*v1[j];
						te=te*10;
					}
				if(P[num])	return false;
			}
		return true;
	}

int main()	
	{
		pre();
		int i,j;
		A[0]=A[1]=true;
		for(i=2;i<100005;i++)
			{
				if(check(i))	A[i]=true;
				else			A[i]=false;
			}
		
		int co=0;
		int B[100005];
		for(i=0;i<100005;i++)	B[i]=0;
		B[1]=1;
		for(i=2;i<100005;i++)
			B[i]=B[i-1]+(int)(A[i]);
		int a,b,t;
		cin>>t;
		while(t--)
			{
				cin>>a>>b;
				if(a>b)	swap(a,b);
				cout<<B[b]-B[a-1]<<endl;
			}
		return 0;
	}