/*	bhupkas */

#include"stdio.h"
#include"iostream"
#include"algorithm"
#include"vector"
#include"string.h"
#include"string"
#include"math.h"
#include"deque"
#include"map"
using namespace std;
#define FOR(i,a,b)	for(i=a;i<b;i++)
bool che(char C[])
	{
		int i,si=strlen(C);
		int F[30];
		FOR(i,0,30)	F[i]=0;
		FOR(i,0,si)
			{
				F[C[i]-'a']++;
			}
		int co=0;
		FOR(i,0,26)
			{
				if(F[i]&1)	co++;
			}
		if(co==1 || co==0)	return true;
	}
int main()
	{
		int n,t,i,j,si;	
		char C[1005];
		scanf("%s",C);
		si=strlen(C);
		int F[30];
		FOR(i,0,30)	F[i]=0;
		FOR(i,0,si)
			{
				F[C[i]-'a']++;
			}
		if(che(C))	{cout<<"First"<<endl;	return 0;}
		if((si-1)&1)	cout<<"Second"<<endl;
		else			cout<<"First"<<endl;
		return 0;	
	}