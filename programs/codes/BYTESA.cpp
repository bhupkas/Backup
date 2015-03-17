#include"stdio.h"
#include"string.h"
#include"string"
#include"iostream"
using namespace std;
int main()
	{
		char S[60];
		int i,t,len;
		cin>>t;
		char S1[60];
		getchar();
		bool flag;
		while(t--)
			{
				flag=true;
				scanf("%s",S);
				len=strlen(S);
				for(i=0;i<len;i++)
					{
						if(S[i]=='2'|| S[i]=='3' || S[i]=='4'||S[i]=='5' || S[i]=='7')	{flag=false;	break;}
					}
				if(flag)
				{
					cout<<"YES"<<endl;
					for(i=len-1;i>=0;i--)
					{
						if(S[i]=='9')	S1[len-1-i]='6';
						if(S[i]=='8')	S1[len-1-i]='8';
						if(S[i]=='6')	S1[len-1-i]='9';
						if(S[i]=='1')	S1[len-1-i]='1';
						if(S[i]=='0')	S1[len-1-i]='0';
					}
					for(i=0;i<len;i++)
						cout<<S1[i];
					cout<<endl;
				}
				else
					{
						cout<<"NO"<<endl;
					}
			}
		return 0;
	}