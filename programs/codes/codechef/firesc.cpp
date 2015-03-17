/* bhupkas firesc march '13 long contest , graph */
#include"iostream"
#include"stdio.h"
#include"algorithm"
#include"vector"
using namespace std;
typedef long long LL;
#define MOD 1000000007LL
LL co;
void dfs(bool B[],LL i,vector<LL> v[])
	{
		co++;
		B[i]=true;
		LL si=v[i].size();
		LL j;
		for(j=0;j<si;j++)
			{
				if(!B[v[i][j]])	dfs(B,v[i][j],v);	
			}
	}
int main()
	{
		LL te1,te2,t,n,m,i,j;
		cin>>t;
		vector<LL> v[100005];
		LL cc,mu;
		bool B[100005];
		while(t--)
			{
				mu=1;cc=0;
				cin>>n>>m;
				for(i=0;i<n;i++)	{v[i].clear();	B[i]=false;}
				for(i=0;i<m;i++)
					{
						cin>>te1>>te2;
						te1--;te2--;
						v[te1].push_back(te2);
						v[te2].push_back(te1);
					}
				for(i=0;i<n;i++)
					{
						if(!B[i])	{co=0;	dfs(B,i,v);	cc++;	mu=(mu*co)%MOD;}
					}
				cout<<cc<<" "<<(mu+MOD)%MOD<<endl;
			}
		return 0;
	}
