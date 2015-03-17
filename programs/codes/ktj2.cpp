#include <iostream>
#include <cstring>
#include <map>
#include <vector>
#include <cmath>
#include <list>
#include <algorithm>
#include <cstring>
#include <cstdio>
#include <set>

using namespace std;

#define FOR(i,n) for(int i=0;i<n;i++)
#define DFOR(i,n) for(int i=n;i>=0;i--)
#define REP(i,a,b) for(int i=a;i<=b;i++)
#define S(n) scanf("%d",&n)
#define SLL(n) scanf("%lld",&n)
#define SD(n) scanf("%lf",&n)
#define SS(n) scanf("%s",n)
#define P(n) printf("%d\n",n)
#define PLL(n) printf("%lld\n",n)
#define PD(n) printf("%lf\n",n)
#define PS(n) printf("%s\n",n)
#define eps 1e-9
#define inf 1e9
#define PB push_back
#define PF push_front

typedef long long LL;
typedef vector <int> VI;
typedef vector <LL> VLL;
typedef vector <double> VD;
typedef vector <string> VS;
typedef list <int> LI;
typedef list <LL> LLL;
typedef list <string> LS;
typedef list <double> LD;

#define BUF 4096 // block size on my disk is 4KBs
char ibuf[BUF];
LL ipt = BUF;
LL read() {
while (ipt < BUF && ibuf[ipt] < '0') ipt++;
if (ipt == BUF) {
    fread(ibuf, 1, BUF, stdin);
    ipt = 0;
    while (ipt < BUF && ibuf[ipt] < '0') ipt++;
}
LL n = 0;
while (ipt < BUF && ibuf[ipt] >= '0') n = (n*10)+(ibuf[ipt++]-'0');
if (ipt == BUF) {
    fread(ibuf, 1, BUF, stdin);
    ipt = 0;
    while (ipt < BUF && ibuf[ipt] >= '0') n = (n*10)+(ibuf[ipt++]-'0');
}
return n;
}

int main()
	{
		char S[100005];
		LL t,i,len;
		scanf("%lld",&t);
		getchar();
		while(t--)
		{
			scanf("%s",S);
			len=strlen(S);
			for(i=0;i<len-1;i++)
				{
					if((S[i]-'0')<(S[i+1]-'0'))	break;
				}
			if(i==len-1)	
			{
				printf("-1\n");
				continue;
			}
			for(i=len-1;i>0;i--)
			{
				if((S[i]-'0')>(S[i-1]-'0'))	break;
			}
			swap(S[i],S[i-1]);
			printf("%s\n",S);
		}
		return 0;
	}