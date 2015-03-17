/* bhupkas */

#include "iostream"
#include "stdio.h"
#include "vector"
#include "algorithm"
#include "string.h"
#include "string"
#include "stdlib.h"

using namespace std;


vector<char> B[100005];

bool flag;
int si;
vector<bool> v;
int fun(int idx)
	{
		if(idx>=si-2)	{flag=true;	return si+1;}
		B[idx].push_back('<');
		if(v[idx+1])	
			{
				int o;
				o=fun(idx+1);
				B[o].push_back(',');
				if(v[o+1])
					{
						int o1;
						o1=fun(o+1);
						B[o1].push_back('>');
						return o1;
					}
				else
					{
						B[o+1].push_back('>');
						return o+1;
					}
			}
		else			
			{
				B[idx+1].push_back(',');
				if(v[idx+2])
					{
						int o;
						o=fun(idx+2);
						B[o].push_back('>');
						return o;
					}
				else
					{
						B[idx+2].push_back('>');
						return idx+2;
					}
			}

	}
int main()
	{
		int j,n,i;
		flag=false;
		char S[1000000];
		cin>>n;
		getchar();
		gets(S);
		int s1=strlen(S);
		i=0;
		while(i<s1)	
			{
				if(S[i]=='p')	{v.push_back(true);	i+=5;}
				else			{v.push_back(false);		i+=4;}
			}
		si=v.size();
		if(n==1 && v.size()==1)	{cout<<"int"<<endl;	return 0;}
		if(n==1 && v.size()!=1)	{cout<<"Error occurred"<<endl;	return 0;}
		int k=fun(0);
		if(k==si-1)	
			{
				for(i=0;i<si;i++)
					{
						if(v[i])	cout<<"pair";
						else		cout<<"int";
						for(int j=0;j<B[i].size();j++)	cout<< B[i][j];
					}
				cout<<endl;
			}
		else
			{
				cout<<"Error occurred"<<endl;
			}
		return 0;
	}