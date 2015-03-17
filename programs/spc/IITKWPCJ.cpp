/* bhupkas */

#include "iostream"
#include "stdio.h"
#include "algorithm"
#include "string.h"
#include "string"

using namespace std;

#define FOR(i,a,b)		for(i=a;i<b;i++)
#define PB				push_back

int gcd(int a, int b) 
	{
		while(b) 
			b ^= a ^= b ^= a %= b;
		return a;
	}

int main()
	{
		int l1,l2,t,i,j,gc;
		char S1[100005],S2[100005];
		string str1,str2,str3,str4;
		cin>>t;
		bool flag;
		while(t--)
			{
				str1.clear();
				str2.clear();
				str3.clear();
				str4.clear();
				getchar();
				scanf("%s",S1);
				scanf("%s",S2);
				l1=strlen(S1);
				l2=strlen(S2);
				gc=gcd(l1,l2);
				FOR(i,0,min(l1,l2))
					if(S1[i]!=S2[i])	break;
				if(i!=min(l1,l2))	
					{
						cout<<"NO"<<endl;
						continue;
					}
				FOR(i,0,l1)	str1.PB(S1[i]);
				FOR(i,0,l2)	str2.PB(S2[i]);
				FOR(i,0,gc)	{str3.PB(S1[i]);	str4.PB(S1[i]);}
				FOR(j,0,(max(l1,l2)/gc)-1)	str3.append(str4);
				if(l1<l2)
					{
						if(str2.compare(str3)!=0)	{cout<<"NO"<<endl;	continue;}
					}
				else
					{
						if(str1.compare(str3)!=0)	{cout<<"NO"<<endl;	continue;}	
					}
				cout<<"YES"<<endl;
			}
		return 0;
	}