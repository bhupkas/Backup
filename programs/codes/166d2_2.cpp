#include"stdio.h"
#include"iostream"
#include"vector"
#include"algorithm"
#include"map"
#include"set"
#include"string.h"
#include"string"
#include"math.h"
using namespace std;
#define FOR(i,a,b)	for(i=a;i<b;i++)
#define S(n)	scanf("%d",&n);
#define P(n)	printf("%d\n",n);
int n;
int m;
bool P[10000000];
int M[550][550];
bool check(int wic,int i)
	{
		int j;
		if(wic==0)
		{
			for(j=0;j<m;j++)	{if(!P[M[i][j]])	break;}
			if(j==m)	return true;
			else		return false;
		}
		else
		{
			for(j=0;j<n;j++)	{if(!P[M[j][i]])	break;}
			if(j==n)	return true;
			else 		return false;
		}
	}
int main()
	{
		int i,t;
		FOR(i,0,10000000)	P[i]=true;
		P[0]=P[1]=false;
		int j;
		for(i=2;i*i < 10000000 ;i++)
		{
			for(j=i;j<=10000000/i;j++)
				P[i*j]=false;
		}
		S(n);S(m);
		for(i=0;i<n;i++)
			{
				for(j=0;j<m;j++)
					{
						S(M[i][j]);
					}
			}
		int min=1e9;
		for(i=0;i<n;i++)
			{
				if(check(0,i))	{cout<<"0"<<endl;	return 0;}
			}
		for(j=0;j<m;j++)
		{
			if(check(1,j))		{cout<<"0"<<endl;	return 0;}
		}
		int count,k;
		for(i=0;i<n;i++)
		{
			count=0;
			for(j=0;j<m;j++)
			{
				k=M[i][j];
				while(!P[k])
				{
					k++;
					count++;
				}
			}
			if(count<min)	min=count;
		}
		for(i=0;i<m;i++)
		{
			count=0;
			for(j=0;j<n;j++)
			{
				k=M[j][i];
				while(!P[k])
				{
					k++;
					count++;
				}
			}
			if(count<min)	min=count;
		}
		cout<<min<<endl;
		return 0;
	}