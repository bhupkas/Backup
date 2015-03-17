#include"stdio.h"
#include"vector"
#include"map"
#include"algorithm"
using namespace std;
typedef long long int LL;
LL mi(LL a,LL b)
	{
		if(a<b)	return a;
		return b;
	}
LL ma(LL a,LL b)
	{
		if(a>b)	return a;
		return b;
	}
LL gcd(LL a,LL b)
	{
		if(b==0)	return a;
		return gcd(b,a%b);
	}
LL lcm(LL a,LL b)
	{
		return (a*b)/(gcd(ma(a,b),mi(a,b)));
	}
typedef long long int LL;
#define BUF 4096 // block size on my disk is 4KBs
char ibuf[BUF];
LL ipt = BUF;
LL read() {
while (ipt < BUF && ibuf[ipt] < '0') ipt++;
if (ipt == BUF) {
    fread(ibuf, 1, BUF, stdin);
    ipt = 0;
    while (ipt < BUF && ibuf[ipt] < '0') ipt++;
}
LL n = 0;
while (ipt < BUF && ibuf[ipt] >= '0') n = (n*10)+(ibuf[ipt++]-'0');
if (ipt == BUF) {
    fread(ibuf, 1, BUF, stdin);
    ipt = 0;
    while (ipt < BUF && ibuf[ipt] >= '0') n = (n*10)+(ibuf[ipt++]-'0');
}
return n;
}
map< LL, LL > mymap[41];
LL A[41][40000],S[41];
void pre()
	{
		mymap[1][1]=1;
		mymap[2][1]=1;
		mymap[2][2]=2;
		S[1]=1;
		S[2]=2;
		A[1][0]=1;
		A[2][0]=1;
		A[2][1]=2;
		map < LL, LL>::iterator it2,it,it1;
		LL si,temp,i,j,count;
		for(i=3;i<41;i++)
			{
				si=0;
				for(it1=mymap[i-1].begin();it1!=mymap[i-1].end();it1++)
					{
						temp=(*it1).first;
						mymap[i][temp]=mymap[i-1][temp];
					}
				temp=i;
				mymap[i][temp]+=1;
				for(it1=mymap[i-1].begin();it1!=mymap[i-1].end();it1++)
					{
						temp=lcm((*it1).first,i);
						mymap[i][temp]+=mymap[i-1][(*it1).first];
					}
				for(it1=mymap[i].begin();it1!=mymap[i].end();it1++)
						A[i][si++]=(*it1).first;
				S[i]=si;
			}
		for(i=1;i<41;i++)
			{
				count=0;
				it=mymap[i].end();
				while(1)
					{
						it--;
						count+=(*it).second;
						mymap[i][(*it).first]=count;
						if(it==mymap[i].begin())	break;
					}
			}
	}
int search(int idx,int high,LL m)
{
	int low=0,mid;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(mid==0 && A[idx][mid]>=m)
			return mid;
		else if(A[idx][mid]>=m && A[idx][mid-1]<m)
			return mid;
		else if (A[idx][mid]>=m)
			high=mid-1;
		else
			low=mid+1;
	}
	return -1;
}

int main()	
	{
		LL k,i,t,n,m,ans;
		int idx;
		pre();
		map<LL,LL>::iterator itt;
		t=read();
		for(k=1;k<=t;k++)
			{
				ans=0;
				n=read();m=read();
/*
Binary Search on A[n][i] A[n] is an array containing S[n] elements and u have to find the smallest number which is greater than or equal to m
*/
				itt=mymap[n].begin();
				idx=search(n,S[n]-1,m);
				if(idx==-1)
					printf("Case #%lld: 0\n",k);
				else
				{
					itt=mymap[n].find(A[n][idx]);
					printf("Case #%lld: %lld\n",k,(*itt).second);
				}
			}
		return 0;
	}