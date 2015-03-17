/* bhupkas */
#include"iostream"
#include"stdio.h"
#include"map"
#include"set"
#include"vector"
#include"algorithm"
#include"string"
#include"string.h"
#include"math.h"
#include"queue"
using namespace std;
typedef long long LL;
#define MOD (LL)(1e9 +7)
#define FOR(i,a,b) for(i=a;i<b;i++)
void pre()
	{

	}
bool matrix[102][102];
int degree[102];
vector<int> v[105];
bool andd(int a,int b)
	{
		while(a && b)	
			{
				if(a%10!=0 && b%10!=0)	return false;
				a/=10;b/=10;
			}
		return true;
	}

int main()	
	{
		int i,j,k,n,te,te1,te2,t;
		string str1,str,str2;
		pre();
		cin>>n;
		deque<int> q;
		int A[101];
		FOR(i,0,n)
			{
				cin>>A[i];
			}
		FOR(i,0,n)
			{
				FOR(j,i+1,n)
					{
						if(andd(A[i],A[j]))	
							{
								v[i].push_back(j);
								v[j].push_back(i);
							}

					}
			}
		int cnt=0;
		vector<int> v1;
		set<int> s1;
		FOR(i,0,n)
			{
				FOR(j,0,v[i].size())
					s1.insert(v[i][j]);
			}
		long long bit1;
		bit1=0;
		set<int>::iterator it;
		for(it=s1.begin();it!=s1.end();it++)
				{
					v1.push_back((*it));
				}
		vector<int> temp;
		int o,l;
		long long bit2;
		bool flag;
		long long ans1=-1;
		for(bit1=0;bit1< (1<<(v1.size()));bit1++)
			{
				temp.clear();
				for(j=0;j<n;j++)
					{
						if((1<<j) & bit1)
							temp.push_back(A[j]);
					}
				flag=true;
				FOR(o,0,temp.size())
					{
						FOR(l,o+1,temp.size())
							{
								if(!andd(temp[o],temp[l]))	break;
							}
						if(l!=temp.size())	{flag=false;	break;}
					}
				if(o==temp.size())	ans1=max(ans1,bit1);
			}
		if(ans1==-1)	{cout<<"0"<<endl;	return 0;}
		int cnt11=0;
		FOR(i,0,n)
			{
				if((1<<i) & ans1)	cnt11++;	
			}
		cout<<cnt11<<endl;
		FOR(i,0,n)
			{
				if((1<<i) & ans1)	cout<<A[i]<<" ";	
			}
		cout<<endl;
		return 0;
	}