/* bhupkas */

#include "iostream"
#include "stdio.h"
#include "map"
#include "set"
#include "algorithm"
#include "math.h"
#include "string.h"
#include "string"
#include "deque"
#include"vector"

using namespace std;

typedef long long LL;

#define FOR(i,a,b)	for(i=a;i<b;i++)
#define PB	push_back
#define I 	insert
#define s 	size
#define vi vector<int>
#define vll	vector<LL>
#define MP 	make_pair
#define PP   pair<int,int>

void pre()
	{

	}

int main()
	{
		pre();
		LL co=0,ans=0,cnt=0,i,j,k,n,m;
		string str;
		cin>>n>>k;
		vi v ;
		if(n&1)
			{
				if(k<=n/2+1)
					{
						cout<<k*2-1<<endl;	return 0;
					}
				else
					{
						k-=n/2;
						k--;
						cout<<k*2<<endl;	return 0;
					}	
			}
		else
			{
				if(k<=n/2)
					{
						cout<<k*2-1<<endl;	return 0;
					}
				else
					{
						k-=n/2;
						cout<<k*2<<endl;	return 0;
					}
			}
		return 0;
	}