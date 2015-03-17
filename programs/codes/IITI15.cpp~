/* bhupkas */

#include "bits/stdc++.h"

using namespace std;

struct node
{
	int l,r,idx;
};

typedef struct node Node;

int A[20003];

Node N[20003];

bool cmp(Node a , Node b)
{	
	return a.l > b.l;
}
int inv[20003];

int re[20004];

int main()
{
	int n;
	cin >> n;
	for(int i = 0 ; i < n ; i++)	cin >> A[i];
	int q;
	cin >> q;
	int l,r;
	for(int i = 0 ; i < q ; i++)
	{
		cin >> l >> r;
		N[i].idx = i;
		N[i].l = l - 1;
		N[i].r = r - 1;
	}
	sort(N,N+q,cmp);
	int counter = 0;
	for(int i = n - 1; i >= 0 ; i--)
	{
		int cnt = 0 ;
		for(int j = i + 1 ; j < n ; j++)
		{
			if(A[j] < A[i])	cnt++;
			inv[j] += cnt;
		}	
		while(N[counter].l == i && counter < q)
		{
			re[N[counter].idx] = inv[N[counter].r];
			counter++;
		}
	}
	for(int i = 0 ; i < q ; i++)	cout << re[i] << endl;
	return 0;
}
