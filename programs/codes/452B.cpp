/* bhupkas */

using namespace std;

#include "bits/stdc++.h"

double len(pair < int , int > V[4])
{
	double re = 0.0;
	for(int i = 0 ; i < 3 ; ++i)
		re +=  sqrt((V[i].first - V[i+1].first) * (V[i].first - V[i+1].first) + (V[i].second - V[i+1].second) * (V[i].second - V[i+1].second));
		return re; 
}

int main()
{
	int n,m;
	cin >> n >> m;
	if(n == 0)
	{
		cout << "0 1" << endl;
		cout << "0 " << m <<  endl;
		cout << "0 0" << endl;
		cout << "0 " << m - 1 << endl;
		return 0;
	}
	if(m == 0)
	{
		cout << "1 0" << endl;
		cout << n << " 0" <<  endl;
		cout << "0 0" << endl;
		cout << n - 1 << " 0" << endl;		
		return 0;
	}
	pair < int , int > P1[4] , P2[4];
	P1[0].first = 0;
	P1[0].second = 0;
	P1[1].first = n-1;
	P1[1].second = m;
	P1[2].first = 1;
	P1[2].second = 0;
	P1[3].first = n;
	P1[3].second = m;
	P2[0].first = 0;
	P2[0].second = 0;
	P2[1].first = n;
	P2[1].second = m;
	P2[2].first = 0;
	P2[2].second = 1;
	P2[3].first = n;
	if(m- 2 > 1)	P2[3].second = m - 1;
	else	P2[3].second = 0;
	if(len(P1) > len(P2))	
		for(int i = 0 ; i < 4 ; ++i)	cout << P1[i].first << " " << P1[i].second << endl;
	else
		for(int i = 0 ; i < 4 ; ++i)	cout << P2[i].first << " " << P2[i].second << endl;	 
	return 0;
}
