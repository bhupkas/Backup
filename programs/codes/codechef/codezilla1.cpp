#include"iostream"
#include"stdio.h"
#include"string.h"
#include"algorithm"
#include"string"
#include"vector"
#include"map"
#include"set"
#include"math.h"
using namespace std;
#define FOR(i,a,b)	for(i=a;i<b;i++)
typedef long long LL;
void pre()
	{
	}
int main()
	{
	int ans1,ans2,l1,l2,P[30],i,j,k,t,Co1[30],Co2[30],temp;
	char str[102],str1[102],str2[102];
	bool A[30],B[30];
	FOR(i,0,30)	P[i]=0;
	pre();
	cin>>t;
	getchar();
	scanf("%s",str);
	FOR(i,0,26)
		P[str[i]-'a']=i;
	while(t--)
		{
		ans1=ans2=0;
		getchar();
		scanf("%s",str1);
		getchar();
		scanf("%s",str2);
		FOR(i,0,26)	{A[i]=B[i]=false;}
		l1=strlen(str1);l2=strlen(str2);
		FOR(i,0,30)	Co1[i]=Co2[i]=0;
		FOR(i,0,l1)	Co1[str1[i]-'a']++;
		FOR(i,0,l2)	Co2[str2[i]-'a']++;
		FOR(i,0,26)	if(Co1[i] && Co2[i])	{temp=min(Co1[i],Co2[i]);	Co1[i]-=temp;	Co2[i]-=temp;}
		FOR(i,0,26)	if(Co1[i])	{	ans1+=P[i];}
		FOR(i,0,26)	if(Co2[i])	{	ans2+=P[i];}
		if(ans1==ans2)	{cout<<"TIE"<<endl;	continue;}
		if(ans1>ans2)	{cout<<"ALICE"<<endl;	continue;}
		if(ans1<ans2)	{cout<<"BOB"<<endl;	continue;}
		}
	return 0;
	}
