/* bhupkas */

#include "bits/stdc++.h"

using namespace std;

int n,m,x,y,z,p;
int R[100005];
int C[100005];

int R1[100005];
int C1[100005];
void clockrot()
{
	for(int i = 0 ; i < p ; ++i)	C1[i] = n + 1 - R[i] , R1[i] = C[i]; 
	for(int i = 0 ; i < p ; ++i)	C[i] = C1[i] , R[i] = R1[i];
	swap(n,m);
}

void anticlockrot()
{
	for(int i = 0 ; i < p ; ++i)	C1[i] = R[i] , R1[i] = m + 1 - C[i];
	for(int i = 0 ; i < p ; ++i)	C[i] = C1[i] , R[i] = R1[i];
	swap(n,m);
}

void mirror()
{
	for(int i = 0 ; i < p ; ++i)	R1[i] = R[i] , C1[i] = m + 1 - C[i];
	for(int i = 0 ; i < p ; ++i)	C[i] = C1[i] , R[i] = R1[i];
}


int main()
{
	cin >> n >> m >> x >> y >> z >> p;
	x %= 4;
	z %= 4;
	y %= 2;
	for(int i = 0 ; i < p ; ++i)	cin >> R[i] >> C[i] ;
	for(int i = 0 ; i < x ; ++i)	clockrot();
	if(y&1)	mirror();
	for(int i = 0 ; i < z ; ++i)	anticlockrot();
	for(int i = 0 ; i < p ; ++i)	cout << R[i] << " " << C[i] << endl;
	return 0;
}
