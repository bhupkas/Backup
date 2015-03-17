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
void pre()	
	{

	}
int main()
	{
		int n,i,j,co=0;
		string str;
		pre();
		char S[100];
		cin>>S;
		if(S[0]!='-')
				{
					cout<<S<<endl;	return 0;
				}
		else
				{
					if(strlen(S)==3)	
					{
						if(S[2]=='0')	{cout<<"0"<<endl;	return 0;}
						else
							{
								cout<<"-";
								cout<<min(S[1]-'0',S[2]-'0')<<endl;
							}
					}
					else	
						{
							for(i=0;i<strlen(S)-2;i++)
								{
									cout<<S[i];
								}
							cout<<min(S[strlen(S)-1]-'0',S[strlen(S)-2]-'0');
							cout<<endl;
						}
				}
		return 0;
	}