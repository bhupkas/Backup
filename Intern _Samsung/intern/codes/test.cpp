#include "iostream"
#include "algorithm"
#include "vector"
using namespace std;
int A[10][10];
int B[10][10];
bool imp[10][10];
bool check(int x,int y)	{
	return (x>=0 && y>=0 && x<n && y<m);
}

int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};

int count()	{
	int i,j,k,xk,yk,xk1,yk1,l;
	int ans=1;
	for(int i=0;i<n;i++)	for(int j=0;j<m;j++)	imp[i][j]=false;
	imp[0][0]=true;
	for(i=1;i<n;i++)	{
		for(j=0;j<m;j++)	{
			for(k=0;k<4;k++)	{
				xk=x+dx[k];
				yk=y+dy[y];
				if(check(xk,yk) && imp[xk][yk])	break;
			}
			if(k!=4)	{
				for(l=0;l<4;l++)	{
					xk1=xk+dx[l];
					yk1=yk+dy[l];
					if(check(xk1,yk1))	if()
				}
			}
		}
	}
}