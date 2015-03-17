/* bhupkas */

#include "iostream"
#include "stdio.h"
#include "vector"
#include "algorithm"
#include "set"
#include "map"
#include "string.h"
#include "string"
#include "math.h"

using namespace std;

typedef long long LL;

#define FOR(i,a,b)	for(i=a;i<b;i++)
#define PB	push_back
#define I 	insert
#define vi	vector<int>
#define vll	vector<LL>

void pre()
	{

	}
LL P(LL n,LL r)
	{
		if(r==0)	return 1;
		LL re=1;
		int i;
		FOR(i,1,r+1)
			re = re*(n-r+i);
		return re;
	}

int main()
	{
		pre();
		int i,te,j,k,n,m;
		string str;
		char S[100005];
		scanf("%s",S);
		LL ans=1;
		int si=strlen(S);
		if(si==1)
			{
				if(S[0]=='?')	{cout<<9<<endl;	return 0;}
				if(S[0]<=9+'0' && S[0]>=0+'0')	{cout<<1<<endl;	return 0;}
				else	{cout<<9<<endl;	return 0;};
			}	
		else
			{
				int cnt=0;
				int C[26];
				FOR(i,0,26)	C[i]=0;
				int ques=0;
				FOR(i,0,si)
					{
						if(S[i]-'A'>=0 && S[i]-'A'<=10)	C[S[i]-'A']++;
						else if(S[i]=='?')	ques++;
					}
				int co=0;
				FOR(i,0,26)	if(C[i]!=0)	co++;	
				if(S[0]=='?')
					{
						ans=9;
						ques--;
						FOR(i,0,co)
							ans = ans * (10-i);
					}
				else if(S[0]-'A'>=0 && S[0]-'A'<=12)
					{
						ans=1;
						ans*=9;
						FOR(i,1,co)
							ans=ans*(10-i);
					}
				else
					{
						ans=1;
						FOR(i,0,co)	ans = ans * (10-i);
					}
				cout<<ans;
				FOR(i,0,ques)	cout<<0;
				cout<<endl;
			}
		return 0;
	}