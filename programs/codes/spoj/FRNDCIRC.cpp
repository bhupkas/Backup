/* bhupkas */

#include "stdio.h"
#include "iostream"
#include "vector"
#include "algorithm"
#include "string.h"
#include "string"
#include "set"
#include "map"

using namespace std;

#define FOR(i,a,b)	for(i=a;i<b;i++)
#define MAX 		200005


int PARENT[MAX+5];
int SIZE[MAX+5];

int par(int a)
	{
		if(PARENT[a]==a)	return a;
		int p1;
		p1=par(PARENT[a]);
		PARENT[a]=p1;
		return p1;
	}
bool issame(int a,int b)
	{
		if(par(a)==par(b))	return true;
		return false;
	}
void uni(int a,int b)
	{
		int p1,p2;
		p1=par(a);
		p2=par(b);
		if(SIZE[p1]<SIZE[p2])
			{
				PARENT[p1]=p2;
				SIZE[p2]+=SIZE[p1];
				SIZE[p1]=0;
			}
		else
			{
				PARENT[p2]=p1;
				SIZE[p1]+=SIZE[p2];
				SIZE[p2]=0;	
			}
	}
	
int main()
	{
		int t,n,i,j,cnt,x,pr,nex;
		string S1,S2;
		char T1[25],T2[25];
		int A[MAX+5],B[MAX+5];
		cin>>t;
		map<string,int> mymap;
		map<string,int>::iterator it;
		while(t--)
			{
				cnt=0;
				mymap.clear();
				cin>>n;
				getchar();				
				FOR(i,0,n)
					{
						S1.clear();
						S2.clear();
						scanf("%s %s",T1,T2);
						getchar();
						pr=strlen(T1);
						nex=strlen(T2);
						FOR(j,0,pr)		S1.push_back(T1[j]);
						FOR(j,0,nex)		S2.push_back(T2[j]);
						S1.push_back('\0');
						S2.push_back('\0');
						it=mymap.find(S1);
						if(it==mymap.end())	
							mymap[S1]=cnt++;
						it=mymap.find(S2);
						if(it==mymap.end())	
							mymap[S2]=cnt++;
						A[i]=mymap[S1];
						B[i]=mymap[S2];
					}
				FOR(i,0,cnt)	{SIZE[i]=1;	PARENT[i]=i;}
				FOR(i,0,n)
					{
						if(!issame(A[i],B[i]))	uni(A[i],B[i]);
						cout<<SIZE[par(A[i])]<<endl;
					}	
			}
		return 0;	
	}
