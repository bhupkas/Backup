#include"stdio.h"
#include"iostream"
#include"string"
#include"string.h"
#include"algorithm"
using namespace std;
typedef long long int LL;
bool pali(string str)
	{
		if(str.length()==0)	return true;
		LL i;
		for(i=0;i<(str.length());i++)
		{
			if(str[i]!=str[str.length()-i-1])	return false;
		}
		return true;
	}
int main()
	{
		string str1,str2;
		LL t,i,j,count;
		cin>>t;
		getchar();
		while(t--)
			{
				count=0;
				cin>>str1;
				for(i=0;i<(1<<str1.length());i++)
				{
					str2="";
					for(j=0;j<str1.length();j++)
					{
						if(i & 1<<j)
						{
							str2.push_back(str1[j]);
						}
					}
						cout<<str2<<endl;
					if(!pali(str2))	count++;	
				}

				cout<<count<<endl;
			}
		return 	0;
	}