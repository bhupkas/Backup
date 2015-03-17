#include"stdio.h"
#include"vector"
#include"deque"
using namespace std;
int Ma[20];
int Co[20];
int Co1[20];
bool D[20];
bool V[20];
#define FOR(i,a,b)	for(i=a;i<b;i++)
int mi(int a,int b)
	{
		if(a<b)	return a;
		return b;
	}
int ma(int a,int b)
	{
		if(a>b)	return a;
		return b;
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
void funct1(int R[],int n,int k,int m)
	{
		int lim2,lim1,i,j,count;
		for(i=0;i<=n-k;i++)
			{
				count=0;
				for(j=i;j<i+k;j++)
				{
					if(R[j]==Ma[i])	count++;
				}
			Co[i]=count;
			if(count>=m)	D[i]=true;
			else			D[i]=false;
			}
		//for(i=0;i<=n-k;i++)	
		//	printf("%d ",(int)D[i]);
		//printf("\n");
			for(i=0;i<n;i++)
				{
					count=0;
					lim1=ma(0,i-k+1);
					lim2=mi(i,n-k);
					for(j=lim1;j<=lim2;j++)
						if(D[j]&&(Ma[j]==R[i]))		count++;	
					Co1[i]=count;
				}
		//for(i=0;i<=n-k;i++)
		//	printf("%d ",Co[i] );
		//printf("\n");
		//for(i=0;i<n;i++)
		//	printf("%d ",Co1[i] );
		//printf("\n");
	}
bool check(int n)
	{
		int i;
		for(i=0;i<n;i++)	if(D[i])	break;
		if(i==n)	return false;
		return true;
	}
int main()
	{
		int lim1,lim2,t,n,i,j,l1,o,count,ans,max,min,temp,m,k,R[20],oo;
		vector<int> v;
		scanf("%d",&t);
		while(t--)	
			{
				scanf("%d %d %d",&n,&k,&m);
				if(m==1)	{printf("-1\n");	continue;}
				for(i=0;i<n;i++)	scanf("%d",&R[i]);
				funct(R,n,k,m);
				funct1(R,n,k,m);
				for(i=0;i<n;i++)	V[i]=false;
				ans=0;
				//for(i=0;i<=n-k;i++)
				//			printf("%d ",(int)D[i] );
				//		printf("\n");
				while(check(n))
				//for(l1=0;l1<1;l1++)
					{
						v.clear();
						max=-1;
						for(i=0;i<n;i++)	if((Co1[i]>max)&&V[i]==false)	max=Co1[i];
						for(i=0;i<n;i++)
								if(Co1[i]==max&&V[i]==false)	{v.push_back(i);}
				//printf("wbw %d\n",(int)v.size() );
						if((int)v.size()==1)	oo=v[0];
						else
							{
								min=1000;
								for(i=0;i<(int)v.size();i++)
								{
									temp=0;
									lim1=ma(0,v[i]-k+1);
									lim2=v[i];
									for(j=lim1;j<=lim2;j++)
									{
										//printf("%d %d %d\n",Ma[j],R[v[i]],v[i] );
										if(Ma[j]==(R[v[i]]+1))	
											{
												if((Co[j]+1)>=m)	temp++;
											}										
									}
									//printf("%d\n",v[i]);
									if(temp<min)	{min=temp;	oo=v[i];}
								}
							}
						V[oo]=true;
						lim1=ma(0,oo-k+1);
						lim2=oo;
						temp=Ma[oo];
						for(j=lim1;j<=lim2;j++)
							{
								if(Ma[j]==R[oo])		{Ma[j]++;	Co[j]=1;}
								else if(Ma[j]==R[i]-1)	{Co[j]++;}
								if(Co[j]>=m)	D[j]=true;
								else			D[j]=false;
							}
						R[oo]++;
						Ma[oo]=temp+1;
						for(i=0;i<n;i++)
							{
							count=0;
							lim1=ma(0,i-k+1);
							lim2=mi(i,n-k);
							for(j=lim1;j<=lim2;j++)
								if(D[j]&&(Ma[j]==R[i]))		count++;	
							Co1[i]=count;
						}
						//printf("kger %d\n",oo);
for(i=0;i<n;i++)	printf("%d ",Co1[i] );
					printf("\n");
						ans++;
					}
					printf("%d\n",ans);
			}
		return 0;
	}