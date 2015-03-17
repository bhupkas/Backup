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

LL po(LL x)
	{
		if(x==0)	return 1;
		if(x==1)	return 2;
		LL re=po(x/2)%MOD;
		re= (re* re)%MOD;
		if(x&1)
			{
				return (re<<1)%MOD;
			}
		return re%MOD;
	}

int main()
	{
		LL i,j,k,m,ans=0;
		LL A[105];
		string str;
		cin>>str;
		LL si=(LL)str.size();
		j=0;
		for(i=si-1;i>=0;i--)
			{
				if(str[i]=='1')	ans = (ans + (po(j+si-1)))%MOD;
				j++;
			}
		while(ans<0)	ans+=MOD;
		cout<<(ans+MOD)%MOD<<endl;
		pre();
		return 0;
	}