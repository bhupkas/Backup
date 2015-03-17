/* bhupkas */

#include "stdio.h"
#include "iostream"
#include "map"
#include "vector"
#include "set"
#include "algorithm"
#include "string.h"
#include "math.h"
#include "string"

using namespace std;

typedef long long LL;
typedef vector<int> vi;

#define MOD 1e9+7
#define PB(n) 	push_back(n)
#define FOR(i,a,b)	for(i=a;i<b;i++)
#define MP 			make_pair

void pre()
	{

	}

int main()
	{
		pre();
		int m,te,n,i,j;
		char S[100];
		cin>>n>>m;
		vector < pair <int,int> > v;
		FOR(i,0,n)
			{
				cin>>te;
				v.PB(MP(te,-1));
			}
		//FOR(i,0,n)	
			//cout<<v[i].first<<" "<<v[i].second<<endl;
		int oo,x,y,t,q;
		vi sum;
		vi csum;
		bool flag=false;
		FOR(i,0,m)
			{
				//cout<<i<<endl;
				cin>>t;
				if(t==1)
					{
						cin>>oo>>x;
						oo--;	
						v[oo].first=x;
						v[oo].second=sum.size()-1;
					}
				if(t==2)
					{
						cin>>y;
						sum.PB(y);
						if(sum.size()==1)	csum.PB(y);
						else				csum.PB(y+csum[sum.size()-2]);
					}
				if(t==3)
					{
						//cout<<"jhere";
						cin>>q;
						q--;
						//cout<<q<<endl;
						if(sum.size()==0)	{cout<<v[q].first<<endl;	continue;}
						if(v[q].second==-1)	
							{
								cout<<v[q].first+csum[sum.size()-1]<<endl;
							}
						else
							{
								cout<<v[q].first+csum[sum.size()-1]-csum[v[q].second]<<endl;
							}
					}
			}
		return 0;
	}