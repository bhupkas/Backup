#include"iostream"
#include"stdio.h"
#include"string.h"
#include"string"
#include"math.h"
#include"vector"
#include"algorithm"
#include"map"
#include"set"
#include"deque"
using namespace std;
#define FOR(i,a,b)	for(i=a;i<b;i++)
typedef long long LL;
void pre()
	{
	}
int main()
	{
	pre();
	int d,n,i,j,k,m,ans=0,te;
	vector<int> v,v1;
	string str;
	int A[102][102];
	cin>>n>>m>>d;
	FOR(i,0,n)
		{
		FOR(j,0,m)
			{
			cin>>A[i][j];
			}
		}
	if(n==1 && m==1)
		{
		cout<<"0"<<endl;
		return 0;
		}
	FOR(i,0,n)
		{
		FOR(j,0,m)
			{
			te=abs(A[i][j]-A[0][0]);
			if(te%d !=0)	{cout<<"-1"<<endl;	return 0;}		
			}
		}
		
	return 0;
	}
