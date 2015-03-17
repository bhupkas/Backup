/* bhupkas */

#include "iostream"
#include "stdio.h"
#include "map"
#include "set"
#include "algorithm"
#include "math.h"
#include "string.h"
#include "string"
#include "deque"
#include "vector"

using namespace std;

typedef long long LL;

#define FOR(i,a,b)	for(i=a;i<b;i++)
#define PB	push_back
#define I 	insert
#define s 	size
#define vi vector<int>
#define vll	vector<LL>
#define MP 	make_pair
#define PP   pair<int,int>

void pre()
	{

	}

int main()
	{
		pre();
		LL co=0,ans=0,cnt=0,i,j,k,n,m;
		string str,str1,str2;
		//cin>>n;
		vi v1,v2 ;
		//FOR(i,0,n)	cin>>v[i];
		cin>>str;
		str1="heavy";
		str2="metal";
		for(i=0;i<str.s();i++)
			{
				if(str[i]=='h')
					{
						for(j=0;j<str.s() && j<str1.s();j++)
							if(str[i+j]!=str1[j])	break;
						if(j==str1.s())	v1.PB(i);
					}
				if(str[i]=='m')
					{
						for(j=0;j<str.s() && j<str2.s();j++)
							if(str[i+j]!=str2[j])	break;
						if(j==str2.s())	v2.PB(i);
					}
			}
		sort(v1.begin(),v1.end());
		sort(v2.begin(),v2.end());
		j=0;
		for(i=0;i<v1.s();i++)
			{
				while(j<v2.s() && v2[j]<v1[i] )	j++;
				ans+=v2.s()-j;
			}
		cout<<ans<<endl;
		return 0;
	}