#include<cstdio>
#include<cstring>
#include<vector>
#define mod 100000007
typedef long long int ll;
using namespace std;
int main()
	{
	ll t,i,len,num,ans;
	char S[100002];
	scanf("%lld",&t);
	vector<ll> v;
	vector<ll>::iterator it;
	getchar();
	while(t--)
		{
		ans=1;
		v.clear();
		gets(S);
		len=strlen(S);
		if(len==0)	{printf("0\n");	continue;}
		for(i=0;i<len;i++)
			{
			if(S[i]=='a')		{v.push_back(2);}
			else if(S[i]=='b')	{v.push_back(2);v.push_back(2);}
			else if(S[i]=='c')	{v.push_back(2);v.push_back(2);v.push_back(2);}
			else if(S[i]=='d')	{v.push_back(3);}
			else if(S[i]=='e')	{v.push_back(3);v.push_back(3);}
			else if(S[i]=='f')	{v.push_back(3);v.push_back(3);v.push_back(3);}
			else if(S[i]=='g')	{v.push_back(4);}
			else if(S[i]=='h')	{v.push_back(4);v.push_back(4);}
			else if(S[i]=='i')	{v.push_back(4);v.push_back(4);v.push_back(4);}
			else if(S[i]=='j')	{v.push_back(5);}
			else if(S[i]=='k')	{v.push_back(5);v.push_back(5);}
			else if(S[i]=='l')	{v.push_back(5);v.push_back(5);v.push_back(5);}
			else if(S[i]=='m')	{v.push_back(6);}
			else if(S[i]=='n')	{v.push_back(6);v.push_back(6);}
			else if(S[i]=='o')	{v.push_back(6);v.push_back(6);v.push_back(6);}
			else if(S[i]=='p')	{v.push_back(7);}
			else if(S[i]=='q')	{v.push_back(7);v.push_back(7);}
			else if(S[i]=='r')	{v.push_back(7);v.push_back(7);v.push_back(7);}
			else if(S[i]=='s')	{v.push_back(7);v.push_back(7);v.push_back(7);v.push_back(7);}
			else if(S[i]=='t')	{v.push_back(8);}
			else if(S[i]=='u')	{v.push_back(8);v.push_back(8);}
			else if(S[i]=='v')	{v.push_back(8);v.push_back(8);v.push_back(8);}
			else if(S[i]=='w')	{v.push_back(9);}
			else if(S[i]=='x')	{v.push_back(9);v.push_back(9);}
			else if(S[i]=='y')	{v.push_back(9);v.push_back(9);v.push_back(9);}		
			else if(S[i]=='z')	{v.push_back(9);v.push_back(9);v.push_back(9);v.push_back(9);}
			}
		for(i=1;i<v.size();i++)
			if(v.at(i)==v.at(i-1))	ans=ans*2%mod;
		printf("%lld\n",(ans+mod)%mod);
		}
	return 0;
	}