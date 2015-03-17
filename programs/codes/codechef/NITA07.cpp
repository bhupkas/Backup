#include"iostream"
#include"stdio.h"
#include"deque"
#include"string.h"
using namespace std;
char A[110][110];
bool F[110][110];
int D[110][110];
struct node
	{
	int i,j;
	};
typedef struct node Node;
int main()
	{
	int n,i,m,j;
	Node N;
	cin>>n;
	getchar();
	for(i=0;i<n;i++)
		scanf("%s",A[i]);
	m=strlen(A[0]);
	for(i=0;i<=n+1;i++)	
		for(j=0;j<=m+1;j++)	
			F[i][j]=false;
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			if(A[i][j]=='0')	F[i+1][j+1]=true;
	for(i=0;i<=n+1;i++)
		for(j=0;j<=m+1;j++)	D[i][j]=-1;
	D[1][1]=1;
	deque<Node> q;
	N.i=1;
	N.j=1;
	q.push_back(N);
	Node curr;
	while(!q.empty())
		{
		curr=q.front();
		q.pop_front();
		if(F[curr.i +1][curr.j +1] && D[curr.i +1][curr.j +1]==-1)	{D[curr.i +1][curr.j +1]=D[curr.i][curr.j]+1;	N.i=curr.i+1;N.j=curr.j+1;	q.push_back(N);}
		if(F[curr.i +1][curr.j -1] && D[curr.i +1][curr.j -1]==-1)	{D[curr.i +1][curr.j -1]=D[curr.i][curr.j]+1;	N.i=curr.i+1;N.j=curr.j-1;	q.push_back(N);}
		if(F[curr.i -1][curr.j +1] && D[curr.i -1][curr.j +1]==-1)	{D[curr.i -1][curr.j +1]=D[curr.i][curr.j]+1;	N.i=curr.i-1;N.j=curr.j+1;	q.push_back(N);}
		if(F[curr.i -1][curr.j -1] && D[curr.i -1][curr.j -1]==-1)	{D[curr.i -1][curr.j -1]=D[curr.i][curr.j]+1;	N.i=curr.i-1;N.j=curr.j-1;	q.push_back(N);}
		if(F[curr.i ][curr.j +1] && D[curr.i ][curr.j +1]==-1)	{D[curr.i ][curr.j +1]=D[curr.i][curr.j]+1;	N.i=curr.i;N.j=curr.j+1;	q.push_back(N);}
		if(F[curr.i ][curr.j -1] && D[curr.i ][curr.j -1]==-1)	{D[curr.i ][curr.j -1]=D[curr.i][curr.j]+1;	N.i=curr.i;N.j=curr.j-1;	q.push_back(N);}
		if(F[curr.i +1][curr.j ] && D[curr.i +1][curr.j ]==-1)	{D[curr.i +1][curr.j ]=D[curr.i][curr.j]+1;	N.i=curr.i+1;N.j=curr.j;	q.push_back(N);}
		if(F[curr.i -1][curr.j ] && D[curr.i -1][curr.j ]==-1)	{D[curr.i -1][curr.j]=D[curr.i][curr.j]+1;	N.i=curr.i-1;N.j=curr.j;	q.push_back(N);}
		}
	cout<<D[n][m]<<endl;
	return 0;
	}
