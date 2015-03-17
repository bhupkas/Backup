#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
#define N 10000
using namespace std;
typedef long long LL;
LL n,m;
vector<pair<LL,pair<LL,LL> > > V;
bool compare(pair<LL,pair<LL,LL> > a, pair<LL,pair<LL,LL> > b)
{
  if(a.first<b.first)
    return true;
  else
    return false;
}

pair<LL,vector<pair<LL,LL> > > mst()
{
  LL wt=0;
  vector<pair<LL,LL> > MST;
  sort(V.begin(),V.end(),compare);
  LL Set[n];
  for(LL i=0;i<n;i++)
    Set[i]=i;
  for(LL i=0;i<m;i++)
  {
    if(Set[V[i].second.first] != Set[V[i].second.second])
    {
      LL tmp1=Set[V[i].second.first];
      LL tmp2=Set[V[i].second.second];
      MST.push_back(make_pair(tmp1,tmp2));
      wt+=LL(V[i].first);
      for(LL j=0;j<n;j++)
	if(Set[j]==tmp2)
	  Set[j]=tmp1;
    }
  }
  return make_pair(wt,MST);
}

int main()
{
  LL t,tmp1,tmp2,tmp3;
  scanf("%lld",&t);
  while(t--)
	{
	  V.clear();
	  scanf("%lld %lld",&n,&m);
	  for(LL i=0;i<m;i++)
	  {
	    scanf("%lld %lld %lld",&tmp1,&tmp2,&tmp3);
	    V.push_back(make_pair(tmp3,make_pair(tmp1-1,tmp2-1)));
	  }
	  pair<LL,vector<pair<LL,LL> > > MST = mst();
	  printf("%lld\n",MST.first);
	}
}
