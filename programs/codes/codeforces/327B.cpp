/* bhupkas */

#include "iostream"
#include "stdio.h"
#include "string.h"
#include "string"
#include "algorithm"
#include "math.h"
#include "vector"
#include "set"
#include "map"
#include "deque"

using namespace std;

#define FOR(i,a,b)	for(i=a;i<b;i++)
#define LL			long long 
#define PB			push_back
#define PP			pair<int,int>
#define PPL			pair<LL,LL>
#define vi			vector<int>
#define vll			vector<LL>
#define I 			insert
#define so(v)		sort(v.begin(),v.end())
#define MOD			(LL)(1e9+7)

LL n,i,j,ans=0,co=0,cnt=0,te,m;

#define si 1500000

bool P[si];
vll p;

void pre()
	{
		FOR(i,0,si)	P[i]=true;
		P[0]=P[1]=false;
		for(i=2;i*i<si;i++)
			{
				if(P[i])
					{
						for(j=i;j<=si/i;j++)
							P[i*j]=false;
					}
			}
		FOR(i,0,si)	if(P[i]) p.PB(i);
	}

int main()
	{
		pre();
		vll v;
		string str;
		cin>>n;
		FOR(i,0,n)
			cout<<p[i]<<" ";
		cout<<endl;
		return 0;
	}	