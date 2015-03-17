#include"stdio.h"
#include"vector"
#include"math.h"
using namespace std;
int f(vector<int> factors, int start, int nf, int m) //nf=no. of factors, start=0, m=M
{
    if(start == nf-1) 
        return (m / factors.at(start));

    return (m / factors.at(start)) + f(factors, (start + 1), nf, m)- ((f(factors, (start + 1), nf, m / factors.at(start) )));
}
int main()
	{
	int j,i,t,n1,n,m,nf=0;
	vector<int> pr;
	vector<int> v;
	vector<int>::iterator it;
	bool prime[100002];
	for(i=0;i<100002;i++)	prime[i]=true;
	prime[1]=false;
	for(i=2;i<=sqrt(100002);i++)
		{
		if(prime[i])
			{
			for(j=i;j<=100002/i;j++)
				prime[i*j]=false;
			}
		}
	for(i=2;i<100002;i++)
		if(prime[i])	pr.push_back(i);
	scanf("%d",&t);
	while(t--)
		{
		v.clear();
		nf=0;
		scanf("%d %d",&n,&m);
		n1=n;
		for(it=pr.begin();(*it)<=sqrt(n1);it++)
			{
			if(!(n%(*it)))
				{
				nf++;
				v.push_back((*it));
				while(!(n%(*it)))	n/=(*it);
				}
			}
		if(n!=1)	{v.push_back(n);	nf++;}
		printf("%d\n",f(v,0,nf,m));
		}
	return 0;
	}

