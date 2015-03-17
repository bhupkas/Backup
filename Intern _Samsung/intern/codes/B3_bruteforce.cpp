/* bhupkas */

#include "iostream"
#include "string.h"
#include "stdio.h"
#include "string"

using namespace std;

#define FOR(i,a,b)	for(i=a;i<b;i++)

#define MOD			1009


string str;
int l;

bool check(string str)	{
	int i;
	FOR(i,0,l-1)	{
		if(str[i]==str[i+1])	return false;
	}
	return true;
}

int main()	{
	int i,ans=0,j,k,o,m;
	cin>>str;
	l=(int)str.size();
	if(l == 1)		ans = str[0]-'a'+1;
	string str1;
	if(l == 2)	{
		for(i=0;i<26;i++)	{
			for(j=0;j<26;j++)	{
				str1.clear();
				str1.push_back(i+'a');
				str1.push_back(j+'a');
				if(str1 <= str && check(str1))	ans = (ans + 1)%MOD;
			}
		}
	}
	if(l == 3)	{
		for(i=0;i<26;i++)	{
			for(j=0;j<26;j++)	{
				for(k=0;k<26;k++)	{
					str1.clear();
					str1.push_back(i+'a');
					str1.push_back(j+'a');
					str1.push_back(k+'a');
					if(str1 <= str && check(str1))	ans = (ans + 1)%MOD;
				}
			}
		}
	}
	if(l == 4)	{
		for(i=0;i<26;i++)	{
			for(j=0;j<26;j++)	{
				for(k=0;k<26;k++)	{
					for(o=0;o<26;o++)	{
						str1.clear();
						str1.push_back(i+'a');
						str1.push_back(j+'a');
						str1.push_back(k+'a');
						str1.push_back(o+'a');
						if(str1 <= str && check(str1))	ans = (ans + 1)%MOD;
					}
				}
			}
		}
	}
	if(l == 5)	{
		for(i=0;i<26;i++)	{
			for(j=0;j<26;j++)	{
				for(k=0;k<26;k++)	{
					for(o=0;o<26;o++)	{
						for(m=0;m<26;m++)	{
							str1.clear();
							str1.push_back(i+'a');
							str1.push_back(j+'a');
							str1.push_back(k+'a');
							str1.push_back(o+'a');
							str1.push_back(m+'a');
							if(str1 <= str && check(str1))	ans = (ans + 1)%MOD;
						}
					}
				}
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}