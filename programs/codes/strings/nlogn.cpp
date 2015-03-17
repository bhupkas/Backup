/* bhupkas */

#include "bits/stdc++.h"

using namespace std;

const int N = 100005;

const int lN = 17;

struct node
{
	int val1 , val2 ; 
};

typedef struct node Node;
Node L[N];

string str;
int stp,n;

int P[lN][N];

int Co[N],Co1[N];

int R[N],R1[N];

bool cmp(Node N1 , Node N2)
{
	return N1.val1 < N2.val1;
}

void radix()
{
	
	for(int i = 0 ; i <= n ; ++i)	Co[i] = Co1[i] = 0 ;
	for(int i = 0 ; i < n ; ++i)	Co[L[i].val2 + 2]++ , Co1[L[i].val1 + 1]++; 
	for(int i = 1 ; i <= n ; ++i)	Co[i] += Co[i-1] , Co1[i] += Co1[i-1];
	for(int i = 0 ; i < n ; ++i)	R[Co[L[i].val2 + 1]++] = i;
	for(int i = 0 ; i < n ; ++i)	R1[Co1[L[R[i]].val1]++] = R[i];
	//for(int i = n - 1 ; i >= 0 ; --i)	R[Co[L[i].val2]-1] = i , Co[L[i].val2]--;
	//for(int i = n - 1 ; i >= 0 ; --i)	R1[Co1[L[R[i]].val1]-1] = R[i] , Co1[L[R[i]].val1]--;
}


void suffix()
{
	n = str.size();
	stp = 0;
	for(int i = 0 ; i < n ; ++i)	L[i].val1 = str[i] - '0' , L[i].val2 = i;
	sort(L,L+n,cmp);
	P[0][L[0].val2] = 0;
	for(int i = 1 ; i < n ; ++i)
		if(L[i].val1 == L[i-1].val1)	P[0][L[i].val2] = P[0][L[i-1].val2];
		else	P[0][L[i].val2] = i;
	bool foo;
	int cnt;
	for(int i = 0 ; i < n ; ++i)	cout << P[0][i] << " ";	cout << endl;
	/*
	for(cnt = 1 , stp = 1 ;; foo = true , cnt <<= 1 , stp++)
	{
		
		
		for(int i = 0 ; i < n ; ++i)	L[i].val1 = P[stp-1][i] , L[i].val2 = i+cnt < n ? P[stp-1][i+cnt] : -1;
		radix();

		for(int i = 0 ; i < n ; ++i)	cout << R1[i] << " ";
		cout << endl;

		P[stp][R1[0]] = 0;
		for(int i = 1 ; i < n ; ++i)
			if(L[i].val1 == L[i-1].val1 && L[i].val2 == L[i-1].val2) P[stp][R1[i]] = P[stp][R1[i-1]] , foo = false;
			else	P[stp][R1[i]] = i;
		
		break;
		
		
		if(foo)	{stp++;	break;}
	}
	*/
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
