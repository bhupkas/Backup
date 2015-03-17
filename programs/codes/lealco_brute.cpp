#include"stdio.h"
#include"deque"
using namespace std;
int Ma[20];
#define FOR(i,a,b)	for(i=a;i<b;i++)
#define BUF 4096 // block size on my disk is 4KBs
char ibuf[BUF];
int ipt = BUF;
int read() {
while (ipt < BUF && ibuf[ipt] < '0') ipt++;
if (ipt == BUF) {
    fread(ibuf, 1, BUF, stdin);
    ipt = 0;
    while (ipt < BUF && ibuf[ipt] < '0') ipt++;
}
int n = 0;
while (ipt < BUF && ibuf[ipt] >= '0') n = (n*10)+(ibuf[ipt++]-'0');
if (ipt == BUF) {
    fread(ibuf, 1, BUF, stdin);
    ipt = 0;
    while (ipt < BUF && ibuf[ipt] >= '0') n = (n*10)+(ibuf[ipt++]-'0');
}
return n;
}
void funct(int R[],int n,int k,int m)
	{
		int i,j;
		deque<int> q1;
		deque<int> q2;
		FOR(i,0,k)	q1.push_back(R[i]);
		q2.push_back(R[0]);
		FOR(i,1,k)
			{
				if(!q2.empty()&&R[i]>q2.back())
				{
					while(!q2.empty()&&R[i]>q2.back())
							q2.pop_back();
				}
				q2.push_back(R[i]);
			}
		FOR(i,k,n)
			{
				Ma[i-k]=q2.front();
				if(q1.front()==q2.front())
					q2.pop_front();
				q1.pop_front();
				q1.push_back(R[i]);
				if(!q2.empty()&&R[i]>q2.back())
				{
					while(!q2.empty()&&R[i]>q2.back())
						q2.pop_back();
				}
				q2.push_back(R[i]);
			}
		Ma[n-k]=q2.front();
	}
int main()
	{
		int itt,count,j,max,t,n,ans,def,k,m,num,i,C[20],R[20],oo,C1[20],min=-1,T[20];
		t=read();
		while(t--)	
			{	
				ans=0;
				def=0;
				n=read();k=read();m=read();
				FOR(i,0,n)		R[i]=read();
				FOR(i,0,n)		C[i]=0;
				FOR(i,0,n)		T[i]=0;
				if(m==1)		{printf("-1\n");	continue;}
				FOR(i,0,n)		C[i]=0;
				funct(R,n,k,m);
				//FOR(i,0,n-k+1)	printf("%d ",Ma[i]);
				//	printf("\n");
				FOR(i,0,n-k+1)
					{
						count=0;
						FOR(j,i,i+k)
							{
								if(R[j]==Ma[i])	count++;
							}
						if(count>=m)
							{
								def++;
								FOR(j,i,i+k)	{if(R[j]==Ma[i])	C[j]++;}	
							}
					}
				if(def==0)	{printf("0\n");	continue;}
				while(def)
					{
						def=0;
						ans++;
						max=-1;
						FOR(i,0,n)
							{
								if(C[i]>max&&T[i]==0)	{max=C[i];	oo=i;}
							}
						num=0;
						FOR(i,0,n)
								if(C[i]==max&&T[i]==0)	num++;
						if(num>1)
							{
								FOR(i,0,n)	
									{
										min=10000;
										if(C[i]==max&&T[i]==0)
										{
											R[i]++;
											def=0;
											FOR(itt,0,n)		C1[itt]=0;
											funct(R,n,k,m);
											FOR(itt,0,n-k+1)
												{
													count=0;
													FOR(j,itt,itt+k)
														{
															if(R[j]==Ma[itt])	count++;
														}
													if(count>=m)
														{
															def++;
															FOR(j,itt,itt+k)	{if(R[j]==Ma[itt])	C1[j]++;}	
														}
												}
											if(def<min)	{min=def;	oo=i;}
											R[i]--;							
										}
									}
							}
						R[oo]++;
						T[oo]++;
/*
						FOR(i,0,n)	printf("%d ",C[i]);
							printf("\n");
						FOR(i,0,n)	printf("%d ",R[i]);
							printf("\n");
*/
						FOR(i,0,n)		C[i]=0;
						funct(R,n,k,m);
						FOR(i,0,n-k+1)
							{
								count=0;
								FOR(j,i,i+k)
									{
										if(R[j]==Ma[i])	count++;
									}
								if(count>=m)
									{
										def++;
										FOR(j,i,i+k)	{if(R[j]==Ma[i])	C[j]++;}	
									}
							}
					}
					printf("%d\n",ans);
			}
		return 0;
	}