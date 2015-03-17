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
#define INF			(LL)(1e9+7)

void pre()
	{

	}

inline int gcd(int a, int b) 
	{
		while(b) 
			b ^= a ^= b ^= a %= b;
		return a;
	}

int main()
	{
		pre();
		int i,j,k,gc,a,b,c,d;
		cin>>a>>b>>c>>d;
		double x=(double)a/(double)c;
		double y=(double)b/(double)d;
		if(((double)d)*x<=b)
	{
		int numerator=a*d,denominator=b*c;
		gc=gcd(numerator,denominator);
		while(gc!=1)	
			{
				numerator/=gc;
				denominator/=gc;
				gc=gcd(numerator,denominator);
			}
		cout<<denominator-numerator<<"/"<<denominator<<endl;
	}
	else
	{
		int numerator=c*b,denominator=a*d;
		gc=gcd(numerator,denominator);
		while(gc!=1)	
			{
				numerator/=gc;
				denominator/=gc;
				gc=gcd(numerator,denominator);
			}
		cout<<denominator-numerator<<"/"<<denominator<<endl;
	}
	return 0;
	}