/* bhupkas */

#include"iostream"
#include"stdio.h"
#include"string.h"
#include"string"
#include"vector"

using namespace std;

int main()
	{
		char S1[100005],S2[100005];
		int i,j,k,co=0;
		vector<char> v1,v2;
		scanf("%s %s",S1,S2);
		if(strlen(S1)!=strlen(S2))
			{
				cout<<"NO"<<endl;
			}
		else
			{
				int si=strlen(S1);
				for(i=0;i<si;i++)
					{
						if(S1[i]!=S2[i])
							{
								v1.push_back(S1[i]);
								v2.push_back(S2[i]);
							}
					}
				if(v1.size()!=2)	{cout<<"NO"<<endl;	return 0;}
				if(v1[0]==v2[1] && v1[1]==v2[0])	{cout<<"YES"<<endl;	return 0;}
				else		{cout<<"NO"<<endl;	return 0;}
			}
		return 0;
	}