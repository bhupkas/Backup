/* bhupkas */

using namespace std;

#include "bits/stdc++.h"

typedef long long LL;

const int N = (int)(1e6 + 5);

typedef long long LL;

int A[N],B[N],C[N];

int main()
{
	string str;
	cin >> str;
	int n = str.size();
	int re = 0;
	for(int i = 0 ; i < n ; ++i)	
	{
		if(str[i] == 'A')	A[i]++;
		else if(str[i] == 'B')	B[i]++;
		else 	C[i]++;
	}
	for(int i = 1 ; i < n ; ++i)	A[i] += A[i-1] , B[i] += B[i-1] , C[i] += C[i-1];	
	for(int i = 0 ; i < n ; ++i)
	{	
		int a,b,c;
		if(i == 0)	a = b = c = 0;
		else	a = A[i-1] , b = B[i-1] , c = C[i-1];
		for(int j = i ; j < n ; ++j)
		{
			if(A[j] - a == B[j] - b && A[j] - a == C[j] - c)	re++;		
		}
	}
	cout << re << endl;
	return 0;
}
