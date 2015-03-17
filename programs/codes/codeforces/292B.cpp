#include "bits/stdc++.h"

using namespace std;

const int N = 100005;

vector <int > adj[N];
int n,m;
int A[N];
int main()
{
	cin >> n >> m;
	int x,y;
	for(int i = 0 ;i < m ; i++)
	{
		cin >> x >> y;
		x--;
		y--;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	for(int i = 0 ; i < n ; i++)	A[i] = 0;
	for(int i = 0 ; i < n ; i++)	A[adj[i].size()]++;
	if(A[2]==n)	cout << "ring topology" << endl;
	else if(A[1]==2 && A[2] == n-2)	cout << "bus topology" << endl;
	else if(A[1]==n-1 && A[n-1]==1)	cout << "star topology" << endl;
	else	cout << "unknown topology" << endl;
	return 0;
}
