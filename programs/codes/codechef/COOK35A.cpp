/* bhupkas */

#include "iostream"
#include "stdio.h"
#include "vector"
#include "map"
#include "set"
#include "algorithm"
#include "string.h"
#include "string"
#include "math.h"

using namespace std;

void pre()
	{

	}

#define PB 	push_back
#define I   insert
#define LL	long long 
#define so(v)	sort(v.begin(),v.end())
#define FOR(i,a,b)	for(i=a;i<b;i++)
#define MOD (LL)(1e9 + 7) 
#define PP pair<LL,LL>
#define MP make_pair

int main()
	{
		pre();
		string str;
		cin>>str,str2;
		LL i,j,k;
		LL si=str.size();
		bool flag=false;
		FOR(i,0,si)
			{
				flag=false;
				FOR(j,i,si)
					{
						if(str[j]>='A' && str[j]<='Z' && !flag)	{k=j;	flag=true;}	
						str2=str.substr(i,j);
						
					}
			}
		return 0;
	}