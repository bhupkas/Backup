/* bhupkas */

#include "iostream"
#include "stdio.h"
#include "algorithm"
#include "vector"

using namespace std;

#define FOR(i,a,b)	for(i=a;i<b;i++)

int main()
	{
		   long long n,m,i,j,c,k;
    cin>>n>>m;
    j=1;
    if(m%2==1)
    {
        while(j<=n)
        {
            c=(m+1)/2;
            if(j<=n)    {cout<<c<<endl;j++;}
            i=1;
            while(c-i>=1 || c+i<=m)
            {
                if(c-i>=1 && j<=n) {cout<<c-i<<endl;j++;}
                if(c+i<=m && j<=n) {cout<<c+i<<endl;j++;}
                i++;        
            }   
        }
    }
    else
    {
        while(j<=n)
        {
            c=(m+1)/2;
            if(j<=n)    {cout<<c<<endl;j++;}
            if(j<=n)    {cout<<c+1<<endl;j++;}
            i=1;
            k=2;
            while(c-i>=1 || c+k<=m)
            {
                if(c-i>=1 && j<=n) {cout<<c-i<<endl;j++;}
                if(c+k<=m && j<=n) {cout<<c+k<<endl;j++;}
                i++;k++;
                        
            }   
        }
    
    }

		return 0;
	}