/* bhupkas */

#include "bits/stdc++.h"

using namespace std;

int A[11],B[11];

int n;

int C[11];

struct node 
{
	int val1,val2,idx;
};

typedef struct node Node;

Node N[11];

Node N1[11];

void radix()
{
	int Co[11];
	for(int i = 0 ; i < 10 ; ++i)	Co[i] = 0;
	for(int i = 0 ; i < n ; ++i)	Co[N[i].val2]++;
	for(int i = 1 ; i < 10 ; ++i)	Co[i] += Co[i-1];
	for(int i = n - 1 ; i >= 0 ; i--)
	{
		N1[Co[N[i].val2] - 1].val2 = N[i].val2;
		N1[Co[N[i].val2] - 1].val1 = N[i].val1;
		N1[Co[N[i].val2] - 1].idx = N[i].idx;
		Co[N[i].val2]--;	
	}
	//for(int i = 0 ; i < n ; ++i)	cout << N1[i].idx << endl;
	for(int i = 0 ; i < 10 ; ++i)	Co[i] = 0;
	for(int i = 0 ; i < n ; ++i)	Co[N1[i].val1]++;
	for(int i = 1 ; i < 10 ; ++i)	Co[i] += Co[i-1];
	for(int i = n - 1 ; i >= 0 ; i--)
	{
		N[Co[N1[i].val1] - 1].val2 = N1[i].val2;
		N[Co[N1[i].val1] - 1].idx = N1[i].idx;
		N[Co[N1[i].val1] - 1].val1 = N1[i].val1;
		Co[N1[i].val1]--;	
	}
	for(int i = 0 ; i < n ; ++i)	cout << N[i].val1 << " " << N[i].val2 << " " << N[i].idx << endl;
	
}

int main()
{
	cin >> n;
	for(int i = 0 ; i < n ; ++i)	cin >> A[i] >> B[i];
	for(int i = 0 ; i < n ; ++i)	N[i].val1 = A[i] , N[i].val2 = B[i] , N[i].idx = i;
	radix();
	return 0;
}
