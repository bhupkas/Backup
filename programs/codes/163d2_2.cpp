#include"stdio.h"
#include"map"
#include"algorithm"
#include"set"
#include"string"
#include"string.h"
#include"math.h"
#include"vector"
#include"deque"
using namespace std;
#define FOR(i,a,b)	for(i=a;i<b;i++)
#define S(n)	scanf("%d",&n);
#define P(n)	printf("%d",n);
int main()
	{
		int t,n,j,i,temp;
		bool f;
		S(n);S(t);
		char S[55];
		getchar();
		scanf("%s",S);
		char S1[55];
		FOR(i,0,t)
			{
				FOR(j,0,n-1)
					{
						f=false;
						if(S[j]=='B'&&S[j+1]=='G')	
							{if(j+1==n-1)	f=true;	S1[j]='G';	S1[j+1]='B';j++;}
						else
							S1[j]=S[j];
					}
				if(f==false)	S1[n-1]=S[n-1];	
				FOR(j,0,n)
					S[j]=S1[j];
			}
			S1[n]='\0';
		printf("%s\n",S1);
		return 0;
	}