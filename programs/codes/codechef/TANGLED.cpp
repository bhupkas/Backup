/* bhupkas */

#include "iostream"
#include "stdio.h"
#include "string.h"
#include "string"
#include "map"
#include "set"

using namespace std;

#define FOR(i,a,b)		for(i=a;i<b;i++)
#define PB			push_back

char S1[200005],S2[200005];
int l1,l2;

int fun(int num)
	{
		int i,j,re=0;
		string str1,str2,str;
		FOR(i,0,l1)	str1.PB(S1[i]);
		str1[l1]='\0';
		FOR(i,0,l2)	str2.PB(S2[i]);
		str2[l2]='\0';
		map<string,int> mymap1,mymap2; 
		set<string> ss;
		FOR(i,0,l1-num)
			{
				for(j,
			}
	}

int main()
	{
		int t,i,j,l,ans=0,te;
		cin>>t;
		while(t--)	
			{
				ans=0;
				getchar();
				scanf("%s",S1);
				scanf("%s",S2);
				cin>>l;
				l1=strlen(S1);
				l2=strlen(S2);
				FOR(i,1,l+1)
					ans+=fun(i);
				
			}
		return 0;
	}
