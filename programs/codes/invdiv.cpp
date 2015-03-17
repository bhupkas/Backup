#include"stdio.h"
#include"vector"
using namespace std;
typedef long long int LL;
bool Prime[100000];
vector<LL> pri;
LL phi[100000];
void pre()
	{
		LL i,j;
		for(i=0;i<100000;i++)	Prime[i]=true;
		Prime[0]=Prime[1]=false;
		for(i=2;i*i<100000;i++)
		{
			if(Prime[i])
			{
				for(j=i;j<100000/i;j++)
					Prime[i*j]=false;
			}
		}
		for(i=2;i<100000;i++)
			{
				if(Prime[i])	pri.push_back(i);
			}
		for(i=1;i<100000;i++) phi[i]=i;
		for(i=2;i<100000;i++)
			if(phi[i]==i)
				for(j=i;j<100000;j+=i)
					phi[j]=(phi[j]/i)*(i-1);
	}
LL toi(LL a)
	{
		LL re=a,i;
		vector<LL> pd;
		for(i=0;pri.at(i)*pri.at(i)<=a;i++)
		{
			if(a%pri.at(i)==0)
			{
				while(a%pri.at(i)==0)	a/=pri.at(i);
				pd.push_back(pri.at(i));
			}
		}
		if(a>1)	pd.push_back(a);
		for(i=0;i<(LL)pd.size();i++)
			re=(re*(pd.at(i)-1))/(pd.at(i));
		return re;
	}	
int main()
	{
		pre();
		LL i,t,m,am,m1,tt;
		scanf("%lld",&t);
		while(t--)
			{
				scanf("%lld",&m);
				if(m==1)	{printf("1\n");	continue;}
				if(m&1)		{printf("-1\n");	continue;}
				am=m*2;
				m1=m;
				for(i=1;(pri.at(i)-1)<=m1;i++)
					if(m1%(pri.at(i)-1)==0)	am=(am*pri.at(i))/(pri.at(i)-1);
				for(i=m+1;i<=am;i++)
				{
					if(i>=100000)	tt=toi(i);
					else			tt=phi[i];
					if(tt==m)	break;
				}
				if(i==am+1)	{printf("-1\n");	continue;}
				printf("%lld\n",i);
			}
		return 0;
	}