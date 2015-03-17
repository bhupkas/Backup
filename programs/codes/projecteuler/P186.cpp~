/* bhupkas */

#include "bits/stdc++.h"

using namespace std;

typedef long long LL;

#define MOD (LL)1000000

int PARENT[1000006];
LL B[60];

LL k;

int idx;

LL A[60];
LL idfun(int num)
{
	int ii = idx - num;
	if(ii < 0)	ii += 55;
	return A[ii];
}

LL fun()
{
	LL re ;
	if(k <= 55)
	{
		re = 100003LL;
		re = (re - 200003LL * (LL)k ) % MOD;
		re = (re + (300007LL * (LL)(k*k*k) % MOD ) ) %MOD;
	}
	else	re = (idfun(24) + idfun(55)) % MOD;
	re = (re + MOD) % MOD;
	k++;
	A[idx] = re;
	idx++;
	if(idx == 55)	idx = 0;
	return re;	
}

int SIZE[1000006];

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
	k = 1;
	idx = 0;
	for(int i = 0 ; i < 1000006; i++)	PARENT[i] = i , SIZE[i] = 1;
	int cnt = 0;
	while(SIZE[par(524287)] < 990000)
	{	
		LL c1 = fun();
		LL c2 = fun();
		if(c1 == c2)	continue;
		cnt++;
		if(!issame((int)c1,(int)c2))	uni((int)c1,(int)c2);
	}
	cout << cnt << endl;
	return 0;
}
