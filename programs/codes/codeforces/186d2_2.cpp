#include"iostream"
#include"stdio.h"
#include"vector"
#include"algorithm"
#include"set"
#include"map"
#include"math.h"
#include"string.h"
#include"string"
#include"stdlib.h"
using namespace std;
#define FOR(i,a,b)	for(i=a;i<b;i++)
typedef long long int LL;
void pre()	
	{

	}
pair<int,int> A[100005];
int B[100005];
int main()
	{
		int n,i,j,m,co=0;
		string str;
		pre();
		char S[100005];
		scanf("%s",S);
		n=strlen(S);
		for(i=0;i<n;i++)	B[i]=0;
		for(i=1;i<n;i++)
			{
				if(S[i]=='.'&& S[i-1]=='.')	B[i]++;
				if(S[i]=='#' && S[i-1]=='#')	B[i]++;
			}
		for(i=1;i<n;i++)
			{
				B[i]+=B[i-1];
			}
		cin>>m;
		int l,r;
		while(m--)
			{
				cin>>l>>r;
				l--;
				r--;
				if(l==0)	cout<<B[r]<<endl;
				else		cout<<B[r]-B[l]<<endl;
			}
		return 0;
	}