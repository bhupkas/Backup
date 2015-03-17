#include"stdio.h"
#include"iostream"
#include"vector"
#include"algorithm"
#include"string"
using namespace std;
typedef long long LL;
string con(LL a)
	{
		string str;
		while(a)
		{
			str.push_back(a%2 + '0');
			a>>=1;
		}
		reverse(str.begin(),str.end());
	return str;
	}
int main()
	{
		LL i,a,b;
		string str1,str2;
		cin>>a>>b;
		str1=con(a);str2=con(b);
		LL ans;
		if(str1.size()!=str2.size())
			{
				ans=((LL)1<<(str2.size())) -1 ;
			}
		else
			{
				i=0;
				ans=0;
				while(i!=str1.size() && str1[i]==str2[i])
				{
					i++;
				}
				ans = ((LL)1<<(str1.size() - i ))-1;
			}
		cout<<ans<<endl;
		return 0;
	}