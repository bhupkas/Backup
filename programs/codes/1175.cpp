/* bhupkas */

using namespace std;

#include "bits/stdc++.h"

const int N = 1005;

string str;

struct node
{
	int a,b,idx;
};

typedef struct node Node;

int P[18][N];
Node L[N];

int n;

int stp;

map < int , int > mymap;

int T[N];

Node T1[N],T2[N];
int C1[N],C2[N];

int A[N][N];

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

int LCP (int x, int y)
{
    int ret = 0;
    if (x == y)
        return n - x;

    for (int k = stp - 1; k >= 0 && x < n && y < n; k--)
    {
        if (P[k][x] == P[k][y])
        {
            x += (1 << k);
            y += (1 << k);
            ret += (1 << k);
        }
    }

    return ret;
}

int B[N];

void pre()
{
	for(int k = 1 ; k <= n ; ++k)
		for(int i = 0 ; i < n - k + 1 ; ++i)
			A[k][i] = LCP(L[i].idx,L[i+k-1].idx);
	for(int i = 0 ; i <= n ; ++i)	B[i] = 0;
	for(int i = 1 ; i <= n ;++i)
		for(int j = 0 ; j < n - i + 1 ; ++j)
			B[i] = max(B[i],A[i][j]);
}

int main()
{
	getline(cin,str);
	int q;
	cin >> q;
	int l;
	pre();
	while(q--)
	{
		cin >> l;
		int occ;
		for(int i = 1 ; i < n ; ++i)
		{
			if(B[i] >= l && B[i+1] < l)
			{
				occ = i;
				break;
			}
		}
		if(B[n] >= l)	occ = n;
		int st;
		for(int i = 0 ; i < n - occ + 1 ; ++i)
		{
			if(A[occ][i] >= l)
			{
				st = i;
				break;
			}
		}
		string re = "";
		for(int i = 0 ; i < l ; ++i)	re.push_back(str[L[st].idx+i]);
		cout << occ << " " << re << endl;
	}
	return 0;
}
