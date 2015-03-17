/* bhupkas */

#include "iostream"
#include "stdio.h"
#include "algorithm"
#include "vector"
#include "set"
#include "map"
#include "string"
#include "string.h"
#include "math.h"

using namespace std;

#define FOR(i,a,b)	for(i=a;i<b;i++)
#define PB 	push_back

int M[]={31,28,31,30,31,30,31,31,30,31,30,31};
int M1[]={31,29,31,30,31,30,31,31,30,31,30,31};

bool leap(int y)	
	{
		if(y%400==0)	return true;
		if(y%100==0)	return false;
		if(y%4==0)		return true;
		return false;
	}
int fir(int y1,int m1,int d1,int y2,int m2,int d2)
	{
		if(y1<y2)	return 1;
		if(y2<y1)	return 2;
		else
			{
				if(m1<m2)	return 1;
				if(m2<m1)	return 2;
				else
					{
						if(d1<d2)	return 1;
						if(d2<d1)	return 2;
						return 3;
					}
			}
	}
int main()	
	{
		char S[100],S1[100];
		int ans=0,i,j;
		scanf("%s %s",S,S1);
		int y1,y2,m1,m2,d1,d2;
		y1=(S[0]-'0')*1000 + (S[1]-'0')*100 + (S[2]-'0')*10 + S[3]-'0';
		m1=(S[5]-'0')*10 + S[6]-'0';
		d1=(S[8]-'0')*10 + S[9]-'0';
		y2=(S1[0]-'0')*1000 + (S1[1]-'0')*100 + (S1[2]-'0')*10 + S1[3]-'0';
		m2=(S1[5]-'0')*10 + S1[6]-'0';
		d2=(S1[8]-'0')*10 + S1[9]-'0';
		int val=fir(y1,m1,d1,y2,m2,d2);
		if(val==3)	{cout<<0<<endl;	return 0;}
		if(val==2)
					{
						int temp=y1;
						y1=y2;
						y2=temp;
						temp=m1;
						m1=m2;
						m2=temp;
						temp=d1;
						d1=d2;
						d2=temp;
					}
		for(i=y1+1;i<y2;i++)
			{
				if(i%400 == 0)	ans+=366;
				else if(i%100==0)	ans+=365;
				else if(i%4==0)	ans+=366;
				else			ans+=365;
			}
		if(leap(y1))
			{
				for(i=m1+1;i<=12;i++)
					ans+=M1[i-1];
				ans+=M1[m1-1]-d1;
			}
		else
			{
				for(i=m1+1;i<=12;i++)
					ans+=M[i-1];		
				ans+=M[m1-1]-d1;
			}
		if(leap(y2))
			{
				for(i=1;i<m2;i++)
					ans+=M1[i-1];
				ans+=d2;
			}
		else
			{
				for(i=1;i<m2;i++)
					ans+=M[i-1];
				ans+=d2;
			}
		cout<<ans<<endl;
		return 0;
	}