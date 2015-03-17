/* bhupkas */

#include "iostream"
#include "stdio.h"
#include "vector"
#include "algorithm"

using namespace std;

#define FOR(i,a,b)		for(i=a;i<b;i++)
#define vi				vector<int>
#define PB				push_back

int llap(vi v,int n)
	{
		int re=2;
		int i,j,k;
		if(n<=2)	return n;
		int L[n][n];
		FOR(i,0,n)
			L[i][n-1]=2;
		for(j=n-2;j>=1;j--)
			{
				i=j-1;
				k=j+1;
				while(i>=0 && k<n)
					{
						if(v[i]+v[k]<2*v[j])
							k++;
						else if(v[i]+v[k]>2*v[j])
							{
								i--;
								L[i][j]=2;
							}
						else
							{
								L[i][j]=L[j][k]+1;
								re=max(re,L[i][j]);
								i--;
								k++;
							}
					}
				while(i>=0)
					{
						L[i][j]=2;
						i--;
					}
			}
		return re;
	}

int main()	
	{
		int n,i,j;
		cin>>n;
		vi v(n);
		FOR(i,0,n)	cin>>v[i];
		sort(v.begin(),v.end());
		cout<<llap(v,n)<<endl;	
		return 0;
	}