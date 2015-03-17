#include<cstdio>
#include<cstring>
#include<cmath>
#include<vector>
#include<algorithm>
typedef unsigned long long int ll;
using namespace std;
int main()
	{
	ll k,j,i,A[1000005],N[102],max,t,n,size;
	bool PRIME[102];
	bool flag;
	vector<ll> vp,vf;
	vector<ll>::iterator it,il;
	for(i=0;i<1000005;i++)
		A[i]=1;
	A[1]=0;
	for(i=2;i<=1000;i++)
		{
		if(A[i])		
			{
			for(j=i;j<=(1000005/i);j++)
				A[i*j]=0;
			}
		}
	for(i=2;i<1000005;i++)
		if(A[i])	vp.push_back(i);
	scanf("%llu",&t);	
	for(k=1;k<=t;k++)
		{
		vf.clear();
		max=0;
		scanf("%llu",&n);
		for(i=0;i<n;i++)
			{
			scanf("%llu",&N[i]);
			}
		for(it=vp.begin();(it!=vp.end());it++)
			{
			flag=false;
			for(i=0;i<n;i++)
				{
				if(N[i]%(*it)==0)
					{
					flag=true;
					while((N[i]%(*it))==0)	N[i]/=(*it);
					}
				}
			if(flag)
				vf.push_back(*it);
			}
		sort(vf.begin(),vf.end());
		for(i=0;i<n-1;i++)
			{
				if(N[i]!=1&&N[i]!=N[i+1])
					vf.push_back(N[i]);
			}
		size=vf.size();
		sort(vf.begin(),vf.end());
		if(N[n-1]!=1)	vf.push_back(N[n-1]); 
		printf("Case #%llu: %llu\n",k,size);
		for(i=0;i<size;i++)
			printf("%llu\n",vf.at(i));
		}
	return 0;
	}				
