/* bhupkas */
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <set>

using namespace std;
void pre()
	{

	}

#define PB 	push_back
#define I   insert
#define LL	long long 
#define so(v)	sort(v.begin(),v.end())
#define FOR(i,a,b)	for(i=a;i<b;i++)

LL gcd(LL a,LL b)
	{
		if(a==0)	return b;
		return 		gcd(b%a,a);
	} 


int main()
{
	LL n,m;
	cin>>n>>m;
	int boy=1,girl=1;
	int flag=0;
	vector < pair<int,int> > couple;
	bool B[101],G[101];
	memset(B,false,sizeof(B));
	memset(G,false,sizeof(G));
	couple.push_back(make_pair(1,1));
	B[1]=G[1]=true; 
	while(!B[n] || !G[m])
	{
		if(G[girl]==true && boy!=n)
		{
			boy++;
			couple.push_back(make_pair(boy,girl));
			B[boy]=true;
		}
		else if(B[boy]==true && girl!=m)
		{
			girl++;
			couple.push_back(make_pair(boy,girl));
			G[girl]=true;
		}
		else if(boy==n)
		{
			girl++;
			couple.push_back(make_pair(boy,girl));
			G[girl]=true;
		}
		else if(girl==m)
		{
			boy++;
			couple.push_back(make_pair(boy,girl));
			B[boy]=true;
		}
	}
	cout<<couple.size()<<endl;
	for(int i=0;i<couple.size();i++)
		cout<<couple[i].first<<" "<<couple[i].second<<endl;
	return 0;
}