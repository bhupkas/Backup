/*	bhupkas */

#include"stdio.h"
#include"iostream"
#include"algorithm"
#include"vector"
#include"string.h"
#include"string"
#include"math.h"
#include"deque"
#include"map"
using namespace std;
#define FOR(i,a,b)	for(i=a;i<b;i++)
bool f(int a,int b)
	{
		return a>b;
	}
int main()
	{
		vector<int> v;
		int T[10005],F[10005];
		int n,t,i,j,k;
		cin>>n>>k;
		FOR(i,0,n)
			{
				cin>>F[i]>>T[i];
			}		
		FOR(i,0,n)
			{
				if(T[i]>k)	v.push_back(F[i]-T[i]+k);
				else		v.push_back(F[i]);
			}
		sort(v.begin(),v.end(),f);
		cout<<v[0]<<endl;
		return 0;
	}