#include"stdio.h"
#include"algorithm"
#include"set"
#include"math.h"
#include"map"
#include"string.h"
#include"string"
#include"vector"
#include"iostream"
using namespace std;
typedef long long int LL;
#define FOR(i,a,b)	for(i=a;i<b;i++)
#define S(n)	scanf("%d",&n)
#define P(n)	printf("%d\n",n );
#define SLL(n)	scanf("%lld\n",&n);
#define PLL(n)	printf("%lld\n",n);
int main()
	{
		char S[250];
		int t;
		S(t);
		getchar();
		int C[60],i,si,msi,temp;
		LL ans=0; 
		map<char,int> m;
		map<char,int>::iterator it;	
		while(t--)
			{
				m.clear();
				ans=0;
				scanf("%s",S);
				si=strlen(S);
				FOR(i,0,si)				m[S[i]]++;
				msi=(int)m.size();
				for(it=m.begin();it!=m.end();it++)
					{
						temp=m[(*it).first];
						ans+=(temp/2 +temp%2);
					}
				PLL(ans);
			}
		return 0;
	}