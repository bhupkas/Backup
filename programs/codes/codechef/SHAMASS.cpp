/* bhupkas */

#include "bits/stdc++.h"

using namespace std;

#define EPS 1e-6

#define NMAX 10055

long double T[NMAX + 5];
long double S[NMAX + 5];
long double V[NMAX + 5];

int main()
{
	int t;
	cin >> t;
	int n,d1,a1;
	long double d,a;
	while(t--)
	{
		scanf("%d %d %d",&n,&a1,&d1);
		a = (long double)a1;
		d = (long double)d1;
		for(int i = 0 ; i < n ; i++)	scanf("%Lf %Lf",&S[i],&V[i]);
		for(int i = 0 ; i < n ; i++)
		{
			long double temp = (V[i] * V[i]) / (2.0*a);
			if(temp < d + EPS)            
			{
				long double foo1 = V[i] / a;
				long double foo2 = (d - temp) / V[i];
				T[i] = foo1 + foo2 + S[i];
			}
			else	T[i] = S[i] + sqrtl((2*d)/a);				
		}
		for(int i = 1 ; i < n ; i++)	T[i] = max(T[i],T[i-1]);
		for(int i = 0 ; i < n ; i++)	printf("%LF\n",T[i]);		
	}
	return 0;
}
