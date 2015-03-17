/* bhupkas */

#include "stdio.h"
#include "iostream"
#include "algorithm"
#include "vector"

using namespace std;

#define FOR(i,a,b)		for(i=a;i<b;i++)
#define PB				push_back
#define vi				vector<int>

bool P[8000000];
vi p;

void pre()
	{
		int i,j;
		FOR(i,0,8000000)	P[i]=true;
		P[0]=P[1]=false;
		for(i=2;i*i<8000000;i++)	
			{
				if(P[i])
					{
						for(j=i;j<=8000000/i;j++)
							P[i*j]=false;
					}
			}
		FOR(i,2,8000000)	if(P[i])	p.PB(i);
		cout<<p.size()<<endl;
	}

int main()
	{
		pre();
		long long  n=600851475143,i,j;
		for(i=0;p[i]*p[i]<n;i++)
			{
				if(n%p[i]==0)
					while(n%p[i]==0)
						{
							n/=(long long)p[i];
						}
			}
		if(n!=1)		cout<<n<<endl;
		return 0;
	}