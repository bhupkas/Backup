/* bhupkas */

using namespace std;

#include "bits/stdc++.h"

const int N = 200005;

string str;

struct node
{
	int a,b,idx;
};

typedef struct node Node;

int P[20][N];
Node L[N];

int n;

int stp;

map < int , int > mymap;

int T[N];

Node T1[N],T2[N];
int C1[N],C2[N];

int F[N];

map < int , int > lg;

void pre()
{
	int cnt = 1 ;
	int val = 0;
	while(cnt < N)
	{
		lg[cnt] = val;
		cnt <<= 1;
		val++;
	}
}

void radixsort()
{

	for(int i = 0 ; i < n ; ++i)	L[i].b++;
	for(int i = 0 ; i <= n ; ++i)	C1[i] = C2[i] = 0;
	for(int i = 0 ; i < n ; ++i)	C1[L[i].b]++;
	for(int i = 1 ; i <= n ; ++i)	C1[i] += C1[i-1];
	for(int i = n - 1; i >= 0 ; --i)
	{
		T1[C1[L[i].b]-1].a = L[i].a; 
		T1[C1[L[i].b]-1].b = L[i].b;
		T1[C1[L[i].b]-1].idx = L[i].idx;
		C1[L[i].b]--;
	}
	
	for(int i = 0 ; i < n ; ++i)	C2[T1[i].a]++;
	for(int i = 1 ; i <= n ; ++i)	C2[i] += C2[i-1];
	for(int i = n - 1 ; i >= 0 ; --i)
	{	
		T2[C2[T1[i].a]-1].a = T1[i].a;
		T2[C2[T1[i].a]-1].b = T1[i].b;
		T2[C2[T1[i].a]-1].idx = T1[i].idx;
		C2[T1[i].a]--; 
	}
	for(int i = 0 ; i < n ; ++i)	L[i] = T2[i];
}

void suffix()
{
	n = str.size();
	for(int i = 0 ; i < n ; ++i)	P[0][i] = (int)(str[i] - 'a');
	for(int i = 0 ; i < n ; ++i)	T[i] = P[0][i];
	sort(T,T+n);
	int co = 0;
	mymap[T[0]] = co , co++;
	for(int i = 1 ; i < n ; ++i)	if(T[i] != T[i-1])	mymap[T[i]] = co , co++;
	for(int i = 0 ; i < n ; ++i)	P[0][i] = mymap[P[0][i]];
	bool foo = true;
	int cnt;
	for(stp = 1 , cnt = 1 ; ; stp++ , cnt <<= 1 , foo = true)
	{
		for(int i = 0 ; i < n ; ++i)
		{
			L[i].a = P[stp-1][i];
			L[i].b = i + cnt < n ? P[stp-1][i+cnt] : -1;
			L[i].idx = i;
		}
		radixsort();
		P[stp][L[0].idx] = 0;
		for(int i = 1 ; i < n ; ++i)
		{
			if(L[i].a == L[i-1].a && L[i].b == L[i-1].b)	P[stp][L[i].idx] = P[stp][L[i-1].idx] , foo = false;
			else	P[stp][L[i].idx] = i;
		}	
		if(foo)
		{
			stp++;
			break;
		}
	}
}

void ranks(int l)
{
	int c1,c2,ln1,ln2;
	c1 = l&-l;
	ln1 = lg[c1];
	for(int i = 0 ; i < n ; ++i)	F[i] = P[ln1][i];
	l -= c1;
	while(l)
	{
		c2 = l&-l;
		ln2 = lg[c2];
		for(int i = 0 ; i < n ; ++i)
		{
			L[i].a = F[i];
			L[i].b = i + c1 < n ? P[ln2][i+c1] : -1;
			L[i].idx = i;
		}
		radixsort();
		F[L[0].idx] = 0;
		for(int i = 1 ; i < n ; ++i)
		{
			if(L[i].a == L[i-1].a && L[i].b == L[i-1].b)	F[L[i].idx] = F[L[i-1].idx];
			else	F[L[i].idx] = i;
		}
		l -= c2;
		c1 += c2;
	}
}

int main()
{
	pre();
	int t;
	int foo;
	cin >> t;
	while(t--)
	{
		cin >> foo;
		cin >> str;
		int len = str.size();
		str = str + str;
		suffix();
		ranks(len);
		int idx;
		int mn = 10000000;
		for(int i = 0 ; i < n - len + 1; ++i)	
		{
			if(F[i] < mn)
			{
				idx = i;
				mn = F[i];	
			}
		}
		cout << idx << endl;	
	}
	return 0;
}
