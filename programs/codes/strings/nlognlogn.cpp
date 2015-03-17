/* bhupkas */

#include "bits/stdc++.h"

using namespace std;

const int N = 100005;

const int lN = 17;

struct node
{
	int val1 , val2 , idx;
};

typedef struct node Node;
Node L[N];

string str;
int stp,n;

int P[lN][N];

bool cmp(Node N1 , Node N2)
{
	if(N1.val1 == N2.val1)	return N1.val2 < N2.val2;
	return N1.val1 < N2.val1;
}

void suffix()
{
	n = str.size();
	for(int i = 0 ; i < n ; ++i)	L[i].val1 = str[i] - '0' , L[i].val2 = 0 , L[i].idx = i;
	sort(L,L+n,cmp);
	P[0][L[0].idx] = 0;
	for(int i = 1 ; i < n ; ++i)	
		if(L[i].val1 == L[i-1].val1)	P[0][L[i].idx] = P[0][L[i-1].idx];
		else	P[0][L[i].idx] = i;
	bool foo;
	int cnt;
	for(cnt = 1 , stp = 1 ;; cnt <<= 1, foo = true ,stp++)
	{	
		for(int i = 0 ; i < n ; ++i)	L[i].val1 = P[stp-1][i] , L[i].val2 = i + cnt < n ? P[stp-1][i+cnt] : -1 , L[i].idx = i;
		sort(L,L+n,cmp);
		P[stp][L[0].idx] = 0;
		for(int i = 1 ; i < n ; ++i)	
			if(L[i].val1 == L[i-1].val1 && L[i].val2 == L[i-1].val2)	P[stp][L[i].idx] = P[stp][L[i-1].idx] , foo = false;
			else	P[stp][L[i].idx] = i;
		if(foo)	{stp++;	break;}
	}
	stp--;
}


int main()
{	
	cin >> str;
	suffix();
	for(int i = 0 ; i < n ; ++i)	cout << P[stp][i] << " ";
	cout << endl;
	return 0;
}
