/* bhupkas UNION_SET data structure code */
/* INPUT format::
	1 - INDEXED 
	testcases(t) 
	number of objects(n)    number of queries(q)
	0 a b
	1 a b
	.
	.
	.
	q lines
	0 for union
	1 for whether they belong to same representative set or not
*/
#include"vector"
#include"iostream"
#include"stdio.h"
#include"algorithm"
using namespace std;
#define FOR(i,a,b)	for(i=a;i<b;i++)	
typedef long long LL;
vector<int> pset;
int findset(int a)
	{
	if(pset[a]==a)	return a;
	int temp;
	temp=findset(pset[a]);
	pset[a]=temp;
	return temp;
	}
bool issame(int a,int b)
	{
	if(findset(a)==findset(b))	return true;
	return false;
	}
void dounion(int a,int b)
	{
	int temp1=findset(a);
	int temp2=findset(b);
	pset[temp1]=temp2;
	}
int main()
	{
	int t,n,i,j,q,a,b,te;
	cin>>t;
	while(t--)
		{
		cin>>n>>q;
		pset.clear();
		FOR(i,0,n)	pset.push_back(i);
		while(q--)
			{
			cin>>te>>a>>b;
			a--;b--;
			if(te==0)	dounion(a,b);
			else		
				{
				if(issame(a,b))	cout<<"YES"<<endl;
				else		cout<<"NO"<<endl;
				}
			//FOR(i,0,n)	cout<<pset[i]<<" ";
			//cout<<endl;		
			}
		}
	return 0;
	}
