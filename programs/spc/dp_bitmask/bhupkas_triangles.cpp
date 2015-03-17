/* bhupkas maximal triangles */
#include"iostream"
#include"stdio.h"
#include"algorithm"
#include"vector"
#include"math.h"
#include "assert.h"
using namespace std;
double A[1<<15 +10];
int main()
	{
	int a,b,c,t,n,i,j,l,k,te,traverse,te1,te2,te3;
	vector<int> v;
	vector<int> v1;
	double ar;
	double s;
	cin>>t;
	assert(t<=5);
	while(t--)
		{
		cin>>n;
		assert(n<=15);
		v.clear();
		for(i=0;i<(1<<n);i++)	A[i]=(double)(0.0);
		for(i=0;i<n;i++)
			{
			cin>>te;
			assert(te<=1000 && te>=0);
			v.push_back(te);
			}
		traverse=1<<n;
		for(i=0;i<traverse;i++)						
			{
			for(a=0;a<n;a++)					
				{
				for(b=a+1;b<n;b++)
					{
					for(c=b+1;c<n;c++)	
						{
						if((i & 1<<a) && (i & 1<<b) && (i & 1<<c))
							{
							v1.clear();
							v1.push_back(v[a]);v1.push_back(v[b]);v1.push_back(v[c]);
							sort(v1.begin(),v1.end());
							if (v1[0] + v1[1] > v1[2])
							{
							 	s=(v1[0]+v1[1] +v1[2]) / 2.0;
								ar=sqrt((s*(s - v1[0]) * (s - v1[1]) * (s - v1[2])));
								A[i] = max (A[i] , A[(i-(1 << a)-(1 << b)-(1 << c))] + ar);
							}
							}
						}
					}
				}
			}
		printf("%0.6lf\n",A[(traverse) - 1]);
		}
	return 0;
	}
