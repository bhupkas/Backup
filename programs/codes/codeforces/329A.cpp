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

#define FOR(i,a,b)		for(i=a;i<b;i++)
#define LL			long long 
#define PB			push_back
#define PP			pair<int,int>
#define PPL			pair<LL,LL>
#define vi			vector<int>
#define vll			vector<LL>
#define I 			insert
#define so(v)			sort(v.begin(),v.end())
#define MOD			(LL)(1e9+7)

LL n,ans=(LL)10000000000,r,co=0,cnt=0,k,te,m;
char S[105][105];
void pre()
	{
		LL i,j;
	}

bool check(LL x,LL y)
	{
		LL i,j;
		FOR(i,0,n)
			{
				if(S[x][i]!='E')	return true;
			}
		FOR(i,0,n)
			{
				if(S[i][y]!='E')	return true;
			}
		return false;
	}

vll v[105];
bool B[105],R[105];

int main()
	{	
		pre();
		LL i,j;
		cin>>n;
		getchar();
		FOR(i,0,n)	
			scanf("%s",S[i]);
		FOR(i,0,n)
			{
				FOR(j,0,n)
					{
						if(S[i][j]=='E' && !check(i,j))
							{
								cout<<-1<<endl;	
								return 0;
							}
					}
			}		
		FOR(i,0,n)
			{
				FOR(j,0,n)
					{
						if(S[i][j]=='.')	v[i].PB(j);					
					}	
			}
		FOR(i,0,n)	R[i]=B[i]=false;
		FOR(i,0,n)	if(v[i].size()==0)	break;
		if(i!=n)
			{	
				FOR(i,0,n)
					{	
						FOR(j,0,v[i].size())
							{
								if(!B[v[i][j]])
									{
										cout<<i+1<<" "<<v[i][j]+1<<endl;
										B[v[i][j]]=true;
									}
							}	
					}
			}	
		else
			{
				FOR(i,0,n)
					cout<<i+1<<" "<<v[i][0]+1<<endl;	
			}	
		return 0;
	}
