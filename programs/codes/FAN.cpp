#include"iostream"
#include"stdio.h"
#include"string.h"
#include"string"
using namespace std;
int main()
	{
		int t;
		char S[1005];
		cin>>t;
		int ans=0,curr;
		getchar();
		int len;
		int i;
		while(t--)
		{
			ans=0;
			curr='0';
			scanf("%s",S);
			len=strlen(S);
			for(i=0;i<len;i++)
			{
				if(S[i]!=curr)	{ans++;	
					if(curr=='0')	curr='1';	else	curr='0';}
			}
			cout<<ans<<endl;
		}
	return 0;
	}