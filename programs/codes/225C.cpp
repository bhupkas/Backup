#include"stdio.h"
#include"iostream"
#include"string.h"
#include"algorithm"
using namespace std;
int main()
	{
		int n,m,x,y,i,j;
		char temp;
		int HASH[1001],DOT[1001];
		scanf("%d %d %d %d",&n,&m,&x,&y);
		for(i=0;i<m;i++)	HASH[i]=DOT[i]=0;
		for(i=0;i<n;i++)
		{
			getchar();
			for(j=0;j<m;j++)
			{
				temp=getchar();
				if(temp=='#')	HASH[j]++;
				else			DOT[j]++;
			}
		}
		if(m==1)	{printf("%d\n",min(HASH[0],DOT[0]));	return 0;}
		int count,ans1=0,ans2=0;
		//DOT FIRST
		bool hash,dot;
		hash=false;
		dot=false;
		ans1+=HASH[0];
		dot=true;
		hash=false;
		count=1;
		for(i=1;i<m;i++)
		{
			if(dot == true)
			{
				if(count<x)	{dot=true;hash=false;	ans1+=HASH[i];count++;}
				else if(count==y){hash=true;dot=false;	ans1+=DOT[i];count=1;}
				else		
				{
					if(HASH[i]<DOT[i])
					{
						dot=true;
						hash=false;
						ans1+=HASH[i];
						count++;
					}
					else
					{
						hash=true;
						dot=false;
						ans1+=DOT[i];
						count=1;
					}
				}
			}
			else
			{
				if(count<x)	{hash=true;dot=false;	ans1+=DOT[i];count++;}
				else if(count==y){dot=true;hash=false;	ans1+=HASH[i];count=1;}
				else		
				{
					if(HASH[i]<DOT[i])
					{
						dot=true;
						hash=false;
						ans1+=HASH[i];
						count=1;
					}
					else
					{
						hash=true;
						dot=false;
						ans1+=DOT[i];
						count++;
					}
				}	
			}
		}
		ans2+=DOT[0];
		dot=false;
		hash=true;
		count=1;
		for(i=1;i<m;i++)
		{
			if(dot == true)
			{
				if(count<x)	{dot=true;hash=false;	ans2+=HASH[i];count++;}
				else if(count==y){hash=true;dot=false;	ans2+=DOT[i];count=0;}
				else		
				{
					if(HASH[i]<DOT[i])
					{
						dot=true;
						hash=false;
						ans2+=HASH[i];
						count++;
					}
					else
					{
						hash=true;
						dot=false;
						ans2+=DOT[i];
						count=0;
					}
				}
			}
			else
			{
				if(count<x)	{hash=true;dot=false;	ans2+=DOT[i];count++;}
				else if(count==y){dot=true;hash=false;	ans2+=HASH[i];count=0;}
				else		
				{
					if(HASH[i]<DOT[i])
					{
						dot=true;
						hash=false;
						ans2+=HASH[i];
						count=0;
					}
					else
					{
						hash=true;
						dot=false;
						ans2+=DOT[i];
						count++;
					}
				}	
			}
		}
		printf("%d\n",min(ans1,ans2));
	return 0;
	}