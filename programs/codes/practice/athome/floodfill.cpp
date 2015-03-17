/* bhupkas flood-fill with 0-based index for vertices */
#include"stdio.h"
#include"iostream"
#include"vector"
using namespace std;
#define MAX_SIZE	100
#define FOR(i,a,b)	for(i=a;i<b;i++)
typedef long long LL;
typedef vector<int> vi;
bool VISITED[MAX_SIZE];
int CONNECTED[MAX_SIZE];
vi v[MAX_SIZE];
void flood(int vertex,int cc)
	{
		VISITED[vertex]=true;
		CONNECTED[vertex]=cc;
		int i;
		for(i=0;i<v[vertex].size();i++)	
			{
				if(!VISITED[v[vertex][i]])	flood(v[vertex][i],cc);
			}
	} 
int main()
	{
		int t,n,m,te1,te2,i,j,cc;
		cin>>t;
		while(t--)
			{
				cc=0;
				cin>>n>>m;
				FOR(i,0,n)	{CONNECTED[i]=-1;	VISITED[i]=false;}
				FOR(i,0,n)	v[i].clear();
				FOR(i,0,m)
					{
						cin>>te1>>te2;
						v[te1].push_back(te2);
						v[te2].push_back(te1);
					}
				FOR(i,0,n)
					{
						if(!VISITED[i])	flood(i,++cc);
					}
				FOR(i,0,n)	
					cout<<"CONNECTED COMPONENT NUMBER OF "<<i<<"TH VERTEX IS"<<CONNECTED[i]<<endl;
				cout<<endl;
			}
		return 0;
	}