/* bhupkas */

#include"stdio.h"
#include"iostream"
#include"vector"
#include"map"

using namespace std;

#define S(n)	scanf("%d",&n);
#define FOR(i,a,b)	for(i=a;i<b;i++)

int main()	
	{
		int n,i,j,te;
		S(n);
		map<int,int> mymap;
		vector<int> v1 (n);
		vector<int> v2 (n);
		FOR(i,0,n)
			S(v1[i]);
		FOR(i,0,n)
			{
				S(te);
				mymap[te]=i+1;
			}
		FOR(i,0,n)
			v2[i]=mymap[v1[i]];
		te=0;
		int ans;
		FOR(i,1,n)
			{
				if(v2[i]<v2[i-1])	break;
			}
		cout<<n-i<<endl;
		return 0;
	}