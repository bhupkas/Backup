#include"stdio.h"
#include"iostream"
#include"vector"
#include"algorithm"
#include"map"
#include"set"
#include"string.h"
#include"string"
#include"math.h"
#include"map"
using namespace std;
#define FOR(i,a,b)	for(i=a;i<b;i++)
#define S(n)	scanf("%d",&n);
#define P(n)	printf("%d\n",n);
typedef long long int LL;
LL MOD;
LL cou=0;
LL fact(LL a)
	{
		if(a==0||a==1)	return 1%MOD;
		if(cou!=0 && a%2==0)	{cou--;	return (a/2 * fact(a-1))%MOD;}
		return (a*fact(a-1))%MOD;
	}
LL fu(LL MO)
	{
		if(MO==-1 || MO==0)	return 1%MOD;
		LL re;
		re=(fu(MO/2)*fu(MO/2))%MOD;
		if(MO&1)	
		{
			return (re*2)%MOD;
		}
		else
		{
			return re%MOD;
		}
	}
int main()
	{
		LL n;
		cin>>n;
		LL i;
		LL A[100005],B[100005];
		map<LL,LL> m;
		map<LL,LL>::iterator it;
		FOR(i,0,n)
			{
				cin>>A[i];
			}
		FOR(i,0,n)	
			{
				cin>>B[i];
			}
		cin>>MOD;
		LL ans=1;
		LL inver=fu(MOD-2);
		FOR(i,0,n)
			{
				m[A[i]]++;
			}
		FOR(i,0,n)
			{
				m[B[i]]++;
				if(A[i]==B[i]) 
					{
						cou++;
					}
			}
		for(it=m.begin();it!=m.end();it++)
			{
				ans=(ans*fact((*it).second))%MOD;
			}
		cout<<(ans+MOD)%MOD<<endl;
		return 0;
	}