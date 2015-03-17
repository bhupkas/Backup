/* bhupkas */

#include "iostream"
#include "stdio.h"
#include "string.h"
#include "string"

using namespace std;

#define FOR(i,a,b)		for(i=a;i<b;i++)
#define MOD				1009

char S[105];
int l;

int po(int a,int b)	{
	int ans = 1;
	while(b)	{
		if(b&1)	ans=(ans*a)%MOD;
		a=(a*a)%MOD;
		b>>=1;
	}
	return ans;
}

bool foo;

int fun()	{
	foo=false;
	int ans = 0,cnt;
	ans = ((S[0] - 'a')*po(25,l-1))%MOD; 
	int i;
	for(i=1; i<l; i++)	{
		cnt = S[i]-'a';
		if(S[i]>S[i-1])	cnt--;
		ans = (ans + (cnt * po(25,l-i-1))%MOD)%MOD; 	
		if(S[i]==S[i-1])	break;
	}
	if(i==l)	foo=true;
	return ans;
}

int main()	{
	int i,j,k,ans=0;
	scanf("%s",S);
	l=strlen(S);
	if(l == 1)		cout<<S[0]-'a'+1<<endl;
	else	{
		ans=fun();
		ans = ans + (int)((S[l-1]!=S[l-2]) && foo);
		cout<<ans<<endl;
	}
	return 0;
}