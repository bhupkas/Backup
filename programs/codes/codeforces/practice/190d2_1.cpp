/* bhupkas */

#include"iostream"
#include"stdio.h"
#include"vector"
#include"algorithm"

using namespace std;

#define S(n)	scanf("%d",&n)

int main()
	{
		int n,m,mi,ma;
		S(n);S(m);
		if(n==0 && m!=0)	{cout<<"Impossible"<<endl;	return 0;}
		if(n==0 && m==0)	{cout<<0<<" "<<0<<endl;}
		else
			{ 
				if(n<=m)
					{
						mi=m;
						ma=m+n-1;
						cout<<mi<<" "<<ma<<endl;
					}
				else
					{
						mi=n;
						if(m==0)	ma=n;
						else		ma=n+m-1;
						cout<<mi<<" "<<ma<<endl;
					}
			}
		return 0;
	}