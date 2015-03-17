#include"stdio.h"
#include"iostream"
#include"vector"
#include"algorithm"
#include"map"
#include"set"
#include"string.h"
#include"string"
#include"math.h"
using namespace std;
#define FOR(i,a,b)	for(i=a;i<b;i++)
#define S(n)	scanf("%d",&n);
#define P(n)	printf("%d\n",n);
bool f(int a,int b)
	{
		return a<b;
	}
int main()
	{
		long long  A[100005];
		long long  n,k,co=0,temp;
		cin>>n>>k;
		map<long long ,bool> mymap;
		long long  num,i,j;
		co=n;
		FOR(i,0,n)
			{
				cin>>A[i];
				mymap[A[i]]=true;
			}
		sort(A,A+n,f);
		FOR(i,0,n)
			{
				temp=1;
				num=A[i];
				if(mymap[num])
				{
					mymap[num]=false;
					while(num<1e10 && mymap[num*k]==true)
						{
							temp++;
							num=num*k;
							mymap[num]=false;
						}
				co=co-temp/2;
				}
			}
		cout<<co<<endl;
		return 0;
	}