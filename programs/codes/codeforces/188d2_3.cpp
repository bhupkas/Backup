/* bhupkas */

#include "iostream"
#include "stdio.h"
#include "map"
#include "set"
#include "algorithm"
#include "math.h"
#include "string.h"
#include "string"
#include "deque"

using namespace std;

typedef long long LL;

#define FOR(i,a,b)	for(i=a;i<b;i++)
#define PB	push_back
#define I 	insert
#define s 	size
#define vi vector<int>
#define vll	vector<LL>
#define MP 	make_pair
#define PP   pair<int,int>

LL F[100];

void pre()
	{
		int i;
		unsigned oo;
		F[0]=0;F[1]=1;
		i=2;
		while(F[i-1]<1e18)
			{
				F[i]=F[i-1]+F[i-2];
				i++;
			}
	}

int main()
	{
		//pre();
		LL x,y,co=0,ans=0,cnt=0,i,j,k,n,m;
		string str;
		cin>>x>>y>>m;
		LL o=x,ox=y;
		x=min(o,ox);	
		y=max(o,ox);
		ans=0;
		//while(F[ans]*x + F[ans+1]*y < m )
		//	{if(ans==87)	{ans++;break;}	
		//	ans++;}
		//if(ans==88)	cout<<-1<<endl;
		//else cout<<ans<<endl;
		//vi v (n);
		//FOR(i,0,n)	cin>>v[i];
		if(y>=m)	cout<<0<<endl;
		ans=0;
		LL temp;
		while(y<m)
			{	
				temp=x;
				x=y;
				y=temp+y;
				if(y>1e18 || y<-1e18)	break;
				ans++;
				if(ans==500)	break;
			}
		if(y>1e18 || y<-1e18)	cout<<-1<<endl;
		else if(ans==500)	cout<<-1<<endl;
		else	cout<<ans<<endl;
		return 0;
	}