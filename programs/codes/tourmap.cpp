#include<cstdio>
#include<map>
#include<string>
#include<cstring>
#include<iostream>
using namespace std;
typedef map<string,string> mmm;
int cost(string S)
	{
	int i=0,p=0;
	while(S[i]!='$')
		{	
		p=p*10+(S[i]-'0');
		i++;
		}
	return p;
	}
int main()
	{
	int len,price,t,n,i,j,tem;
	string S1,S2,C; 
	map<string,int> mcount;
	map<string,int>::iterator it;
	mmm mpair;
	map<string,int> mfcost;
	scanf("%d",&t);
	while(t--)
		{
		mcount.clear();
		mpair.clear();
		mfcost.clear();
		price=0;
		scanf("%d",&n);
		getchar();
		for(i=1;i<n;i++)
			{
			cin>>S1>>S2>>C;
			tem=cost(C);
			price+=tem;
			mcount[S1]++;	
			mcount[S2]++;
			mpair[S1]=S2;
			mfcost[S1]=tem;
			}
		for(it=mcount.begin();it!=mcount.end();it++)
			if((mcount[(*it).first]==1)&&(mfcost[(*it).first]>0))	break;
		S1.assign((*it).first);
j=0;
		while(j<n-1)
			{
			cout<<S1<<" ";
			cout<<mpair[S1]<<" ";
			cout<<mfcost[S1]<<"$"<<"\n";
			S1.assign(mpair[S1]);
			j++;
			}
		printf("%d$\n",price);
		}
	return 0;
	}
