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
 
int main()
	{
		LL i,j,n,co=0,n1,k,m;
		cin>>n;
		n1=n;
		int str[20];
		while(n1)
			{
				n1/=10;
				co++;
			}
		n1=n;
		for(i=co-1;i>=0;i--)
			{
				str[i]=n1%10;
				n1/=10;
			}
		FOR(i,0,co)
			{
				if(str[i]==1)	continue;
				if(str[i]!=1  && str[i]!=4)	{cout<<"NO"<<endl;	return 0;}
				if(str[i]==4)
					{
						if(i==0)	{cout<<"NO"<<endl;	return 0;}
						else if(i==1)
							{
								if(str[0]!=1)	{cout<<"NO"<<endl;	return 0;}		
							}
						else
							{
								if(!(str[i-1]==1 || (str[i-1]!=4) && str[i-2]==1))	{cout<<"NO"<<endl;	return 0;}
							}	
					}
			}
		cout<<"YES"<<endl;
		pre();
		return 0;
	}