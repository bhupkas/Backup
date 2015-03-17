#include"stdio.h"
#include"map"
#include"algorithm"
#include"set"
#include"string"
#include"string.h"
#include"math.h"
#include"vector"
#include"deque"
#include"utility"
using namespace std;
#define FOR(i,a,b)	for(i=a;i<b;i++)
#define S(n)	scanf("%d",&n);
#define P(n)	printf("%d\n",n);
vector< pair<int,int> > v;
int m,n;
bool A[100000];
void pre()
	{
		map< pair<int,int> , bool > my;
		pair<int,int> p;
		int i;
		FOR(i,0,100000)	A[i]=false;
		FOR(i,0,200)
			A[i*i]=true;
		int j;
		FOR(i,0,101)
			{
				FOR(j,0,101)
					{
						if(A[i*i + j*j])	
						{
							p.first=i;
							p.second=j;
							my[p]=true;
						}
						my[p]=false;
					}
			}
	}
void recurse(int i,int j)
	{
		if(i==m+1)	return;
		int it1,it2;
		if(j==n+1)	
		{
			it1=v[(int)v.size()-1].first;
			it2=v[(int)v.size()-1].second;
			v.pop_back();
			recurse(i-1,j+1);
		}
		FOR(it1,0,i-1)
			{
				if(A[((v[it1].first-i)*(v[it1].first-i) + (v[it1].second-j)*(v[it1].second-j))])
				{
					return recurse(i,j+1);
				}
 			}
 		pair<int,int> p;
 		p.first=i;
 		p.second=j;
 		v.push_back(p);
 		return recurse(i+1,0);
	}
int main()
{
	int max=-1,temp,j,i,A[200],h,B[40000],count=0;
	S(n);S(m);
	pair<int,int> p;
	vector< pair<int,int> > answer;
	pre();
	for(i=0;i<n;i++)
	{
		v.clear();
		p.first=0;
		p.second=i;
		v.push_back(p);
		recurse(1,0);
		count=(int)v.size();
		if(count>max)	max=count;
			{
				answer.clear();
				for(j=0;j<count;j++)
				{
					p.first=v[j].first;
					p.second=v[j].second;
					answer.push_back(p);
				}
			}
		for(i=0;i<m;i++)
			{
				printf("%d %d\n",v[i].first,v[i].second);
			}
	}
	printf("%d\n",(int)answer.size() );
	for(i=0;i<max;i++)
	{
		printf("%d %d\n",answer[i].first,answer[i].second );
	}
	return 0;
}