/* bhupkas tourist_translation MARCH '13 ,implementation */
#include"iostream"
#include"stdio.h"
#include"string.h"
#include"string"
using namespace std;
int main()
	{
		int t,i,j;
		char A[30];
		char S[104];
		int B[30],l;
		cin>>t;
		getchar();
		scanf("%s",A);
		for(i=0;i<26;i++)
			B[i]=A[i]-'a';
		while(t--)
			{
			scanf("%s",S);		
			l=strlen(S);
			for(i=0;i<l;i++)
				{
				if(S[i]-'a' < 26 && S[i]-'a' >=0)	cout<<(char)(B[S[i]-'a']+'a');
				else if(S[i]-'A' < 26 && S[i]-'A' >=0)	cout<<(char)(B[S[i]-'A']+'A');
				else if(S[i]=='_')	cout<<" ";
				else cout<<S[i];
				}
			cout<<endl;
			}
		return 0;
	}
