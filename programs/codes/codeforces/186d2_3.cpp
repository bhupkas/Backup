#include"iostream"
#include"stdio.h"
#include"vector"
#include"algorithm"
#include"set"
#include"map"
#include"math.h"
#include"string.h"
#include"string"
#include"stdlib.h"
using namespace std;
#define FOR(i,a,b)	for(i=a;i<b;i++)
typedef long long int LL;
LL po[9];
map<LL, bool> mymap;
void pre()	
	{
		po[0]=1;
		int i;
		mymap[1]=true;
		for(i=1;i<9;i++)
			{
				po[i]=po[i-1]*4;
				mymap[po[i]]=true;
			}
	}
int main()
	{
		LL n,i,j,te,m,co=0,ma=-1,sum=0;
		string str;
		pre();
		vector<LL> v;
		cin>>n;
		if(n==1)
			{
				cin>>m;
				cout<<m<<endl;	
				return 0;
			}
		else
			{
				for(i=0;i<n;i++)
					{
						cin>>te;
						v.push_back(te);
					}
				sort(v.begin(),v.end());
				m=1;
				j=0;
				while(m!=n)
					{
						m*=4;
						j++;
					}
				j++;
				sum=0;
				int l=1;
				for(i=n;i>=1&&j>0;i--,l++)
					{
						sum+=j*v[i-1];
						if(mymap[l]==true)	j--; 	
					}
				cout<<sum<<endl;
			}
		return 0;
	}