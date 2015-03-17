/* bhupkas */

#include "iostream"
#include "stdio.h"
#include "vector"
#include "algorithm"
#include "map"
#include "string"
#include "string.h"

using namespace std;

#define FOR(i,a,b)		for(i=a;i<b;i++)
#define PB				push_back
#define SS				second
#define FF				first
#define PP				pair<int,int>
#define MP 				make_pair

#define BUF 4096
char ibuf[BUF];
int ipt = BUF;

template <class T>
T readInteger()
{
	while(ipt<BUF && ibuf[ipt]<'0')
		ipt++;
	if(ipt==BUF)
	{
    	fread(ibuf,1,BUF,stdin);
    	ipt=0;
    	while(ipt<BUF && ibuf[ipt]<'0')
    		ipt++;
	}
	T n=0;
	while(ipt<BUF && ibuf[ipt]>='0')
		n=(n*10)+(ibuf[ipt++]-'0');
	if (ipt==BUF)
	{
    	fread(ibuf,1,BUF,stdin);
    	ipt=0;
    	while(ipt<BUF && ibuf[ipt]>='0')
    		n=(n*10)+(ibuf[ipt++]-'0');
	}
	return n;
}

vector<int> A[100005];

inline PP fun(vector<int> v)
	{
		int n=v.size();
		int m1=-1,ma=-1,j,a,d1,d,si,i,cnt;
		FOR(i,0,n)	m1=max(m1,v[i]);
		FOR(i,0,m1+2)		A[i].clear();
		FOR(i,0,n)		A[v[i]].PB(i);
		FOR(j,0,m1+2)
			{
				si=A[j].size();
				if(si<2)		continue;
				d=A[j][si-1]-A[j][si-2];
				if(A[j][si-1]+d<=n-1)	continue;
				cnt=2;
				i=si-3;
				while(i>=0)
					{	
						if(A[j][i+1]-A[j][i]!=d)	break;
						cnt++;
						i--;
					}
				if(cnt>ma)	
					{
						ma=cnt;
						a=A[j][i+1]+1;
						d1=A[j][si-1]-A[j][si-2];	
					}
			}
		if(ma==-1)	return MP(-1,-1);
		return MP(a,d1);
	}

int main()
	{
		int n,cnt=0,curr,si,j,a,d,d1,te,i,q,ma=-1;
		n=readInteger<int>();
		vector<int> v(n);
		vector<int> re;
		vector< PP> moves;
		FOR(i,0,n)			v[i]=readInteger<int>();
		PP p;
		cnt=n;
		FOR(j,0,360)
			{
				re.clear();
				p=fun(v);
				if(p.FF!=-1)
					{
						te=(v.size()-p.FF)/p.SS +1;
						cnt-=te;
						moves.PB(MP(p.FF,p.SS));
						re=v;
						v.clear();
						curr=p.FF-1;
						FOR(i,0,re.size())
							{
								if(i==curr)	{curr+=p.SS;	continue;}
								v.PB(re[i]);
							}
					}
				else break;
			}
		printf("%d\n",(int)moves.size()+cnt);
		FOR(i,0,moves.size())
			printf("%d %d\n",moves[i].FF,moves[i].SS);
		for(i=cnt;i>0;i--)
			printf("%d %d\n",i,i);
		return 0;
	}