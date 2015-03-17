/* bhupkas */

#include "stdio.h"
#include "iostream"
#include "set"
#include "algorithm"
#include "vector"
#include "map"

using namespace std;

typedef long long LL;

int n,k;
vector<int> v;
map<int,int> mymap;
multiset< pair <int,int> > myset;
multiset< pair <int,int> >::iterator it;
int main()
	{
		cin>>n>>k;
		int i,j,te,ma;
		for(i=0;i<n;i++)
			{
				cin>>te;
				v.push_back(te);
			}
		LL ans=0;
		int temp,oo;
		i=0;
		j=0;
		ma=1;
		mymap[v[0]]=1;
		myset.insert(make_pair(1,v[0]));
		
		while(i<n)
			{
				while(j<n)
					{
						if(ma==k)	break;
						j++;
						it=myset.find(make_pair(mymap[v[j]],v[j]));
						if(it!=myset.end())		myset.erase(it);
						mymap[v[j]]++;
						myset.insert(make_pair(mymap[v[j]],v[j]));
						it=myset.end();
						it--;
						ma=(*it).first;
					}
				if(j!=n)	ans+=(LL)n-j;
				if(i==j)
					{	
						if(i!=n)	
							{	
								j++;
								it=myset.find(make_pair(mymap[v[j]],v[j]));
								if(it!=myset.end())		myset.erase(it);
								mymap[v[j]]++;
								myset.insert(make_pair(mymap[v[j]],v[j]));
								it=myset.end();
								it--;
								ma=(*it).first;
							}
						else	break;
					}
				myset.erase(myset.find(make_pair(mymap[v[i]],v[i])));
				mymap[v[i]]--;
				myset.insert(make_pair(mymap[v[i]],v[i]));
				i++;
				it=myset.end();
				it--;
				ma=(*it).first;
			}
		cout<<ans<<endl;
		return 0;
	}