#include"iostream"
#include"stdio.h"
#include"deque"
#include"algorithm"
using namespace std;
int main()
	{
	int temp,t,n,i,j,ans,min;
	int A[1001];
	deque<int> q;
	deque<int>::iterator it,it1;
	cin>>t;
	while(t--)
		{
		q.clear();
		cin>>n;
		for(i=0;i<n;i++)	cin>>A[i];
		if(n==1)	{cout<<"1"<<endl;	continue;}
		if(n==2)
			{
			if(A[0]<A[1])	{cout<<"2"<<endl;	continue;}
			else		{cout<<"1"<<endl;	continue;}
			}
		q.push_front(A[n-1]);
		for(i=n-2;i>=0;i--)
			{
			if(A[i]<=q.front())	{q.push_front(A[i]);	continue;}
			it=q.begin();
			it1=it+1;
			if(it1==q.end())
				{
				temp=q.front();			
				q.clear();
				q.push_front(max(A[i],temp));
				}
			else
				{
				if(A[i]<(*it1))	{q.pop_front();	q.push_front(A[i]);}
				}
			}
		cout<<q.size()<<endl;
		}
	return 0;
	}
