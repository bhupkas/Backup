#include<stdio.h>
using namespace std;
#include<vector>
#include<algorithm>
typedef struct data	{
	int start;
	int end;
	}Data;
int myf(Data a,Data b)
	{
	if(a.end<b.end)	return 1;
	else			return 0;
	}
int main()
	{
	int count=0,min,t,n,t1,t2,i,ti;
	vector<Data> v;
	scanf("%d",&t);
	Data d;
	while(t--)
		{
		count=0;
		scanf("%d",&n);
		while(n--)
			{	
			scanf("%d %d",&t1,&t2);
			d.start=t1;
			d.end=t2;
			v.push_back(d);
			}
		sort(v.begin(),v.end(),myf);
		count++;	ti=v.at(0).end;
		for(i=1;i<v.size();i++)
			{
			if(v.at(i).start>=ti)	{ti=v.at(i).end;	count++;}
			} 
		printf("%d\n",count);
		v.clear();
		}
	return 0;
	}
			


