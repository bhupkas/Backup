#include<cstdio>
#include<cstring>
#include<vector>
typedef long long int ll;
using namespace std;
vector<int> primes;
char I[42],O[42];
void makesieve()
	{	
	int i;
	bool A[1000000];	
	for(i=0;i<1000000;i++)
		A[i]=true;
	A[1]=false;
	for(i=2;i<=1000;i++)
		{
		if(A[i])
			{
			for(j=i;j<=1000000/i;j++)
				A[i*j]=false;
			}
		}
	for(i=2;i<1000000;i++)
		if(A[i])	primes.push_back(i);
	}
int main()
	{
	int i,len;
	for(i=0;i<20;i++)
		{
		gets(I);
		
		}
	return 0;
	}
