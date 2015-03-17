#include"stdio.h"
#include"deque"
int n,k,m,R[20],Ma[20],T[20];
#define FOR(i,a,b)	for(i=a;i<b;i++)
using namespace std;



void funct()
	{
		int i,j;
		deque<int> q1;
		deque<int> q2;
		FOR(i,0,k)	q1.push_back(T[i]);
		q2.push_back(T[0]);
		FOR(i,1,k)
			{
				if(!q2.empty()&&T[i]>q2.back())
				{
					while(!q2.empty()&&T[i]>q2.back())
							q2.pop_back();
				}
				q2.push_back(T[i]);
			}
		FOR(i,k,n)
			{
				Ma[i-k]=q2.front();
				if(q1.front()==q2.front())
					q2.pop_front();
				q1.pop_front();
				q1.push_back(T[i]);
				if(!q2.empty()&&T[i]>q2.back())
				{
					while(!q2.empty()&&T[i]>q2.back())
						q2.pop_back();
				}
				q2.push_back(T[i]);
			}
		Ma[n-k]=q2.front();
	}
bool check()
	{
		int i,j,count,flag=0;
		funct();
		for(i=0;i<=n-k;i++)
		{
			count=0;
			for(j=i;j<i+k;j++)	if(T[j]==Ma[i])	count++;
			if(count>=m)	flag=1;
		}
		if(flag==1)	return false;
		return true;
	}
int main()
	{
		int t,i,f,j,N,count,min;
		scanf("%d",&t);
		while(t--)
			{
				f=0;
				scanf("%d %d %d",&n,&k,&m);
				for(i=0;i<n;i++)	scanf("%d",&R[i]);
				if(m==1)	{printf("-1\n");	continue;}
				for(i=0;i<n;i++)	T[i]=R[i];
				if(check())	{printf("0\n");	continue;}
				N=1<<n;
				count=0;
				min=1000;
				for(i=0;i<N;i++)
					{
						count=0;
						for(j=0;j<n;j++)	T[j]=R[j];
						for(j=0;j<n;j++)
						{
							if(i&(1<<j))	{count++;	T[j]++;}
						}
						if(check()&&count<min)	{f=1;	min=count;}
					}
				if(f==0)	printf("-1\n");
				else	printf("%d\n",min);
			}
		return 0;
	}