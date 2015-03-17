#include"iostream"
#include"stdio.h"
#include"vector"
#include"algorithm"
#include"set"
#include"map"
#include"math.h"
#include"string.h"
#include"string"
#include"stdlib.h"
using namespace std;
#define FOR(i,a,b)	for(i=a;i<b;i++)
typedef long long int LL;
int main()
	{
	int i,n;
	char S[12][105];
	cin>>n;
	getchar();
	for(i=0;i<n;i++)
		gets(S[i]);
	for(i=0;i<n;i++);	
		//cout<<S[i]<<endl;
	for(i=0;i<n;i++)
		{
			if(strlen(S[i])<5)	{cout<<"OMG>.< I don't know!"<<endl;	continue;}
			int len=strlen(S[i]);
			if((S[i][len-1]=='.' && S[i][len-2]=='a' && S[i][len-3]=='l' && S[i][len-4]=='a' && S[i][len-5]=='l')  &&(!(S[i][4]=='.' && S[i][0]=='m' && S[i][1]=='i' && S[i][2]=='a'&&S[i][3]=='o')) )	{cout<<"Freda's"<<endl;	continue;}
			else if((S[i][0]=='m' && S[i][1]=='i' && S[i][2]=='a'&&S[i][3]=='o' && S[i][4]=='.') && !(S[i][len-1]=='.' && S[i][len-2]=='a' && S[i][len-3]=='l' && S[i][len-4]=='a' && S[i][len-5]=='l'))	{cout<<"Rainbow's"<<endl;	continue;}
			else 	{cout<<"OMG>.< I don't know!"<<endl;	continue;}
		}
	return 0;
	}
