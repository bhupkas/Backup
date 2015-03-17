/* bhupkas */

#include "stdio.h"
#include "vector"
#include "string.h"
#include "iostream"
#include "algorithm"
#include "map"

using namespace std;

#define FOR(i,a,b)	for(i=a;i<b;i++)
#define LL		long long
#define vi		vector<int>
#define PB		push_back


int Co[100001][6];

bool P[100005];
vi p;

void pre()
{
	int  i,j;
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
	FOR(i,0,100005)	
		{
			if(P[i])	
				{
					p.PB(i);
				}
		}
	FOR(i,0,6)
		{
			Co[1][i]=0;
			Co[2][i]=0;
		}
	Co[2][1]=1;
	FOR(i,3,100001)
	{
		FOR(j,0,6)
			Co[i][j]=Co[i-1][j];
		if(P[i])
			Co[i][1]++;
		else
		{
			int tmp=i,count=0;
			for(j=0;tmp!=1;j++)
			{
				if(tmp%p[j]==0)
				{
					count++;
					while(tmp%p[j]==0)
						tmp/=p[j];
				}
			}
			if(count<=5)
				Co[i][count]++;
		}
	}
}

int main()
{
	pre();
	int t,a,b,k;
	cin>>t;
	while(t--)
	{
		cin>>a>>b>>k;
		cout<<Co[b][k]-Co[a-1][k]<<endl;
	}
	return 0;
}
