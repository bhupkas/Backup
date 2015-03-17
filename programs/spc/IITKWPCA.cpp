/* bhupkas */

#include "iostream"
#include "stdio.h"
#include "set"
#include "string.h"
#include "string"
#include "assert.h"
#include "vector"

using namespace std;

#define FOR(i,a,b)			for(i=a;i<b;i++)
#define PB					push_back
#define I 					insert

int main()
	{
		int t,i,len;
		set<string> ss;
		string str,str1;
		scanf("%d\n",&t);		
		assert(t<=100);
		vector<string> v;
		while(t--)
			{
				v.clear();
				ss.clear();
				getline (cin, str);
				len=(int)str.size();
				assert(len>=1 && len<=10000);
				FOR(i,0,len)			assert((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z') || str[i]==' ');
				str1="";
				FOR(i,0,len)
					{
						if(str[i]==' ')
							{
								if(str1.size()!=0)	ss.I(str1);					//Current String
								str1="";									//Breaking condition
							}
						else	str1+=str[i];							//Continue with the current string
					}	
				//FOR last case
				if(str1.size()!=0)	ss.I(str1);
				cout<<ss.size()<<endl;
			}
		return 0;
	}
