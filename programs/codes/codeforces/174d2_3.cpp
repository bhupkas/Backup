#include"stdio.h"
#include"iostream"
#include"map"
#include"algorithm"
#include"set"
#include"vector"
#include"string"
#include"string.h"
#include"math.h"
using namespace std;
#define FOR(i,a,b)	for(i=a;i<b;i++)
typedef long long LL;
void pre()
	{
	}
int main()
	{
	pre();
	double ans=0;
	LL AI,KI,XI,size=1,sum=0,n,i,j,k,t,te;
	string str;
	vector<LL> v,v1;
	cin>>n;
	FOR(i,0,n+2)	v1.push_back(0);
	v.push_back(0);
	FOR(i,0,n)
		{
		cin>>t;
		if(t==1)	
			{
			cin>>AI>>XI;
			v1[AI-1]+=XI;
			sum+=XI*AI;
			}
		else if(t==2)
			{
			cin>>KI;
			v.push_back(KI);
			size++;
			sum+=KI;
			}
		else
			{
			sum-=(v.back()+v1[size-1]);
			v1[size-2]+=v1[size-1];
			v1[size-1]=0;
			size--;
			v.pop_back();
			}
		ans=((double)(sum))/size;
		printf("%0.9lf\n",ans);
		}	
	return 0;
	}
