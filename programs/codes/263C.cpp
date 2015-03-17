#include"stdio.h"
#include"vector"
#include"map"
#include"set"
#include"string"
#include"string.h"
#include"math.h"
using namespace std;
#define S(n)	scanf("%d",&n);
#define FOR(i,a,b)	for(i=a;i<b;i++)
int main()
	{
		int n,i,j,t1,t2,t3;
		bool flag=false;
		vector<int> v[100005];
		vector<int> ans;
		v[0].push_back(0);
		S(n);
		FOR(i,0,2*n)
			{
				S(t1);S(t2);
				v[t1].push_back(t2);
			}
		FOR(i,1,n+1)
			if((int)v[i].size()!=2)	break;
		if(i!=n+1)	{printf("-1\n");	return 0;}
		ans.push_back(1);
		if(v[v[1][0]][0]==v[1][1]||v[v[1][0]][1]==v[1][1])
			{ans.push_back(v[1][0]);	ans.push_back(v[1][1]);	t1=v[1][0];	t2=v[1][1];}
		else	{ans.push_back(v[1][1]);	ans.push_back(v[1][0]);	t1=v[1][1];	t2=v[1][0];}
		FOR(i,0,n-3)
			{
				flag=false;
				if(v[t1][0]==v[t2][0])		{ans.push_back(v[t1][0]);	t3=t1;t1=t2;	t2=v[t3][0];	flag=true;}
				else if(v[t1][1]==v[t2][0])	{ans.push_back(v[t1][1]);	t3=t1;	t1=t2;	t2=v[t3][1];	flag=true;}
				else if(v[t1][0]==v[t2][1])	{ans.push_back(v[t1][0]);	t3=t1;	t1=t2;	t2=v[t3][0];	flag=true;}
				else if(v[t1][1]==v[t2][1])	{ans.push_back(v[t1][1]);	t3=t1;	t1=t2;	t2=v[t3][1];	flag=true;}
				if(!flag)	{printf("-1\n");	return 0;}	
			}
		FOR(i,0,n)
			printf("%d ",ans[i]);
		printf("\n");
		return 0;
	}