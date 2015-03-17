#include<cstdio>
#include<deque>
#include<cstring>
int change(char A[])
	{
	return (A[0]-'0')*1000+(A[1]-'0')*100+(A[2]-'0')*10+(A[3]-'0');
	}
int main()
	{
	int num,i,j,t,S[5],curr,D[5];
	deque<int> q;
	scanf("%d",&t);
	bool Sieve[10001],visited[10001];
	for(i=0;i<10005;i++)
		{
		Sieve[i]=true;
		visited[i]=false;	
		}
	Sieve[1]=false;
	for(i=2;i<=100;i++)	
		{
		if(Sieve[i])
			{
			for(j=i;j<=10000/i;j++)
				Sieve[i*j]=false;
			}
		}
	while(t--)
		{
		q.clear();
		scanf("%s %s",S,D);	
		q.push_back(change(S));
		while(!q.empty())
			{
			curr=q.front();
			visited[curr]=true;
			q.pop_front();	
			}
		}
	return 0;
	}
